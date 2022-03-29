
#include <stdio.h>
#include <stdlib.h>

int erbij(int** getal){
    **getal = (**getal + 1) / 2* 2 + 1;
}

int main()
{
    int* leeftijd = (int*) malloc(2 * sizeof(int));
    printf("Size of `leeftijd`: %ld bytes on mem address: %p\n", 
        sizeof(*leeftijd) * 4 / 2, &*leeftijd
    );
    
    *(leeftijd) = 5;
    *(leeftijd+1) = 2;

    int mijnLeeftijd = *(leeftijd) + *(leeftijd+1) + 9;
    
    int *p = &mijnLeeftijd;
    int **pp = &p;
    
    erbij(
        &p
    );
    
    printf("My age: %d\n", mijnLeeftijd);
    return 0;
}
