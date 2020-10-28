
#include <stdio.h>
#include "lib.h"

int matrWork (int *matr, int size){
    int j;
    for (j=0; j<size; j++)
        if(*(matr+j)<0)
            *(matr+j)*=*(matr+j);
    return 1;
}
