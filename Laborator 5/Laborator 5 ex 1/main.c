#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 100

void del_min(int v[N], int *n){
    int min = v[0];
    int index_min = 0;

    for(int i = 1; i < *n; i++){
        if(v[i] < min)
            min = v[i];
    }

    for(int i = 0; i < *n; i++){
        if(v[i] == min){
            index_min = i;
            break;
        }
    }

    for(int i = index_min; i < *n - 1; i++){
        v[i] = v[i + 1];
    }

    (*n)--;
}

void del_max(int v[N], int *n){
    int max = v[0];
    int index_max = 0;

    for(int i = 1; i < *n; i++){
        if(v[i] > max)
            max = v[i];
    }

    for(int i = 0; i < *n; i++){
        if(v[i] == max){
            index_max = i;
            break;
        }
    }

    for(int i = index_max; i < *n - 1; i++){
        v[i] = v[i + 1];
    }

    (*n)--;

}

void create_vector(int v[N], int w[N], int n){
    for(int i = 0; i < n; i++){
        w[i] = 1;
        for(int j = 0; j < n; j++){
            if(j == i)
                continue;
            w[i] *= v[j];
        }
    }
}

void sum_left_neighbour(int v[N], int n){
    for(int i = 1; i < n; i++){
        v[i] += v[i - 1];
    }
}

void sum_right_neighbour(int v[N], int n){
    int i;
    for (i = 0; i < n - 1; i++) {
        v[i] += v[i+1];
    }
}

void print_vector(int v[N], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    printf("\n");
}

void menu(int v[N], int n){
    char ch;

    do{
        printf("\n0 - iesire din program\n1 - eliminare element minim\n2 - eliminare element maxim\n3 - printare vector\n");
        printf("Introduceti un caracter: ");

        scanf(" %c", &ch);

        switch(ch){
            case '0': return;
            case '1': del_min(v, &n); break;
            case '2': del_max(v, &n); break;
            case '3': print_vector(v, n); break;
            default: printf("Nu ati introdus un caracter acceptat.\n"); break;
        }
    }while(true);
}

int main(void)
{
    int v[N] = {1, 2, 3, 4, 5};
    print_vector(v, 5);
    sum_right_neighbour(v, 5);
    print_vector(v, 5);

    menu(v, 5);

    return 0;
}
