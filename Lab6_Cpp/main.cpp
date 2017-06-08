#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getBigLetters(char *arrow, char *updated_arrow);

int main() {

    char arrow[10];

    printf("Введите строку: \n");
    fflush(stdin);

    gets(arrow);

    char *updated_arrow = new char[strlen(arrow)];

    getBigLetters(arrow, updated_arrow);
    delete [] updated_arrow;
}

void getBigLetters(char *arrow, char *updated_arrow) {
    int c = 0;
    if (strlen(arrow) > 5) {
        for (int n = 0; n <= strlen(arrow); n++) {

            int element = *(arrow + n);
            if (isalpha(element) && isupper(element)) {
                updated_arrow[c++] = element;
            }
        }

        if (c == 0) {

            printf("В строке нет больших букв, или введены русские символы \n");
        } else {
            printf("Старый массив: %s\n", arrow);
            printf("Новый массив: %s\n", updated_arrow);
        }
    } else {
        printf("Количество символов в строке меньше 5 \n");
    }
}