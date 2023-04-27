#include <stdio.h>
#include <stdlib.h>

#define DIM 100000

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void citire(int vector[], int* dimensiune, int* flag, int* flag_complexitate){
    printf("Introduceti dimensiunea vectorului: ");
    scanf(" %d", dimensiune);

    for(int indice = 0; indice < *dimensiune; indice++){
        printf("Introduceti elementul %d al vectorului: ", indice + 1);
        scanf(" %d", &vector[indice]);
    }

    printf("Introduceti '0' daca doriti ca vectorul sa fie sortat crescator sau '1' daca doriti ca acesta sa fie sortat descrescator: ");
    scanf("%d", flag);

    printf("Introduceti '0' daca doriti ca vectorul sa fie sortat cu metoda quicksort sau '1' daca doriti sa fie sortat cu metoda bulelor: ");
    scanf("%d", flag_complexitate);
}

// start quicksort
int partition(int vector[], int low, int high, int flag){
    int pivot = vector[high];

    int i = low - 1;

    for(int j = low; j <= high - 1; j++){
        if(!flag)
            if(vector[j] < pivot){
                i++;
                swap(&vector[i], &vector[j]);
            }
            else
                ;
        else
            if(vector[j] > pivot){
                i++;
                swap(&vector[i], &vector[j]);
            }
    }

    swap(&vector[i + 1], &vector[high]);

    return (i + 1);
}

void quicksort(int vector[], int low, int high, int flag){
    if(low < high){
        int pivot = partition(vector, low, high, flag);
        quicksort(vector, low, pivot - 1, flag);
        quicksort(vector, pivot + 1, high, flag);
    }
}
// end quicksort

void sortare_crescator(int vector[], int dimensiune){
    for(int indice1 = 0; indice1 < dimensiune - 1; indice1++)
        for(int indice2 = indice1; indice2 < dimensiune; indice2++)
            if(vector[indice1] > vector[indice2])
                swap(&vector[indice1], &vector[indice2]);
}

void sortare_descrescator(int vector[], int dimensiune){
    for(int indice1 = 0; indice1 < dimensiune - 1; indice1++)
        for(int indice2 = indice1; indice2 < dimensiune; indice2++)
            if(vector[indice1] < vector[indice2])
                swap(&vector[indice1], &vector[indice2]);
}

void afisare(int vector[], int dimensiune){
    printf("Vectorul dupa operatia de sortare are forma:\n");

    for(int indice = 0; indice < dimensiune; indice++){
        printf("%s%d%s ", (indice == 0) ? "[" : "", vector[indice], (indice < dimensiune - 1) ? "," : "]");
    }
}

int main()
{
    int vector[DIM], dimensiune, flag, flag_complexitate;

    citire(vector, &dimensiune, &flag, &flag_complexitate);

    if(!flag_complexitate)
        quicksort(vector, 0, dimensiune - 1, flag);
    else
        if(!flag)
            sortare_crescator(vector, dimensiune);
        else
            sortare_descrescator(vector, dimensiune);

    afisare(vector, dimensiune);

    return 0;
}
