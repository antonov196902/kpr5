
#include <stdio.h>
#include "lib.h"

int masWork (int *mas, int size){
    int j;
    for (j=0; j<size; j++)
        if(*(mas+j)<0)
            *(mas+j)*=*(mas+j);
    return 1;
}
