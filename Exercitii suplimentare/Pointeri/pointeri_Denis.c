#include <stdio.h>

#define MAX 100

void citire(int vec[], int *dimensiune) {
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", &*dimensiune);

    for (int i = 0; i < *dimensiune; i++) {
        printf("Introduceti elementul %d al vectorului: ", i);
        scanf("%d", &vec[i]);
    }
}

void elementePare(int vec[], int raspuns[], int dimensiune, int *dim) {
    int indice = -1;

    for (int i = 0; i < dimensiune; i++) {
            if (vec[i] % 2 == 0) {
                raspuns[++indice] = vec[i];
        }
    }

    *dim = indice + 1;
}

void swapNum(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int* afisareInt(int raspuns[]) {
    return raspuns;
}

int main(){
    int vec[MAX];
    int dimensiune;

    citire(vec, &dimensiune);

    int *result = afisareInt(vec);

    for (int i = 0; i < dimensiune; i++)
    {
        printf("%d, ", *result + i);
    }

    int num1 = 10, num2 = 15;

    printf("\nnum1 = %d, num2  =%d", num1, num2);

    swapNum(&num1, &num2);

    printf("\nnum1 = %d, num2  =%d", num1, num2);

    int elem_pare[MAX], dimensiune_elemente_pare;

    elementePare(vec, elem_pare, dimensiune, &dimensiune_elemente_pare);

    printf("\ndimensiunea vectorului elem_pare este: %d\n", dimensiune_elemente_pare);

    for (int i = 0; i < dimensiune_elemente_pare; i++)
    {
        printf("%d, ", elem_pare[i]);
    }

    /*
    Observatii!
    1. daca ai pointer in definitia functiei trebuie sa apelezi functia cu & inaintea variabilei respective, asta daca nu e vector sau sir de caractere.
    ex:
    void func(int vector[], int *variabila1, int variabila2){
        //face ceva
    }

    int main(){
        //...
        func(vector, &variabila1, variabila2);
    }

    2. daca faci ceva cu pointer-ul respectiv in functia in care l-ai delcarat, de fiecare data cand il scri in functia respectiva trebuie sa-i pui * in fata
    ex:
    functia citire din programul de mai sus

    
    */

    return 0;
}