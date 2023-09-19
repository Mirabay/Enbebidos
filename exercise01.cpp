/*
    Desarrolla una función que recibe como parámetros
    un arreglo de números enteros y el tamaño del 
    mismo. La función regresa la sumatoria de todos 
    los elementos pares contenidos en el arreglo. 
    El arreglo esperado para el arreglo creado en el 
    código base es 500000000.
*/
#include <iostream>

using namespace std;

int exercise01(int arreglo[],int largo)
{
    int sum=0;
    if (largo>500000000)
    {
        cout<<"El arreglo base es muy grande"<<endl;
    }
    else{
        for (size_t i = 0; i < largo; i++)
        {
            if (arreglo[i]%2==0)
            {
                sum= sum + arreglo[i];
            } 
        }
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
    int arreglo[10]= {1,2,3,4,5,6,7,8,9,10};
    int res= exercise01(arreglo,10);
    cout<<res;
    return 0;
}
