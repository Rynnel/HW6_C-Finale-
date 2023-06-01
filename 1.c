#include <stdio.h>

int main() {
    int a, b, c, d, temp;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    while (a>b) { // используем этот цикл для того, чтобы поменять значения a и b так, чтобы a стало меньше b. Нужно для записи чисел в порядке возрастания
        temp = a;
        a = b;
        b = temp;
    }
    

    for (int i=a; i<=b; i++) { // цикл для поиска чисел в диапазоне от a до b, остаток при делении на d которых равен c.
        while (i % d == c) {
            printf("%d ", i);
            break;
        }
    }
        
    return 0;
}