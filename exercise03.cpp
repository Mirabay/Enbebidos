/*
    Desarrolla un procedimiento que recibe como parámetros
    un arreglo de enteros y el tamaño del mismo. 
    El procedimiento ordena los elementos del arreglo de 
    manera ascendente (de menor a mayor) usando el algoritmo 
    de ordenamiento conocido como Enumeration Sort.
*/
#include <iostream>


int* enumerationSort(int a[],int b){
    
    int *arrAux = new int [b];  // Creamos un arreglo auxiliar 
    // Por cada posición i en el arreglo
    for (size_t i = 0; i < b; i++)
    {
        // Inicializamos un contador en cero
        int count= 0;
        // Por cada posición j en el arreglo
        for (size_t j = 0; j < b; j++)
        {
            // Si a[i] > a[j], incrementa el contador
            if (a[i]>a[j])
            {
                count++;
            }
            // Sino
            else if (a[i]==a[j] && j<i) // Si a[i] == a[j] y j < i, incrementa el contador
            {
                count++;
            } 
        }
        // Copia a[i] a b[contador]
        arrAux[count]=a[i];
    }
    // Copia el arreglo b al arreglo a
    a = arrAux;
    return a;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
