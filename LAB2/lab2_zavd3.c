#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
 int main () {
    int x, y, z; // цілі
    double t; // дійсні
    
    printf("Введіть x:" );
    scanf("%d", &x);

    printf("Введіть y:" );
    scanf("%d", &y);

    printf("Введіть z:" );
    scanf("%d", &z); 
    
    t = sqrt(3.0 * x / (double)(z - 2 * y)) - y * z + sin((double)(x * x));
    
    printf("t = %.2f\n", t);
 }
