#include <stdio.h>

int fibonacci(int *n) { // функция подсчета числа фибоначчи
    int f1 = 1, f2 = 1, fib; // фибоначчи единицы и двойки равны 1

    for (int i=0; i<*n-2; i++) {
    fib = f1 + f2;
    f1 = f2;
    f2 = fib;
    }

    return fib; // возвращает результат
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d", fibonacci(&n)); // вызываем функцию для числа n

    return 0;
}