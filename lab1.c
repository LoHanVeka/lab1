#include <stdio.h>
int main() {
    int d, d1, d2;

    printf("Введіть число: "); //357
    scanf("%d", &d);

    
    d1 = d / 100;

    
    d2 = d % 10;

    printf("Вхідні дані: d = %d\n", d);
    printf("Вихідні дані: d1 = %d, d2 = %d\n", d1, d2);

    return 0;
}