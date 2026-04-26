#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
int main() {
    double s = 0, p;
    int i = 1, j;

    do {                        // зовнішній цикл по i
        p = 1;
        j = 1;
        do {                    // внутрішній цикл по j
            p *= (double)(j + i) / 2;
            j++;
        } while (j <= i);
        s += p;
        i++;
    } while (i <= 25);

    printf("s = %g\n", s);
    return 0;
}
