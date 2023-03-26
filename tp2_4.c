#include <stdlib.h>
#include <stdio.h>
#include <time.h>
struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
};


int main(){
    srand(time(NULL));
    struct compu PC;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int indice_aleatorio = rand() % 6;
    PC.velocidad = 1+rand()%3;
    PC.anio = 2015+rand()%9;
    PC.cantidad = 1+rand()%9;
    PC.tipo_cpu = tipos[indice_aleatorio];
    printf("%s", PC.tipo_cpu);

   /*  printf("%d", PC.anio); */
}