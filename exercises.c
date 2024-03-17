#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) 
{ 
  int numeroMax = 0;
  for (int i = 0; i < size; i++)
    if (arr[i]>numeroMax)
    {
      numeroMax = arr[i];
    }
  
  return numeroMax; 
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) 
{
  int* arreglo_invertido = (int*)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) 
  {
      arreglo_invertido[i] = arr[size - i - 1];
  }

  for (int k = 0; k < size; k++)
    {
      arr[k] = arreglo_invertido[k];
    }
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize) 
{ 
  int cont = 0;
  for (int i = 0; i < size; i++)
    {
      if (arr[i]%2 == 0)
      {
        cont++;
      }
    }
  
  int *newArr = malloc(cont * sizeof(int)); // Allocate memory on the heap
  *newSize = cont;
  int x = 0;
  for (int k = 0; k < size; k++)
    {
      if (arr[k]%2 == 0)
      {
        newArr[x] = arr[k];
        x++;
      }
    }
  return newArr; 
}


/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,
                       int result[]) 
{
  int i = 0, j = 0, k = 0;
  while (i < size1 && j < size2)
    {
      if (arr1[i] < arr2[j])
      {
        result[k] = arr1[i];
        i++;
        k++;
        
      }
      else
      {
        result[k] = arr2[j];
        j++;
        k++;
      }
    }
  while (i < size1)
    {
      result[k] = arr1[i];
      i++;
      k++;

    }
  while (j < size2)
    {
      result[k] = arr2[j];
      j++;
      k++;
    }
  
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) 
{ 
  int variable = 1;
  for (int i = 0; i < size-1; i++)
    {
      if (!(arr[i] < arr[i+1]))
      {
        variable = -1;
        break;
      }
    }
  if (variable == 1) 
  {
    return variable;
  }
  variable = -1;
  for (int k = 0; k < size-1; k++)
    {
      if (!(arr[k] > arr[k+1]))
      {
        variable = 0;
        break;
      }
    }
  
  return variable;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
