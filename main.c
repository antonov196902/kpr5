#include <stdio.h>
#include <locale.h>
#include <time.h>
#include "load.h"

#define N 11
#define M 9
#define K 38

int main(void)
{
    int Q[N][M], R[K];

    setlocale(LC_ALL, "rus");

    //заполнение
    int i, j;
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            Q[i][j] = (rand() % 100)-50;
    for(i = 0; i < K; i++)
        R[i] = (rand() % 100)-50;

    //вывод
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++)
            printf ("%d ", Q[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < K; i++)
        printf ("%d ", R[i]);

    i=0, j=1;
    printf("Выберите, где поменять отрицательные числа на их квадраты:\n1 - В массиве R.\n2 - В матрице Q,\n3 - Выход\n");
    while(j)
    {
      scanf("%d",&i);
      if(i==1){
        LoadRun("mas.dll", i, R, K);
        for(i = 0; i < K; i++)
            printf ("%d ", R[i]);
        printf("\n");
    }
    printf("\n");
      if(i==2){
        LoadRun("matr.dll", i, Q, N*M);
        LoadRun("mas.dll", i, R, K);
        for(i = 0; i < N; i++){
            for(j = 0; j < M; j++)
                printf ("%d ", Q[i][j]);
            printf("\n");
        }
      }
      if(i==3)
        j=0;
    }
    system ("pause");
  return 0;
}
