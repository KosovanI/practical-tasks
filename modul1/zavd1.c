#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення Обчислень

int main(void) {
    double x1, y1, x2, y2;

    printf("Введіть x1, y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Введіть x2, y2: ");
    scanf("%lf %lf", &x2, &y2);

    // Формула відстані між двома точками
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Відстань = %.4f\n", d);

    return 0;
}
