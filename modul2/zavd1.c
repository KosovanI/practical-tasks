#include <stdio.h>  // підключення бібліотек
#include <math.h> // підключення обчислень
// Функція для введення елементів масиву
void input(double a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%lf", &a[i]);
    }
}

// Функція для виведення елементів масиву
void output(double a[], int n) {
    printf("Масив: ");
    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    printf("\n");
}

// Функція перевірки чи індекс парний (i+1 бо нумерація з 1)
int isEven(int i) {
    return (i + 1) % 2 == 0;  // парний якщо номерділиться на 2
}

// Функція обчислення суми парних елементів
double sumEven(double a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        if (isEven(i))         // якщо елемент стоїть на парній позиції
            sum += a[i];       // додаємо до суми
    return sum;
}

int main(void) {
    int n;

    // Зчитуємо кількість елементів
    printf("Введіть n: ");
    scanf("%d", &n);

    double a[n];

    // Викликаємо функцію введення
    input(a, n);

    // Викликаємо функцію виведення
    output(a, n);

    // Викликаємо функцію обчислення та виводимо результат
    printf("Сума парних елементів = %.2f\n", sumEven(a, n));

    return 0;
}
