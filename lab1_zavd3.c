#include <stdio.h> // Підключення бібліотеки
int main() {
    int d, d1, d2; // Змінні
    printf("Enter number: ");

    scanf("%d", &d);
    d1 = d / 100; // перша цифра
    d2 = d % 10; // остання цифра

    printf("d1 = %d, d2 = %d\n", d1, d2);
    return 0; // вихід з програми
}