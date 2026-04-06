// Tree-sitter grammar for REXX
// Focused on tokenization for syntax highlighting, not full parsing.
// REXX's extremely loose syntax makes full structural parsing impractical.

module.exports = grammar({
  name: 'rexx',

  externals: $ => [
    $.block_comment,
  ],

  extras: $ => [
    /\s/,
    $.block_comment,
  ],

  rules: {
    program: $ => repeat($._token),

    _token: $ => choice(
      $.label,
      $.keyword,
      $.builtin_function,
      $.function_call,
      $.string,
      $.number,
      $.operator,
      $.paren_open,
      $.paren_close,
      $.semicolon,
      $.identifier,
    ),

    // Labels: identifier followed by colon (at start-ish of line)
    label: $ => seq(
      field('name', $.identifier),
      token.immediate(':'),
    ),

    // Function call: name followed by (args)
    // Name can be identifier, keyword, or builtin since REXX
    // keywords are context-sensitive (e.g. LEFT is both keyword and function)
    function_call: $ => prec(2, seq(
      field('name', alias(
        choice($.identifier, $.keyword, $.builtin_function),
        $.function_name)),
      '(',
      optional($._argument_list),
      ')',
    )),

    _argument_list: $ => seq(
      $._argument,
      repeat(seq(',', $._argument)),
    ),

    _argument: $ => prec.right(repeat1(choice(
      $.function_call,
      $.string,
      $.number,
      $.operator,
      $.identifier,
    ))),

    // REXX keywords (case insensitive)
    keyword: $ => choice(
      // Control flow
      /[iI][fF]/,
      /[tT][hH][eE][nN]/,
      /[eE][lL][sS][eE]/,
      /[dD][oO]/,
      /[eE][nN][dD]/,
      /[sS][eE][lL][eE][cC][tT]/,
      /[wW][hH][eE][nN]/,
      /[oO][tT][hH][eE][rR][wW][iI][sS][eE]/,
      // Loop control
      /[tT][oO]/,
      /[bB][yY]/,
      /[fF][oO][rR]/,
      /[wW][hH][iI][lL][eE]/,
      /[uU][nN][tT][iI][lL]/,
      /[fF][oO][rR][eE][vV][eE][rR]/,
      /[iI][tT][eE][rR][aA][tT][eE]/,
      /[lL][eE][aA][vV][eE]/,
      // I/O
      /[sS][aA][yY]/,
      /[pP][uU][lL][lL]/,
      /[pP][uU][sS][hH]/,
      /[qQ][uU][eE][uU][eE]/,
      // Parse
      /[pP][aA][rR][sS][eE]/,
      /[uU][pP][pP][eE][rR]/,
      /[lL][oO][wW][eE][rR]/,
      /[aA][rR][gG]/,
      /[vV][aA][rR]/,
      /[vV][aA][lL][uU][eE]/,
      /[vV][eE][rR][sS][iI][oO][nN]/,
      /[sS][oO][uU][rR][cC][eE]/,
      /[lL][iI][nN][eE][iI][nN]/,
      // Program control
      /[cC][aA][lL][lL]/,
      /[sS][iI][gG][nN][aA][lL]/,
      /[eE][xX][iI][tT]/,
      /[rR][eE][tT][uU][rR][nN]/,
      /[pP][rR][oO][cC][eE][dD][uU][rR][eE]/,
      /[eE][xX][pP][oO][sS][eE]/,
      // Other
      /[aA][dD][dD][rR][eE][sS][sS]/,
      /[dD][rR][oO][pP]/,
      /[iI][nN][tT][eE][rR][pP][rR][eE][tT]/,
      /[nN][oO][pP]/,
      /[tT][rR][aA][cC][eE]/,
      /[nN][uU][mM][eE][rR][iI][cC]/,
      /[dD][iI][gG][iI][tT][sS]/,
      /[fF][oO][rR][mM]/,
      /[fF][uU][zZ][zZ]/,
      /[oO][pP][tT][iI][oO][nN][sS]/,
      /[oO][nN]/,
      /[oO][fF][fF]/,
      /[wW][iI][tT][hH]/,
    ),

    // Built-in functions — only those that DON'T overlap with keywords
    builtin_function: $ => choice(
      // String functions
      /[aA][bB][bB][rR][eE][vV]/,
      /[cC][eE][nN][tT][eE][rR]/,
      /[cC][eE][nN][tT][rR][eE]/,
      /[cC][oO][mM][pP][aA][rR][eE]/,
      /[cC][oO][pP][iI][eE][sS]/,
      /[dD][eE][lL][sS][tT][rR]/,
      /[dD][eE][lL][wW][oO][rR][dD]/,
      /[jJ][uU][sS][tT][iI][fF][yY]/,
      /[lL][aA][sS][tT][pP][oO][sS]/,
      /[lL][eE][nN][gG][tT][hH]/,
      /[oO][vV][eE][rR][lL][aA][yY]/,
      /[pP][oO][sS]/,
      /[rR][eE][vV][eE][rR][sS][eE]/,
      /[sS][tT][rR][iI][pP]/,
      /[sS][uU][bB][sS][tT][rR]/,
      /[sS][uU][bB][wW][oO][rR][dD]/,
      /[tT][rR][aA][nN][sS][lL][aA][tT][eE]/,
      /[wW][oO][rR][dD]/,
      /[wW][oO][rR][dD][iI][nN][dD][eE][xX]/,
      /[wW][oO][rR][dD][lL][eE][nN][gG][tT][hH]/,
      /[wW][oO][rR][dD][pP][oO][sS]/,
      /[wW][oO][rR][dD][sS]/,
      /[xX][rR][aA][nN][gG][eE]/,
      // Numeric functions (excluding overlaps: min, max, sign, format)
      /[aA][bB][sS]/,
      /[rR][aA][nN][dD][oO][mM]/,
      /[tT][rR][uU][nN][cC]/,
      // Type/test functions
      /[dD][aA][tT][aA][tT][yY][pP][eE]/,
      /[sS][yY][mM][bB][oO][lL]/,
      /[vV][eE][rR][iI][fF][yY]/,
      // Conversion functions
      /[cC]2[xX]/,
      /[cC]2[dD]/,
      /[bB]2[xX]/,
      /[bB]2[dD]/,
      /[dD]2[cC]/,
      /[dD]2[bB]/,
      /[dD]2[xX]/,
      /[xX]2[cC]/,
      /[xX]2[dD]/,
      // System functions (excluding overlaps: date, time, condition, source, linein, queue)
      /[qQ][uU][eE][uU][eE][dD]/,
      /[sS][oO][uU][rR][cC][eE][lL][iI][nN][eE]/,
      /[eE][rR][rR][oO][rR][tT][eE][xX][tT]/,
      // I/O functions (excluding overlaps: linein, lines)
      /[cC][hH][aA][rR][iI][nN]/,
      /[cC][hH][aA][rR][oO][uU][tT]/,
      /[cC][hH][aA][rR][sS]/,
      /[lL][iI][nN][eE][oO][uU][tT]/,
      /[lL][iI][nN][eE][sS]/,
      /[sS][tT][rR][eE][aA][mM]/,
      // Bitwise functions
      /[bB][iI][tT][aA][nN][dD]/,
      /[bB][iI][tT][oO][rR]/,
      /[bB][iI][tT][xX][oO][rR]/,
    ),

    // Operators
    operator: $ => choice(
      '=',
      '==', '\\=', '\\==',
      '<', '>', '<=', '>=', '<>',
      '<<', '>>', '<<=', '>>=',
      '\\<', '\\>',
      '+', '-', '*', '/', '//', '%', '**',
      '||', '&&', '&', '|', '\\',
      ',',
    ),

    // Parentheses (separate from operators to avoid function_call conflicts)
    paren_open: $ => '(',
    paren_close: $ => ')',

    semicolon: $ => ';',

    // Strings
    string: $ => choice(
      /'[^']*'/,
      /"[^"]*"/,
    ),

    // Numbers
    number: $ => /[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/,

    // Identifiers (REXX allows !, ?, _ in identifiers)
    identifier: $ => /[a-zA-Z!?_][a-zA-Z0-9._!?]*/,
  },
});
