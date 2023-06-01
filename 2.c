#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* join(char* words[], int n) {
    char *res = malloc(255); // выделяем 255 байт на строку res
    res[0] = "\0"; // обозначаем первый элемент строки res как пустой элемент
    for (int i = 0; i < n; i++) {
        strcat(res, words[i]); // добавляем слово с индексом i к строке res
        strcat(res, " "); // после слова добавляем пробел
    }
    return res;
}

int main() {
    char* words[] = {"Hello,", "World!"};
    int n = sizeof(words) / sizeof(words[0]);
    printf("%s", join(words, n));
    free(join(words,n)); // освобождаем память
    
    return 0;
}