#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=2,a=0;
    printf("Enter the String: \n");
    gets(str);
    printf("%s",str);
    printf("\nOutput:\n");
    if(str[0]=='/'){
        if(str[1]=='/')
            printf("Given is a Single Line comment\n");
        else if(str[1]=='*'){
            for(i=2;i<=100;i++){
                if(str[i]=='*' && str[i+1]=='/'){
                    printf("Given is a Multi-Line comment\n");
                    a=1;
                    break;
                }
                else
                    continue;
            }
            if(a==0){
                printf("It is not a comment \n");
            }
        }
        else
            printf("It is not a comment\n");
    }
    else
        printf("It is not a comment\n");
}
