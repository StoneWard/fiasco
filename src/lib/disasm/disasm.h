#pragma once

#include "types.h"
#include "globalconfig.h"

class Space;

typedef int (*Peek_task)(Address addr, Space *task, void *value, int width);
typedef int (*Is_adp_mem)(Address addr, Space *task);
typedef const char* (*Get_symbol)(Address addr, Space *task);

extern int
disasm_bytes(char *buffer, unsigned len, Address addr,
             Space *task, int show_symbols, int show_intel_syntax,
             Peek_task peek_task, Is_adp_mem adp_mem, Get_symbol get_symbol);

void disasm_init(void *ptr, unsigned size);
