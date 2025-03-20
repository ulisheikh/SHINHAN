#include <stdio.h>

int main(void)
{
    // 1. 3개 숫자 입력
    int num1; int num2; int num3;
    num1 = 10; num2 = 20; num3 = 5;
    int sum ;
    sum = num1 + num2 + num3;

    double avg; // 실수 자료는 double 8 bite,float 4 bite
    avg = sum/3.0; // int + int = int
                   // int + double = double

    printf("합계는 %d\n",num1 + num2 + num3);
    printf("평균은 %lf\n",(num1 + num2 + num3)/3.0);

    return 0;
}

