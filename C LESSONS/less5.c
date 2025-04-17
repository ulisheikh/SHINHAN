#include <stdio.h>

int main(void){
    int num ;
    for (num = 1; num <= 10; ++num) {
    printf("%d\t",num);
    
    }
printf("\n=======================================================\n");
    for (num = 1; num <= 100;){
        if (num % 7 == 0){
        printf("%d\t",num);
        }
        ++num;
    }
}