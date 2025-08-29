#include "two_fer.h"
#include <stdio.h>
#include <stddef.h>

void two_fer(char *buffer, const char *name){
    if (name == NULL)
        name = "you";
    sprintf(buffer, "One for %s, one for me.", name);
}