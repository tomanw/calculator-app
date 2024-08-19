//!
//! Made by @tomanw
//! Date: 19/8/24
//!

#include <stdint.h>
#include <stdio.h>
#include <string.h>

int atoi(const char *nptr);
void ShowHelp();

int main(int argc, char** argv) {
    //? -s / --subtract function
    if (argc > 3  &&  strcmp(argv[1], "--subtract") == 0 || strcmp(argv[1], "-s") == 0) {
        //* argv[2] - argv[3] | atoi(char) returns that string as a number
        int result = atoi(argv[2]) - atoi(argv[3]);
        printf("%i\n", result);
    }
    //? -a / --add function
    else if (argc > 3 && strcmp(argv[1], "--add") == 0 || strcmp(argv[1], "-a") == 0) {
        //* argv[2] + argv[3]
        int result = atoi(argv[2]) + atoi(argv[3]);
        printf("%i\n", result);
    } 
    //? -m / --multiply function
    else if(argc > 3 && strcmp(argv[1], "--multiply") == 0 || strcmp(argv[1], "-m") == 0) {
        //* argv[2] * argv[3]
        int result = atoi(argv[2]) * atoi(argv[3]);
        printf("%i\n", result);
    }
    //? -d / --divide 
    else if(argc > 3 && strcmp(argv[1], "--divide") == 0 || strcmp(argv[1], "-d") == 0) {
        //* argv[2] / argv[3]
        int result = atoi(argv[2]) / atoi(argv[3]);
        printf("%i\n", result);
    } else {
        ShowHelp();
    }
    return 0;
}

void ShowHelp() {
    printf("Arguments:\n");
    printf("Format: calculator [flags] [number 1] [number 2]\n");
    printf("-s / --subtract | Subtracts [number 2] from [number 1]\n");
    printf("-a / --add | Adds 2 numbers together\n");
    printf("-m / --multiply | Mulitplies [number 1] by [number 2]\n");
}