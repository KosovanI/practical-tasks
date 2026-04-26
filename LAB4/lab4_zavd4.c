#include <stdio.h>
#include <math.h>

int main() {
    double x, y, a, b, dx;

    a = 0;              // початок проміжку
    b = M_PI;           // кінець проміжку (π з math.h)
    dx = M_PI / 20;     // крок

    printf("********************\n");
    printf("x\t\ty = tg(x)\n");
    printf("********************\n");

    x = a;
    while (x <= b) {
        // tg не існує коли cos(x) = 0, тобто x близьке до π/2
        if (fabs(cos(x)) < 1e-10) {
            printf("%.4f\t\tНевизначено\n", x);
        } else {
            y = tan(x);     // обчислюємо тангенс
            printf("%.4f\t\t%.4f\n", x, y);
        }
        x += dx;    // збільшуємо x на крок
    }

    return 0;
}
