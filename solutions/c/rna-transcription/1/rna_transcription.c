#include "rna_transcription.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
char *to_rna(const char *dna){
    size_t len = strlen(dna);
    char *rna = (char*)malloc(len + 1);
    char*temp = rna;
    while(*dna){
        switch (*dna){
            case 'G':
                *temp++ = 'C';
                break;
            case 'C':
                *temp++ = 'G';
                break;
            case 'T':
                *temp++ = 'A';
                break;
            case 'A':
                *temp++ = 'U';
                break;
        }
        dna++;
    }
    *temp = '\0';
    return rna;
}