#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int aplicarAumento(float precio);

int reemplazarCaracteres(char cadena[], char caracterUno, char caracterDos);


typedef struct {

    int id;
    char nombre[20];
    char tipo;
    float efectividad;
}eVacuna;

void ordenarArray(eVacuna arrayVacunas[]);


int main()
{

/*float precio = 100;
float resultado;*/
//int resultadoCantidadReemplazos;

 /*resultado = aplicarAumento(precio);

 printf("%f",resultado);*/

   /* resultadoCantidadReemplazos = reemplazarCaracteres("hola",'a','i');

    printf("%d",resultadoCantidadReemplazos);*/


    eVacuna arrayDeVacunas[] =
    {
        {1, "sarlanga", 'd', 70},
        {2, "sarlanga", 'd', 90},
        {3, "pirulo", 'a', 99}
    };


    ordenarArray(arrayDeVacunas);

    return 0;
}
int aplicarAumento(float precio){

float aumento = 0;

        aumento = (precio * 1.05);

        return aumento;

}

int reemplazarCaracteres(char cadena[], char caracterUno, char caracterDos){

    int contadorDeReemplazos = 0;
    int cantidad = strlen(cadena);



    for(int i = 0; i < cantidad ; i++ )
    {

        if(cadena[i] == caracterUno)
        {
            contadorDeReemplazos++;

            cadena[i] = caracterDos;




        }

    }



    printf("%s",cadena);
    return contadorDeReemplazos;

}


void ordenarArray(eVacuna arrayVacunas[]){

    int tam = 3;

    eVacuna arrayAux[tam];

    eVacuna auxVacuna;


    for(int i = 0; i < tam; i++)
    {

            arrayAux[i] = arrayVacunas[i];
    }


        for(int i = 0; i < tam; i++){

            for(int j = 1; j < tam; j++){


                    if(arrayAux[i].tipo > arrayAux[j].tipo){
                        auxVacuna = arrayAux[i];
                        arrayAux[i] = arrayAux[j];
                        arrayAux[j] = auxVacuna;

                    }

            }
        }

        for(int i = 0; i < tam; i++){

            for(int j = 1; j < tam; j++){

                    if(arrayAux[i].efectividad > arrayAux[j].efectividad && arrayAux[i].tipo == arrayAux[j].tipo ){

                        auxVacuna = arrayAux[i];
                        arrayAux[i] = arrayAux[j];
                        arrayAux[j] = auxVacuna;
                    }

            }
        }


        for(int i = 0; i < tam; i++)
        {

            printf("%d %s %s %f \n",arrayAux[i].id,arrayAux[i].nombre,arrayAux[i].tipo,arrayAux[i].efectividad);
        }




}
