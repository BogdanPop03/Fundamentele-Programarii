#include <stdio.h>
#include <stdlib.h>

int n;

void func1(int numar){
    switch(numar){
        case 0: printf("zero"); break;
        case 1: printf("unu"); break;
        case 2: printf("doi"); break;
        case 3: printf("trei"); break;
        case 4: printf("patru"); break;
        case 5: printf("cinci"); break;
        case 6: printf("sase"); break;
        case 7: printf("sapte"); break;
        case 8: printf("opt"); break;
        case 9: printf("noua"); break;
        case 10: printf("zece"); break;
    }
}

void func2(int numar){
    switch(numar){
        case 20: printf("douazeci"); break;
        case 60: printf("saizeci"); break;
        default: func1(numar / 10); printf("zeci"); break;
    }
}

void func3(int numar){
    switch(numar){
        case 11: printf("unsprezece"); break;
        case 14: printf("paisprezece"); break;
        case 16: printf("saisprezece"); break;
        default: func1(numar % 10); printf("sprezece"); break;
    }
}

void func4(int numar){
    func2(numar / 10 * 10);
    printf(" si ");
    func1(numar % 10);
}

int main()
{
    scanf("%d", &n);
    /*
    if(n <= 0 || n >= 13)
        printf("Numarul citit nu corespunde nici unei luni din an.");
    else{
        if(n >= 1 && n <= 2)
            printf("Iarna.");

        if(n >= 3 && n <= 5)
            printf("Primavara.");

        if(n >= 6 && n <= 8)
            printf("Vara.");

        if(n >= 9 && n <= 11)
            printf("Toamna.");

        if(n == 12)
            printf("Iarna.");
    }
    */

    switch(n){
        case 1:
        case 2: printf("Iarna."); break;
        case 3:
        case 4:
        case 5: printf("Primavara."); break;
        case 6:
        case 7:
        case 8: printf("Vara."); break;
        case 9:
        case 10:
        case 11: printf("Toamna."); break;
        case 12: printf("Iarna."); break;
        default: printf("Numarul introdus nu corespunde nici unei luni."); break;
    }

    printf("\n");

    int numar;

    scanf("%d", &numar);

    if(numar >= 0 && numar <= 10)
        func1(numar);
    else if(numar > 10 && numar < 20)
        func3(numar);
    else if(numar % 10 == 0)
        func2(numar);
    else
        func4(numar);

    return 0;
}
