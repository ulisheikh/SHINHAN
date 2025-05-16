#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array size: %d", sizeof(arr) / sizeof(arr[0]));  // Massivdagi elementlar sonini chiqaradi
    return 0;
}
