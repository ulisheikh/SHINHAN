#include <stdio.h>
#include <string.h>
int main (void){
    int a = 1;
    int b = 2;

    while (a<b)
    {
        int number;
        printf("\n\nPlease enter a number:\n>>> ");
        scanf("%d",&number);

        int i;
        for (i = 1;i<=10;++i){
            int j = number;
            int c = j*i;
            printf("\n%d * %d = %d",j,i,c);
        }
        printf("\n\nWill you continue? (yes/no)\n>>> ");
        char promt[4];
        scanf(" %s",&promt);
        if(strcmp(promt, "yes")==0){
            continue;
        }

        else{
            break;
        }
        
        
    }
 
}