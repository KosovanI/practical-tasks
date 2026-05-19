#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень

int main(void) {
    double x, f;

    printf("Введіть x: ");
    scanf("%lf", &x);

    // Умова розгалуження
    if (x <= 2)
        f = x * x + 5 * x - 6;        // x² + 5x - 6
    else
        f = fabs(x + cos(x));          // |x + cos(x)|

    printf("f(x) = %.4f\n", f);

    return 0;
}
