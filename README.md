# Who am I
My name is Efdal and I am a __ year-old student. I am very passionate about getting acquainted with new programming concepts. I like low-level programming ever since I first started exploring the field. Recently I started mastering C which will take a while. My background as a python expert will help me through this journey.

### Puzzle my age
```c

#include <stdio.h>
#include <stdlib.h>

int erbij(int*** getal){
    ***getal = (***getal + 2) / 2 * 2 - 1;
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
        &pp
    );
    
    printf("My age: %d\n", mijnLeeftijd);
    return 0;
}


```

