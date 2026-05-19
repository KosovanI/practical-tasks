#include <stdio.h>  // підключення бібліотек
#include <math.h> // підключення обчислень
// Функція для заповнення матриці за формулою
void fillMatrix(int c[][100], int n, int m) {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (i < j)
                c[i][j] = i - j;          // якщо i < j: C[i,j] = i - j
            else if (i == j)
                c[i][j] = (i + j) / 2;    // якщо i = j: C[i,j] = (i+j)/2
            else
                c[i][j] = i + j;          // якщо i > j: C[i,j] = i + j
        }
}

// Функція для виведення матриці
void outputMatrix(int c[][100], int n, int m) {
    printf("\nМатриця C:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            printf("%5d", c[i][j]);  // вирівнювання по 5 символів
        printf("\n");
    }
}

int main(void) {
    int n, m;

    // Зчитуємо розміри матриці
    printf("Введіть n, m: ");
    scanf("%d %d", &n, &m);

    int c[100][100];  // матриця максимального розміру 100x100

    // Викликаємо функцію заповнення матриці
    fillMatrix(c, n, m);

    // Викликаємо функцію виведення матриці
    outputMatrix(c, n, m);

    return 0;
}
