#include <stdio.h>

int main (void) {
    int num;
    int i;
    printf("Raqam kiriting: ");
    scanf("%d",&num);

    i = 1;
    printf("%d quyidagi sonlarga qoldiqsiz bo'linadi:\n");
    while (i <= num) 
    {
        if (num % i == 0){
            printf("%d\t",i);
        }
    ++i;

    }
    return 0;
    

}