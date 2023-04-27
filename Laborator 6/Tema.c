#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void citire(char num1[], char num2[], char num3[]) {
    printf("Primul numar = ");
    gets(num1);
    printf("Al doilea numar = ");
    gets(num2);
    printf("Al treilea numar = ");
    gets(num3);
}

char* afisare(char result[]) {
    return result;
}

void deleteStraySymbols(char res[]) {
    for (int i = 0; i < strlen(res); i++) {
        if (!isdigit(res[i])) {
            memmove(&res[i], &res[i + 1], strlen(res) - i);
        }
    }
}

void swapChar(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void swapNum(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

char* suma(char num1[], char num2[]) {
    int i;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxlen = (len1 > len2) ? len1 : len2;
    int carry = 0;

    char *res = malloc(200 * sizeof(char));

    strrev(num1);
    strrev(num2);
    
    for (i = 0; i < maxlen; i++) {
        int sum = 0;
        if (i < len1) {
            sum += num1[i] - '0';
        }
        if(i < len2) {
            sum += num2[i] - '0';
        }
        res[i] = (sum + carry) % 10 + '0';
        carry = sum / 10;
    }

    while (res[--i] == '0');
    res[i + 1] = '\0';

    strrev(num1);
    strrev(num2);

    strrev(res);

    if (carry != 0) {
        for (i = strlen(res) - 1; i >= 0; i--) {
            res[i + 1] = res[i];
        }
        res[0] = carry + '0';
    }
    
    return res;
}

char* diferenta(char num1[], char num2[]) {
    char *res = malloc(200 * sizeof(char));
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i, j;
    int borrow = 0, diff;
    bool swap = false;

    strrev(num1);
    strrev(num2);

    if (len1 < len2 || (len1 == len2 && strcmp(num1, num2) < 0)) {
        swapChar(&num1, &num2);
        swapNum(&len1, &len2);
        swap = true;
    }

    for (i = 0; i < len2; i++) {
        diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }
        res[i] = diff + '0';
    }

    for (j = i; j < len1; j++) {
        diff = (num1[j] - '0') - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }
        res[j] = diff + '0';
    }

    while (res[--j] == '0' && j != 0);
    res[j + 1] = '\0';

    strrev(res);

    strrev(num1);
    strrev(num2);

    if (swap) {
        swapChar(&num1, &num2);
    }
    
    return res;
}

char* produs(char num1[], char num2[]) {
    int len1 = strlen(num1), len2 = strlen(num2);
    char *res = malloc((len1 + len2 + 1) * sizeof(char));
    memset(res, 0, sizeof(res));

    if ((len1 == 1 || len2 == 1) && (num1[0] == '0' || num2[0] == '0')) {
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    else{
        int *temp = (int*)calloc(len1 + len2, sizeof(int));
        int carry = 0;

        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] - '0';
                temp[i + j + 1] += digit1 * digit2;
            }
        }

        for (int k = len1 + len2 - 1; k >= 0; k--) {
            int digit = (temp[k] + carry) % 10;
            res[k] = digit + '0';
            carry = (temp[k] + carry) / 10;
        }

        while (*res == '0') {
            res++;
        }

        if (*res == '\0') {
            res[0] = '0';
            res[1] = '\0';
        }

        free(temp);

        res[len1 + len2] = '\0';

        deleteStraySymbols(res);

        return res;
    }
}

int main() {
    char num1[200], num2[200], num3[200];

    citire(num1, num2, num3);

    char *res_suma = (char *)malloc(((strlen(num1) > strlen(num2) ? strlen(num1) : strlen(num2)) + 1) * sizeof(char));
    char *res_scadere = (char *)malloc(((strlen(num1) > strlen(num2)) ? strlen(num1) : strlen(num2)) * sizeof(char));
    char *res_inmultire = (char *)malloc((strlen(num1) + strlen(num2) + 1) * sizeof(char));

    res_suma = suma(num1, num2);
    res_scadere = diferenta(num1, num2);
    res_inmultire = produs(num1, num3);

    printf("\nRezultatul adunarii este: %s", afisare(res_suma));
    printf("\nRezultatul diferentei este: %s", afisare(res_scadere));
    printf("\nRezultatul inmultirii este: %s", afisare(res_inmultire));

    free(res_suma);
    free(res_scadere);
    free(res_inmultire);

    return 0;
}