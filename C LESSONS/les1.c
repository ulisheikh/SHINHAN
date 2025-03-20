#include <stdio.h>

int main() {
    // 숫자 변수 만듬
    int num1 = 100;
    int num2 = 200;

    // 더하기
    int c = num1 + num2;
    printf("\n%d + %d = %d",num1,num2,c);
    
    // 곺셈
    int c1 = num1 * num2;
    printf("\n%d * %d = %d",num1,num2,c1);    
    
    // 나누기
    int c2 = num1 / num2;
    printf("\n%d / %d = %d",num1,num2,c2);

    // 실수 값
    double a3 = 100.2;
    double b3 = 100.5;
    double c3 = a3+b3;
    printf("\n%f + %f = %f",a3,b3,c3);


    return 0;
}
