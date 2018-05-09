#ifndef RUNTIME_DOCUMENT_H_
#define RUNTIME_DOCUMENT_H_

#include "runtime/parser.h"
#include "runtime/tree.h"
#include "runtime/tree_cursor.h"
#include <stdbool.h>

struct TSDocument {
  Parser parser;
  TSInput input;
  Tree *tree;
  TSTreeCursor cursor1;
  TSTreeCursor cursor2;
  size_t parse_count;
  bool valid;
  bool owns_input;
};

#endif
