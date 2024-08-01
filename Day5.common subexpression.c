#include <stdio.h>
#include <string.h>

#define MAX_EXPR_LEN 100

int main() {
    char expressions[][MAX_EXPR_LEN] = {
        "a + b",
        "c * d",
        "a + b", // Common subexpression
        "e / f",
    };
    int num_expr = sizeof(expressions) / sizeof(expressions[0]);

    printf("Original Code:\n");
    for (int i = 0; i < num_expr; ++i) {
        printf("%s\n", expressions[i]);
    }

    // Optimized Code (eliminate common subexpressions)
    for (int i = 0; i < num_expr; ++i) {
        for (int j = i + 1; j < num_expr; ++j) {
            if (strcmp(expressions[i], expressions[j]) == 0) {
                strcpy(expressions[j], "; Removed"); // Mark as removed
            }
        }
    }

    printf("\nOptimized Code:\n");
    for (int i = 0; i < num_expr; ++i) {
        if (strcmp(expressions[i], "; Removed") != 0) {
            printf("%s\n", expressions[i]);
        }
    }

    return 0;
}
