#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень

int main() {
    int b, c;
    double a;

    printf("Введіть b: ");
    scanf("%d", &b);
    printf("Введіть c: ");
    scanf("%d", &c);

    if (c < 4 && b >= 0 && c >= 0)
        a = sqrt(b) + 2 * sqrt(c);

    if (c < 4 && (b < 0 || c < 0))
        printf("Неможливо обчислити: b або c від'ємне\n");

    if (c == 4)
        a = (double)(b * b * c) / (c + 6);

    if (c > 4)
        a = b * b + pow(c, 3);

    if (!(c < 4 && (b < 0 || c < 0)))
        printf("a = %g\n", a);

    return 0;
} 
