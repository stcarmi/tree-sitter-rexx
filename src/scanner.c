#include <tree_sitter/parser.h>

enum TokenType {
    BLOCK_COMMENT,
};

void *tree_sitter_rexx_external_scanner_create() {
    return NULL;
}

bool tree_sitter_rexx_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    if (!valid_symbols[BLOCK_COMMENT]) {
        return false;
    }

    // Skip whitespace
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
           lexer->lookahead == '\n' || lexer->lookahead == '\r') {
        lexer->advance(lexer, true);
    }

    // Look for /*
    if (lexer->lookahead != '/') {
        return false;
    }
    lexer->advance(lexer, false);
    if (lexer->lookahead != '*') {
        return false;
    }
    lexer->advance(lexer, false);

    // Nested comment support: track depth
    int depth = 1;
    while (depth > 0 && lexer->lookahead != 0) {
        if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);
            if (lexer->lookahead == '*') {
                lexer->advance(lexer, false);
                depth++;
                continue;
            }
            continue;
        }
        if (lexer->lookahead == '*') {
            lexer->advance(lexer, false);
            if (lexer->lookahead == '/') {
                lexer->advance(lexer, false);
                depth--;
                continue;
            }
            continue;
        }
        lexer->advance(lexer, false);
    }

    lexer->result_symbol = BLOCK_COMMENT;
    lexer->mark_end(lexer);
    return true;
}

unsigned tree_sitter_rexx_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_rexx_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

void tree_sitter_rexx_external_scanner_destroy(void *payload) {
}
