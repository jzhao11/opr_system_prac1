/**
 * CSC 415 Assignment 1
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define NAME "Jianfei"

int
main(int argc,  char** argv)
{
        char* output = malloc(64);
        int length = sprintf(output, "CSC 415, This program written by %s!!!\n", NAME);

        // check if there is error with sprintf() execution
        if (length < 0) {
                perror("sprintf error");
        }

        int bytes_written = write(1, output, length);

        // check if there is error with write() execution
        if (bytes_written < 0) {
                perror("write error");
        }

	return 0;
}
