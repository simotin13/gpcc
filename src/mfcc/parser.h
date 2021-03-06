#ifndef _PARSER_H_
#define _PARSER_H_

#include "lex.h"
#include "ast.h"
// ============================================================================
// enum define
// ============================================================================

// ============================================================================
// struct define
// ============================================================================

// ============================================================================
// prototype functions
// ============================================================================
int parse_tokens(Vector* tokens, Vector* dataTypes, Program* program);

#endif  // _PARSER_H_