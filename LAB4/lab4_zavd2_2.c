#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
int main() {
    int s = 0, i = 1;

    while (i < 100) {       // поки i менше 100
        if (i % 11 == 0)    // якщо кратне 11
            s += i;         // додаємо до суми
        i++;
    }

    printf("Квадрат суми = %d\n", s * s);
    return 0;
}
