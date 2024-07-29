%{
#include <stdio.h>

int plus_count = 0;
int minus_count = 0;
int mult_count = 0;
int div_count = 0;
%}

%%

"+" { 
    printf("Plus operator: %s\n", yytext); 
    plus_count++;
}

"-" { 
    printf("Minus operator: %s\n", yytext); 
    minus_count++;
}

"*" { 
    printf("Multiply operator: %s\n", yytext); 
    mult_count++;
}

"/" { 
    printf("Divide operator: %s\n", yytext); 
    div_count++;
}

[ \t\n]+ { /* Ignore whitespace */ }

. { 
    printf("operand: %s\n", yytext); 
}

%%
int yywrap() {
    return 1;
}
int main() {
    yylex();
    printf("\nOperator counts:\n");
    printf("Plus: %d\n", plus_count);
    printf("Minus: %d\n", minus_count);
    printf("Multiply: %d\n", mult_count);
    printf("Divide: %d\n", div_count);

    return 0;
}
