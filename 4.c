#include <stdio.h>

int sumDigits(int *num) {
    int sum=0;

    while (*num != 0) { 
        sum += *num%10; // к сумме прибавляем последнюю цифру числа
        *num /= 10; // делим это число нацело на 10, чтобы в следующую итерацию прибавить к сумме уже другую цифру
    }

    return sum;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("%d", sumDigits(&num)); // вызываем функцию с адресом переменной num
    
    return 0;
}