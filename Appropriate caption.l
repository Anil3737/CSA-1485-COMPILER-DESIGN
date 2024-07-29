%{ 
#include<stdio.h> 
%} 
%% 
bool|int|float|main|printf|int|char|float|double|void|if|while|for|do|main|return|else|elseif 
{ printf("\n%s is a Keyword",yytext); } 
[-,+]?[0-9]+ { printf("\n%s is a numbers",yytext); } 
[,.;]+ { printf("\n%s is a Punctuation Chars",yytext); } 
[a-zA-Z_][a-zA-Z0-9_]* { printf("Identifier: %s\n", yytext); } 
["a-zA-Z"]+ { printf("\n%s is a string",yytext); } 
[!%^&-+*()]+ { printf("\n%s is a mathematical operator",yytext); } 
%% 
int yywrap() 
{ } 
int main() 
{ 
yylex(); 
} 












%{
#include<stdio.h>
%}
%%
[0-9]+ {printf("\n%s is number",yytext);}
[a-zA-Z][a-zA-Z0-9]* {printf("\n%s is word",yytext);}
">"|"<"|"<="|">="|"=="|"!=" {printf("\n%s is relational operator",yytext);}
%%
int yywrap(){}
int main()
{
printf("enter the input\n");
yylex();
}
