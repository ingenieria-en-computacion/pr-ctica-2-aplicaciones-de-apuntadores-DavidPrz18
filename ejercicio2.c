#include <stdio.h>
/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main () {
  short arr[5] ={1,2, 3, 4, 5}, *apArr;
  apArr = &arr[0];
  // imprime la dirección de memoria del arreglo en la posición [0]
  printf("Direccion del arreglo en la primera posicion: %x\n",&arr[0]);
  // imprime la dirección de memoria del arreglo  (el nombre del arreglo es un apuntador)
  printf("Direccion del arreglo: %x\n",&arr);
  // imprime la dirección de memoria almacenada en el apuntador apArr
  printf("Direccion almacenada en el apuntador: %x\n",apArr);


  printf("*apArr = %i\n",*apArr);
  // suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+1) = %i\n",*(apArr+1));
  printf("*(apArr+2) = %i\n",*(apArr+2));
  printf("*(apArr+1) = %i\n",*(apArr+3));
  printf("*(apArr+2) = %i\n",*(apArr+4));
 // Escribe una línea de código para mostrar el valor apuntado por apArr
 
  printf("Recorriendo el arreglo usando un for:\n");
  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  //Modifica apArr para que apunte al cuarto elemento
apArr = &arr[3];
  //Accede al elemento con indice -2 usando el apuntador
  printf("el apuntador ahora apunta al cuarto elemento\n");
  printf("Elemento -2: %d\n", (apArr[-2]));
  printf("Elemento 0: %d\n", apArr[0]);
  printf("Elemento -3: %d\n", apArr[-3]);

  //Ajusta el ciclo for para que se pueda recorrer completo el arreglo de acuerdo al elemento apuntado
  printf("ahora se muestra el arreglo completo de acuerdo con esta modificacion \n");
  for (int i = -3; i < 2; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
    
  }
  return 0;
}
