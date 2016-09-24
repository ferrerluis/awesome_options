#include <stdio.h>
#include <string.h>

int main(int argc, char *args[]) {

    if (argc < 3) {
        printf("awesome_options needs 2 arguments.\nFirst is a string that represents the arguments passed to another command.\nSecond is a string representing the option whose value we are looking for.");
        return -1;
    }

    char* arg = strtok(args[1], " ");
    int isValue = -1;
    while(arg != NULL) {
        if (isValue == 0) {
            printf("%s\n", arg);
            return 0;
        }
        if (strcmp(arg, args[2]) == 0) {
            isValue = 0;
        }
        arg = strtok(NULL, " ");
    }

    return -1;
}
