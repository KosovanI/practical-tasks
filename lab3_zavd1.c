#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень

int main() { // Початок коду
    int b, c;
    double a;

    printf("Введіть b: ");
    scanf("%d", &b);
    printf("Введіть c: ");
    scanf("%d", &c);

    if (c < 4) {
        if (b >= 0 && c >= 0) {
            a = sqrt(b) + 2 * sqrt(c);
            printf("a = %g\n", a);
        } else {
            printf("Неможливо обчислити: b або c від'ємне\n");
        }
    } else if (c == 4) {
        a = (double)(b * b * c) / (c + 6);
        printf("a = %g\n", a);
    } else {
        a = b * b + pow(c, 3);
        printf("a = %g\n", a);
    }
    return 0; // Кінець коду
}