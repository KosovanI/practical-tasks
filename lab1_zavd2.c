#include <stdio.h> // Підключення бібліотеки
#include <math.h>
   int main() {
    double a, b, c, max;
    
    printf("Enter a:"); // Перше чісло
    scanf("%lf", &a); // Перевіряєм

    printf("Enter b:"); // Друге чісло
    scanf("%lf", &b); // Перевіряєм

    printf("Enter c:"); // Третє чісло
    scanf("%lf", &c); // Перевіряєм

    max = fmax(fmax(a, b), c); // Знаходим максимум

    printf("Max: %.f\n", max); // Виводим цей максимум
   return 0;
   }