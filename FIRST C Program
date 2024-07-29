#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

int n;
char production[MAX][MAX], first[MAX];

void find_first(char, int, int);

int main() {
    int i, j;
    char ch, c;

    printf("Enter the number of productions: ");
    scanf("%d", &n);

    printf("Enter the productions (e.g., E=TR or E=TR|e):\n");
    for (i = 0; i < n; i++) {
        scanf("%s%c", production[i], &ch);
    }

    char choice;
    do {
        printf("\nFind the First of: ");
        scanf(" %c", &c);
        find_first(c, 0, 0);
        printf("\nFirst(%c) = { ", c);
        for (i = 0; i < strlen(first); i++) {
            printf("%c ", first[i]);
        }
        printf("}\n");

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void find_first(char c, int q1, int q2) {
    int j;
    if (!(isupper(c))) {
        first[q2++] = c;
    }
    for (j = 0; j < n; j++) {
        if (production[j][0] == c) {
            if (production[j][2] == '#') {
                first[q2++] = '#';
            } else if (islower(production[j][2])) {
                first[q2++] = production[j][2];
            } else {
                find_first(production[j][2], q1, q2);
            }
        }
    }
}
