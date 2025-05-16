#include <stdio.h>
#include <string.h>
#include "struct.h"

int main(void){
    struct Talaba talaba[3];
    for (int i=0; i<3;++i){

        printf("\n            Student [%d]\n",i+1);
        printf("Please enter your name: ");
        scanf("%s",talaba[i].name);
        printf("Please enter your age: ");
        scanf("%d",&talaba[i].age);
    }

    printf("Ro'yxatdagi talabalar\n");
    for (int i=0;i<3;++i){
        if (talaba[i].age > talaba[i+1].age && talaba[i+1].age > talaba[i+2].age){
            printf()
        }

    }

    

    return 0;
}