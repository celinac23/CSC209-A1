#include <stdio.h>
#include <stdlib.h>

#include <string.h>  // Only used for strlen

#define MAXLINE 256

// Error messages
#define USAGE "Usage: encode chunksize textfile msg\n"
#define ENCODE_FAILED "Could not encode message.\n"


int main(int argc, char *argv[]) {
    // Check to make sure the user entered the correct number of arguments
    if(argc != 4) {
        fprintf(stderr, USAGE);
        exit(1);
        // The argument of 1 is a convention indicating the program failed
    }

    FILE *text_fptr; // File pointer for the text document

    // determine message chunks size
    int chunk_size = strtol(argv[1], NULL, 0);
    if(chunk_size == 0) {
        fprintf(stderr, "Invalid chunk size\n");
        exit(1);
    }

    if((text_fptr = fopen(argv[2], "r")) == NULL) {
        perror("fopen");
        exit(1);
    }

    // The message to encode is in argv[3].  We will use a pointer to char
    // to give it a better name.
    char *message = argv[3];
    int msg_length = strlen(message);  // only allowed use of string functions

    // Complete the implmentation below



    fclose(text_ptr);
    return 0;
}
