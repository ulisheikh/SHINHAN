#include <stdio.h>

int main(void) {
    printf("My name is Ulugbek");

    int a = 5;
    printf("\nNumber a is %d integer", a);

    // Faqat bir marta 1–10 ni for bilan chiqarish
    int b;
    for (b = 1; b <= 10; ++b) {
        printf("\nwith for: %d", b);
    }

    // Faqat bir marta 1–10 ni while bilan chiqarish
    int c = 1;
    while (c <= 10) {
        printf("\nwith while: %d", c);
        ++c;
    }

    // 1~100 aga toq sonlarni chiqarish

    for (int toq_son = 1; toq_son <= 100; ++toq_son) {

        if (toq_son % 2 != 0) {
            printf("\n%d",toq_son);
        }
    }
    //  endi list yaratib juft sonarni chiqaramiz for yordamida qilamiz

    int jusft_sonlar[10];
    int i,index = 0;

    for (i = 1; i <= 10; ++i){
        jusft_sonlar[index] = i;
        ++index;
    }

    printf("Ro'yxat:\n");
    for (i = 0;i< index;++i){
        printf("%d",jusft_sonlar[i]);
    }
    for (i=0;i<index;++i){
        if(jusft_sonlar[i]%2 == 0){
            printf("\n%d",jusft_sonlar[i]);
        }
    
    }
    //  endi list yaratib juft sonarni chiqaramiz while yordamida qilamiz

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 0; j < i; ++j) {
            printf("#");
        }
        printf("\n");
    }


    return 0;
}
