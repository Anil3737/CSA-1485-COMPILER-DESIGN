%{
int counter = 0;
%}
%%
[a-zA-Z]+ {if(yyleng>counter) counter = yyleng;}
%%
int yywrap(void)
{}
int main() 
{
 printf("Enter Input:");
 yylex();
 printf("largest %d",counter);
 printf("\n");
}
