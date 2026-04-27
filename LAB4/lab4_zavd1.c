#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень

int main() { 
    int x, y, z; // Змінні
    double arg, t;

    do {
        printf("Введіть x: ");
        scanf("%d", &x);

        printf("Введіть y: ");
        scanf("%d", &y);

        printf("Введіть z: ");
        scanf("%d", &z);

        if (1 + x == 0) {         // перевірка ділення на нуль
            printf("Помилка: x = -1, ділення на нуль! Задайте інші значення.\n");
            continue;
        }

        arg = (double)(1 - y) / (1 + x);

        if (arg <= 0) {         // перевірка що аргумент логарифму більше нуля
            printf("Помилка: аргумент логарифму <= 0! Задайте інші значення.\n");
            continue;
        }
        break;

    } while (1); // Повторюєм поки не введуть корректні данні
    t = log(arg) / log(2) + z;

    printf("t = %g\n", t);

    return 0;
}
