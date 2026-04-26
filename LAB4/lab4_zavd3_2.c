#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
int main() {
    double s = 0, p;
    int i = 1, j;

    while (i <= 25) {           // зовнішній цикл по i
        p = 1;
        j = 1;
        while (j <= i) {        // внутрішній цикл по j
            p *= (double)(j + i) / 2;
            j++;
        }
        s += p;
        i++;
    }

    printf("s = %g\n", s);
    return 0;
}
