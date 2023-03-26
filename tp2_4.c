#include <stdlib.h>
#include <stdio.h>
#include <time.h>
struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
};

//struct compu cargar(struct compu computadoras[5]);
void Mostrar(struct compu computadoras[5]);
void PcMasVieja(struct compu computadoras[5]);
void PcMayorVelocidad(struct compu computadoras[5]);


int main(){
    srand(time(NULL));
    struct compu PC;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int indice_aleatorio = rand() % 6;
    PC.velocidad = 1+rand()%3;
    PC.anio = 2015+rand()%9;
    PC.cantidad = 1+rand()%9;
    PC.tipo_cpu = tipos[indice_aleatorio];
    //printf("%s", PC.tipo_cpu);

    struct compu computadoras[5];

    for (int i = 0; i < 5; i++) // cargo 5 compus aleatorias
    {
        computadoras[i].velocidad = 1+rand()%3;
        computadoras[i].anio = 2015+rand()%9;
        computadoras[i].cantidad = 1+rand()%9;
        computadoras[i].tipo_cpu = tipos[rand() % 6];
    }

    Mostrar(computadoras);
    PcMasVieja(computadoras);
    PcMayorVelocidad(computadoras);
    


  
    

   /*  printf("%d", PC.anio); */
}


/*struct compu cargar(struct compu computadoras[5]){

    for (int i = 0; i < 5; i++)
    {
       scanf("%d", &computadoras[i].velocidad);

       printf("Ingrese el año\n");
       scanf("%d", &computadoras[i].anio); 

       printf("Ingrese la cantidad\n");
       scanf("%d", &computadoras[i].cantidad); 

       printf("Ingrese la velocidad\n");
       scanf("%d", &computadoras[i].velocidad);  
    }
    
}*/


void Mostrar(struct compu computadoras[5]){

    for (int i = 0; i < 5; i++)
    {   
        printf("PC numero %d\n\n",i+1);
        printf("Velocidad: %d\n",computadoras[i].velocidad);
        printf("Año: %d\n",computadoras[i].anio );
        printf("Cantidad: %d\n",computadoras[i].cantidad);
        printf("Tipo_cpu: %s\n",computadoras[i].tipo_cpu );
        printf("\n----------------------\n\n");
    }
    
    
    
}


void PcMasVieja(struct compu computadoras[5]){

    int anioMasViejo = computadoras[0].anio;

    for (int i = 1; i < 5; i++)
    {
        if (anioMasViejo > computadoras[i].anio )
        {
            anioMasViejo = computadoras[i].anio;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        if (anioMasViejo == computadoras[i].anio)
        {
            printf("PC numero %d es la mas vieja\n\n",i+1);
            printf("Velocidad: %d\n",computadoras[i].velocidad);
            printf("Año: %d\n",computadoras[i].anio );
            printf("Cantidad: %d\n",computadoras[i].cantidad);
            printf("Tipo_cpu: %s\n",computadoras[i].tipo_cpu );
        }
        
    }
    


    
}



void PcMayorVelocidad(struct compu computadoras[5]){

     int mayorVel = computadoras[0].velocidad;

    for (int i = 1; i < 5; i++)
    {
        if (mayorVel < computadoras[i].velocidad )
        {
            mayorVel = computadoras[i].velocidad;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        if (mayorVel == computadoras[i].velocidad)
        {
            printf("PC numero %d es la de mayor velocidad\n\n",i+1);
            printf("Velocidad: %d\n",computadoras[i].velocidad);
            printf("Año: %d\n",computadoras[i].anio );
            printf("Cantidad: %d\n",computadoras[i].cantidad);
            printf("Tipo_cpu: %s\n",computadoras[i].tipo_cpu );
        }
        
    }
}