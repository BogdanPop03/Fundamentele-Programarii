#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void readText(char* text){
    printf("Type the text: ");
    gets(text);
}

void deleteAllDuplicates(char* text) {
    int len = strlen(text);
    int index = 0;

    for (int i = 0; i < len; i++) {
        int j;

        for (j = 0; j < i; j++) {
            if (text[i] == text[j]) {
                break;
            }
        }

        if (j == i) {
            text[index++] = text[i];
        }
    }

    text[index] = '\0';
}

void deleteNeighbouringDuplicates(char* text) {
    int len = strlen(text);
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (text[i] == text[i + 1]) {
            continue;
        }

        text[index++] = text[i];
    }

    text[index] = '\0';
}

int main() {
    char* text1 = malloc(256 * sizeof(char));
    char* text2 = malloc(256 * sizeof(char));

    readText(text1);

    strcpy(text2, text1);

    printf("Original text for text 1: %s\n", text1);

    printf("Original text for text 2: %s\n", text2);

    deleteAllDuplicates(text1);
    printf("Text 1 after deleting duplicate characters: %s\n", text1);

    deleteNeighbouringDuplicates(text2);
    printf("Text 2 after deleting adjacent duplicate characters: %s\n", text2);

    return 0;
}
