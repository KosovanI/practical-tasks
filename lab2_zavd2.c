#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
  int main() { // Початок коду

    const int a = -20, b = 4, c=15; // Стала величина (Змінну неможна змінити)
    double y; // Для чисел з крапкою
    
    y = (c * a) / (double)(a + b) + (b * c) / (double)(c + a);
    printf("y = %.2f\n", y);
   
    return 0;
  }