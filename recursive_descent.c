#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum {
    NUM,
    PLUS,
    MINUS,
    MUL,
    DIV,
    LPAREN,
    RPAREN,
    EOF_TOKEN
};
char* token;
int token_type;
void match(int);
void E();
void T();
void F();
void match(int expected) {
    if (token_type == expected) {
        token = strtok(NULL, " \t\n");
        if (token == NULL) token_type = EOF_TOKEN;
        else if (strcmp(token, "+") == 0) token_type = PLUS;
        else if (strcmp(token, "-") == 0) token_type = MINUS;
        else if (strcmp(token, "*") == 0) token_type = MUL;
        else if (strcmp(token, "/") == 0) token_type = DIV;
        else if (strcmp(token, "(") == 0) token_type = LPAREN;
        else if (strcmp(token, ")") == 0) token_type = RPAREN;
        else token_type = NUM;
    } else {
        printf("Error: expected %d, got %d\n", expected, token_type);
        exit(1);
    }
}
void E() {
    T();
    if (token_type == PLUS || token_type == MINUS) {
        match(token_type);
        T();
    }
}

void T() {
    F();
    if (token_type == MUL || token_type == DIV) {
        match(token_type);
        F();
    }
}
void F() {
    if (token_type == LPAREN) {
        match(LPAREN);
        E();
        match(RPAREN);
    } else {
        match(NUM);
    }
}
int main() {
    char input[100];
    printf("Enter an arithmetic expression: ");
    fgets(input, sizeof(input), stdin);
    token = strtok(input, " \t\n");
    if (token == NULL) token_type = EOF_TOKEN;
    else if (strcmp(token, "+") == 0) token_type = PLUS;
    else if (strcmp(token, "-") == 0) token_type = MINUS;
    else if (strcmp(token, "*") == 0) token_type = MUL;
    else if (strcmp(token, "/") == 0) token_type = DIV;
    else if (strcmp(token, "(") == 0) token_type = LPAREN;
    else if (strcmp(token, ")") == 0) token_type = RPAREN;
    else token_type = NUM;
    E();
    if (token_type != EOF_TOKEN) {
        printf("Error: unexpected token %s\n", token);
        exit(1);
    }
    printf("Parsing successful!\n");
    return 0;
}
