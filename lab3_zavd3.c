#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
int main() { // Початок коду
    int n; // Інтегруєм одну змінну для всього

    printf("Введіть порядковий номер знаку зодіаку (1-12): ");
    scanf("%d", &n);

    if (n == 1)  printf("Овен\n");
    if (n == 2)  printf("Телець\n");
    if (n == 3)  printf("Близнюки\n");
    if (n == 4)  printf("Рак\n");
    if (n == 5)  printf("Лев\n");
    if (n == 6)  printf("Діва\n");
    if (n == 7)  printf("Терези\n");
    if (n == 8)  printf("Скорпіон\n");
    if (n == 9)  printf("Стрілець\n");
    if (n == 10) printf("Козеріг\n");
    if (n == 11) printf("Водолій\n");
    if (n == 12) printf("Риби\n");
    if (n < 1) printf("Невірний номер\n"); 
    if (n > 12) printf("Невірний номер\n");
    return 0; // Кінець коду
}