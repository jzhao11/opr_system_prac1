# system call
# project for operating system
# author: jianfei zhao
# github: https://github.com/jzhao11


# Building Instructions
make
By using the original Makefile (with gcc command included) in the repo, the instruction "make" (under the repo csc415-p1-jzhao11) can build the program and generate the executable file "hw".


# Run Instructions
./hw
This instruction is also executed under csc415-p1-jzhao11, which runs the executable file "hw" and prints out the expected string on the screen (terminal).


# What the Program Does
First of all, header files are included and symbolic constant NAME is defined. <unistd.h> is for low-level write() system call. <stdio.h> is for sprintf(), which formats the output into a buffer. <stdlib.h> is for malloc(), which allocates memory space for char* output. Then NAME is defined as my first name.

In main function, output is allocated with space, and formatted with the required string by using sprintf(), and the return value (total number of characters written) is stored as length. When write() is called to output on the screen, its return value is stored as bytes_written. Both length and bytes_written are used to check if there is error with function call. If length (or bytes_written) has negative value, it implies failure and the error message will be printed out as notice.
