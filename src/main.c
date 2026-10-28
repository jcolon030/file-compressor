#include <stdio.h>
#include "huffman.h"

int main(int argc, char **argv) {
    
    FILE* infile;
    char buffer[256];
    size_t buffer_length;

    if (argc != 2) {
        fprintf(stderr, "Incorrect usage\n");
        fprintf(stderr, "Usage: compressor infile");
        return 1;
    }

    infile = fopen(argv[1], "r");
    if (infile == NULL) {
        fprintf(stderr, "Cannot open file for reading: %s\n", argv[1]);
    }

    printf("File Compressor v0.1.0\n");
    return 0;
}