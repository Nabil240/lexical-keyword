#include<stdio.h>
#include<string.h>

int main() {
    char input[10];

    printf("Enter a keyword: ");
    fgets(input, sizeof(input), stdin);  // Using fgets for safer input

    // Removing the newline character added by fgets
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    switch(input[0]) {
        case 'f':
            if (strcmp(input, "for") == 0)
                printf("\n'%s' It is a keyword: for", input);
            else
                printf("\n'%s' It is not a keyword", input);
            break;

        case 'i':
            if (strcmp(input, "if") == 0)
                printf("\n'%s' It is a keyword: if", input);
            else if (strcmp(input, "int") == 0)  // Corrected case for "int"
                printf("\n'%s' It is a keyword: int", input);
            else
                printf("\n'%s' It is not a keyword", input);
            break;

        default:
            printf("\n'%s' It is not a keyword", input);
    }

    return 0;
}

