#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int noOfChar = 0, noOfSpace = 0, noOfTab = 0, noOfNewline = 0;

    printf("Enter text (Ctrl+Z or Ctrl+D to end input):\n");

    while (1) {
        ch = getchar();

        if (ch == EOF || ch == 4 || ch == 26) {
            // EOF (Ctrl+D on Unix/Linux, Ctrl+Z on Windows)
            break;
        }

        noOfChar++;

        if (isspace(ch)) {
            if (ch == ' ')
                noOfSpace++;
            else if (ch == '\t')
                noOfTab++;
            else if (ch == '\n')
                noOfNewline++;
        }
    }

    printf("\nNumber of characters = %d", noOfChar);
    printf("\nNumber of spaces = %d", noOfSpace);
    printf("\nNumber of tabs = %d", noOfTab);
    printf("\nNumber of newlines = %d\n", noOfNewline);

    return 0;
}
