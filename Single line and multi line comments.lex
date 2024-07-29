%{
#include <stdio.h>

int single_line_comment_count = 0;
int multi_line_comment_count = 0;

%}

%option noyywrap

%%

"//".*                            { 
    printf("Single-line comment: %s\n", yytext);
    single_line_comment_count++;
}

"/*"([^*]|\*+[^*/])*\*+ "/"       { 
    printf("Multi-line comment: %s\n", yytext);
    multi_line_comment_count++;
}

.                                 

%%

int yywrap() {
    return 1;
}

int main() {
    yylex();
    printf("\nSummary:\n");
    printf("Single-line comments: %d\n", single_line_comment_count);
    printf("Multi-line comments: %d\n", multi_line_comment_count);

    return 0;
}
