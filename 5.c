#include <stdio.h>
int ispolnitel(int *num) {
    int a = *num / 100, b = (*num / 10) % 10, c = *num % 10; // a - сотни, b - десятки, c - единицы в трехзначном числе num

    int ab = a*b;
    int bc = b*c;
    int res = ab*10 + bc; // если ab > bc, то сначала в res запишем ab, а потом ab

    if (ab<bc) {
        res = bc*10+ab; // если bc > ab, то в res запишем bc, потом ab. Нужно для записи результата из полученных чисел в порядке невозрастания
    }

    return res;
}
int main() {
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    printf("%d", ispolnitel(&num)); // вызываем функцию с адресом переменной num
    
    return 0;
}