#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

void citire(int matrice[][MAX], int *nr_linii, int *nr_coloane){
    printf("Introduceti numarul de linii: ");
    scanf("%d", &*nr_linii);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &*nr_coloane);

    for (int i = 0; i < *nr_linii; i++)
    {
        for (int j = 0; j < *nr_coloane; j++)
        {
            printf("Introduceti elementul %d %d al matricei: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

// Cerinta Elemente pare start
void elementePare(int matrice[][MAX], int raspuns[], int nr_linii, int nr_coloane, int *dim){
    int indice = -1;

    for (int i = 0; i < nr_linii; i++)
    {
        for (int j = 0; j < nr_coloane; j++)
        {
            if (matrice[i][j] % 2 == 0)
            {
                raspuns[++indice] = matrice[i][j];
            }
        }
    }

    *dim = indice + 1;

    /*
    TEST 1:
    4
    4

     1  2  3  4
     5  6  7  8
     9 10 11 12
    13 14 15 16

    RASPUNS 1:
    2 4 6 8 10 12 14 16   

    TEST 2:
    3
    4

    1  2  3  4
    5  6  7  8
    9 10 11 12

    RASPUNS 2:
    2 4 6 8 10 12

    TEST 3:
    4
    3

     1  2  3
     4  5  6
     7  8  9
    10 11 12

    RASPUNS 3:
    2 4 6 8 10 12
    */
}
// Cerinta Elemente pare stop

// Cerinta Elemente numere prime start
bool isPrime(int numar){
    bool flag = true;

    if (numar == 1 || numar == -1)
    {
        return !flag;
    }
    

    for (int div = 2; div < numar; div++)
    {
        if (numar % div == 0)
        {
            return !flag;
        }
    }

    return flag;
}

void elementeNumerePrime(int matrice[][MAX], int raspuns[], int nr_linii, int nr_coloane, int *dim2) {
    int indice = -1;

    for (int i = 0; i < nr_linii; i++)
    {
        for (int j = 0; j < nr_coloane; j++)
        {
            if (isPrime(matrice[i][j]))
            {
                raspuns[++indice] = matrice[i][j];
            }
        }
    }

    *dim2 = indice + 1;

    /*
    TEST 1:
    4
    4

     1  2  3  4
     5  6  7  8
     9 10 11 12
    13 14 15 16

    RASPUNS 1:
    2 3 5 7 11 13  

    TEST 2:
    3
    4

    1  2  3  4
    5  6  7  8
    9 10 11 12

    RASPUNS 2:
    2 3 5 7 11

    TEST 3:
    4
    3

     1  2  3
     4  5  6
     7  8  9
    10 11 12

    RASPUNS 3:
    2 3 5 7 11
    */
}
// Cerinta Elemente numere prime stop

// Cerinta ZigZag start
void parcurgereDiagonalaInSus(int matrice[][MAX], int raspuns[], int suma, int nr_linii, int nr_coloane, int *indice){
    for (int i = nr_linii - 1; i >= 0; i--)
    {
        for (int j = 0; j < nr_coloane; j++)
        {
            if (i + j == suma)
            {
                raspuns[*indice] = matrice[i][j];
                // printf("Raspuns[%d]: %d ", *indice, raspuns[*indice]);
                *indice += 1;
            }
        }
    }
    
}

void parcurgereDiagonalaInJos(int matrice[][MAX], int raspuns[], int suma, int nr_linii, int nr_coloane, int *indice){
    for (int i = 0; i < nr_linii; i++)
    {
        for (int j = 0; j < nr_coloane; j++)
        {
            if (i + j == suma)
            {
                raspuns[*indice] = matrice[i][j];
                // printf("Raspuns[%d]: %d ", *indice, raspuns[*indice]);
                *indice += 1;
            }
        }
    }
    
}


void zigZag(int matrice[][MAX], int nr_linii, int nr_coloane, int raspuns[], int *dim3){
    int indice = 0;

    for (int suma = 0; suma < nr_linii + nr_coloane - 1; suma++)
    {
        if (suma % 2 == 0)
        {
            parcurgereDiagonalaInJos(matrice, raspuns, suma, nr_linii, nr_coloane, &indice);
            // indice++;
        }
        else
        {
            parcurgereDiagonalaInSus(matrice, raspuns, suma, nr_linii, nr_coloane, &indice);
            // indice++;
        }
    }

    *dim3 = indice;

    /*
    TEST 1:
    4
    4

     1  2  3  4
     5  6  7  8
     9 10 11 12
    13 14 15 16

    RASPUNS 1:
    1 5 2 3 6 9 13 10 7 4 8 11 14 15 12 16

    TEST 2:
    3
    4

    1  2  3  4
    5  6  7  8
    9 10 11 12

    RASPUNS 2:
    1 5 2 3 6 9 10 7 4 8 11 12

    TEST 3:
    4
    3

     1  2  3
     4  5  6
     7  8  9
    10 11 12

    RASPUNS 3:
    1 4 2 3 5 7 10 8 6 9 11 12
    */   
}
// Cerinta ZigZag stop

// Cerinta Spirala start
void spirala(int matrice[][MAX], int nr_linii, int nr_coloane, int raspuns[], int *dim4){
    int k = 0, l = 0;
    int indice = 0;

    while (k < nr_linii && l < nr_coloane)
    {
        for (int i = l; i < nr_coloane; i++)
        {
            // printf("%d ", matrice[k][i]);
            raspuns[indice] = matrice[k][i];
            indice++;
        }

        k++;

        for (int i = k; i < nr_linii; i++) 
        {
            // printf("%d ", matrice[i][nr_coloane - 1]);
            raspuns[indice] = matrice[i][nr_coloane - 1];
            indice++;
        }

        nr_coloane--;

        if (k < nr_linii)
        {
            for (int i = nr_coloane - 1; i >= 0; --i)
            {
                // printf("%d ", matrice[nr_linii - 1][i]);
                raspuns[indice] = matrice[nr_linii - 1][i];
                indice++;
            }
            nr_linii--;
        }
        if (l < nr_coloane)
        {
            for (int i = nr_linii - 1; i >= k; i--)
            {
                // printf("%d ", matrice[i][l]);
                raspuns[indice] = matrice[i][l];
                indice++;
            }
            l++;
        }
        
    }

    *dim4 = indice - 1;

    /*
    TEST 1:
    4
    4

     1  2  3  4
     5  6  7  8
     9 10 11 12
    13 14 15 16

    RASPUNS 1:
    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

    TEST 2:
    3
    4

    1  2  3  4
    5  6  7  8
    9 10 11 12

    RASPUNS 2:
    1 2 3 4 8 12 11 10 9 5 6 7

    TEST 3:
    4
    3

     1  2  3
     4  5  6
     7  8  9
    10 11 12

    RASPUNS 3:
    1 2 3 6 9 12 11 10 7 4 5 8
    */   
}
// Cerinta Spirala stop

int main(){
    int matrice[MAX][MAX];
    int nr_linii, nr_coloane;

    citire(matrice, &nr_linii, &nr_coloane);

    for (int i = 0; i < nr_linii; i++)
    {
        for (int j = 0; j < nr_coloane; j++)
        {
            printf("%5d ", matrice[i][j]);
        }
        printf("\n");
    }

    int *raspuns1 = (int *)calloc(nr_linii * nr_coloane, sizeof(int));
    int dim1;
    elementePare(matrice, raspuns1, nr_linii, nr_coloane, &dim1);
    char *raspuns1Char = (char *)malloc((dim1 * 3) * sizeof(char));

    int pos = 0;
    for (int i = 0; i < dim1; i++)
    {
        pos += sprintf(raspuns1Char + pos, "%d ", raspuns1[i]);
    }

    raspuns1Char[pos + 1] = '\0';

    printf("\nRaspuns Numere pare: %s", raspuns1Char);
    
    free(raspuns1);
    free(raspuns1Char);

    int *raspuns2 = (int *)calloc(nr_linii * nr_coloane, sizeof(int));
    int dim2;
    elementeNumerePrime(matrice, raspuns2, nr_linii, nr_coloane, &dim2);
    char *raspuns2Char = (char *)malloc((dim2 * 3) * sizeof(char));

    pos = 0;
    for (int i = 0; i < dim1; i++)
    {
        pos += sprintf(raspuns2Char + pos, "%d ", raspuns2[i]);
    }

    raspuns2Char[pos] = '\0';

    printf("\nRaspuns Numere prime: %s", raspuns2Char);

    free(raspuns2);
    free(raspuns2Char);

    int *raspuns3 = (int *)calloc(nr_linii * nr_coloane, sizeof(int));
    int dim3;
    zigZag(matrice, nr_linii, nr_coloane, raspuns3, &dim3);
    char *raspuns3Char = (char *)malloc((dim3 * 3) * sizeof(char));

    pos = 0;
    for (int i = 0; i < dim1; i++)
    {
        pos += sprintf(raspuns3Char + pos, "%d ", raspuns3[i]);
    }

    raspuns3Char[pos] = '\0';

    printf("\nRaspuns ZigZag: %s", raspuns3Char);

    free(raspuns3);
    free(raspuns3Char);

    int *raspuns4 = (int *)calloc(nr_linii * nr_coloane, sizeof(int));
    int dim4;
    spirala(matrice, nr_linii, nr_coloane, raspuns4, &dim4);
    char *raspuns4Char = (char *)malloc((dim4 * 3) * sizeof(char));

    pos = 0;
    for (int i = 0; i < dim1; i++)
    {
        pos += sprintf(raspuns4Char + pos, "%d ", raspuns4[i]);
    }

    raspuns4Char[pos] = '\0';

    printf("\nRaspuns Spirala: %s", raspuns4Char);

    free(raspuns4);
    free(raspuns4Char);

    return 0;
}