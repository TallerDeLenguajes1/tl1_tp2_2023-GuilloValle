#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){

    int i;
    double vt[N];
    double *puntAvt;
    puntAvt = vt;
    for(i = 0;i<N; i++)
    {
    vt[i]=1+rand()%100;
    printf("%2.f\n" , *puntAvt);
    puntAvt++;
    }

    
    return 0;
}
