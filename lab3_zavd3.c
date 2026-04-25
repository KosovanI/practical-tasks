#include <stdio.h> // Підключення бібліотек
#include <math.h> // Підключення обчислень
int main() { // Початок коду
    int n;

    printf("Введіть порядковий номер знаку зодіаку (1-12): ");
    scanf("%d", &n);

    switch (n) {
        case 1:  printf("Овен\n");     break;
        case 2:  printf("Телець\n");   break;
        case 3:  printf("Близнюки\n"); break;
        case 4:  printf("Рак\n");      break;
        case 5:  printf("Лев\n");      break;
        case 6:  printf("Діва\n");     break;
        case 7:  printf("Терези\n");   break;
        case 8:  printf("Скорпіон\n"); break;
        case 9:  printf("Стрілець\n"); break;
        case 10: printf("Козеріг\n");  break;
        case 11: printf("Водолій\n");  break;
        case 12: printf("Риби\n");     break;
        // якщо введено число не від 1 до 12
        default: printf("Невірний номер\n"); break;
    }

    return 0;
}