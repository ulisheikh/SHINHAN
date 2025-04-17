#include <stdio.h>
#include <stdbool.h>

int main (void){
    int num;
    int i;
    printf("구구단을 원하는 숫자를 입력하세요");
    scanf("%d",&num);
    i = 1;
    // while (i<=9){
    //     printf("%3d * %d3 = %d3\n",num,i,num*i);
    //     ++i;
    // }
    // printf("-----------------------------------\n");
    do {
        printf("%d * %d = %d\n",num,i,num*i);
        ++i;
    } while (i<=9);

    return 0;

}

