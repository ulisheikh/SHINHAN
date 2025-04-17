#include <stdio.h>

int main(void) {
    // 1 dan 1000 gacha 
    int num = 2;
    int want;

    printf("Nechta raqamni chiqarmoqchisiz? ");
    scanf("%d",&want);
    
    num = 1;
    
    while(num <= 100) 
    {
        if (num % want == 0){
            printf("%d\t",num);
        }
        ++num;
    }




}