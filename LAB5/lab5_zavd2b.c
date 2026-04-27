#include <stdio.h>   // підключення бібліотек
#include <stdlib.h>  // підключення бібліотеки генератора чисел
#include <time.h>    // підключення бібліотеки часу

int main() {
    int n, sum1, sum2;
    int a[100];
    int first_pos, second_pos;

    printf("Введіть розмір масиву n: ");
    scanf("%d", &n);

    srand(time(0)); // ініціалізація генератора
    for (int i = 0; i < n; i++)
        a[i] = -100 + rand() % 201; // заповнення масиву числами з [-100;100]

    printf("\nМасив: ");
    for (int i = 0; i < n; i++)
        printf("a[%d]=%d\t", i, a[i]);

    // 1) сума елементів з непарними номерами (1,3,5...) = індекси 0,2,4...
    sum1 = 0;
    for (int i = 0; i < n; i += 2)
        sum1 += a[i];
    printf("\nСума елементів з непарними номерами = %d\n", sum1);

    // 2) пошук першого і другого додатних елементів
    first_pos = -1;
    second_pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (first_pos == -1)
                first_pos = i;
            else {
                second_pos = i;
                break;
            }
        }
    }

    sum2 = 0;
    if (first_pos != -1 && second_pos != -1) {
        for (int i = first_pos + 1; i < second_pos; i++)
            sum2 += a[i];
        printf("Сума елементів між першим і другим додатними = %d\n", sum2);
    } else {
        printf("Не знайдено двох додатних елементів\n");
    }

    return 0;
}
