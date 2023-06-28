#include "main.h"

print_t print_funcs[] = {
    {"p", print_add},
    {"li", prinlint},
    {"lu", prinlunt},
    {"lo", prinloct},
    {"lx", prinlhex},
    {"lX", prinlupx},
    {"hi", prinhint},
    {"hu", prinhunt},
    {"ho", prinhoct},
    {"hx", prinhhex},
    {"hX", prinhupx},
    {"ti", prinpint},
    {"to", prinnoct},
    {"tx", prinnhex},
    {"tX", prinnupx},
    {"si", prinsint},
    {NULL, NULL}
};

