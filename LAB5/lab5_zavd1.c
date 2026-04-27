#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
int main() {
    int n, x, b, count;
    int a[100];

    printf("Введіть розмір масиву n: ");
    scanf("%d", &n);

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Введіть початок відрізка x (x < %d): ", n);
    scanf("%d", &x);

    printf("Введіть кінець відрізка b (b < %d, b > x): ", n);
    scanf("%d", &b);

    printf("\nМасив: ");
    for (int i = 0; i < n; i++)
        printf("a[%d]=%d\t", i, a[i]);

    count = 0;
    for (int i = x; i <= b; i++) { // перебір елементів у межах відрізка
        if (a[i] < 0)
            count++;
    }

    printf("\nКількість від'ємних елементів у межах [%d;%d] = %d\n", x, b, count);

    return 0;
}
