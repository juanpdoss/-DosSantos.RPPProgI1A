#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

}ePais;

void actualizarMuertos(ePais* unPais,int muertosHoy);

void quitarVocales(char* cadena);

void ordenarCaracteres(char* cadena);

int main()
{
    char prueba[30];
    char prueba2[30];

    strcpy(prueba,"funciona");

    strcpy(prueba2,"ordena");

   // quitarVocales(prueba);

  //  printf("sin vocales:%s \n",prueba);

    ordenarCaracteres(prueba2);

    printf("funcion 3,ordenamiento:%s",prueba2);


    return 0;
}

void actualizarMuertos(ePais* unPais,int muertosHoy)
{

  if(unPais!=NULL&&muertosHoy>0)
  {

    unPais->muertos+=muertosHoy;

  }

}

void quitarVocales(char* cadena) //no funciona
{
   int i=0;
   char aux[300];

   if(cadena!=NULL)
   {
      while(cadena[i]!='\0')
      {
          i++;

          if(cadena[i]=='a')
          {
              continue;
          }
          else if(cadena[i]=='e')
          {
              continue;
          }
          else if(cadena[i]=='i')
          {
             continue;
          }
          else if(cadena[i]=='o')
          {
              continue;
          }
          else if(cadena[i]=='u')
          {
              continue;
          }
          aux[i]=cadena[i];

      }

   }

   strcpy(cadena,aux);

}
void ordenarCaracteres(char* cadena)
{
    int tam;
    tam=strlen(cadena);
    char aux;
    if(cadena!=NULL)
    {
        for(int i=0;i<tam-1;i++)
        {
            for(int j=i+1;j<tam;j++)
            {
                if(cadena[i]>cadena[j])
                {
                    char aux=cadena[i];
                    cadena[i]=cadena[j];
                    cadena[j]=aux;


                }

            }

        }


    }

}

