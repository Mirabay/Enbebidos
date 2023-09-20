/*
Desarrolla una función que regresa la suma de todos
los números primos que hay entre 1 y 5,000,000 (cinco millones).
Si quieres probar, recuerda que la suma de los números primos 
menores a 10 es 2 + 3 + 5 + 7 = 17.

El resultado esperado para el límite de 
5,000,000 es 838,596,693,108 (toma en cuenta esto para 
el tipo de datos).
*/

#include <iostream>
#include <vector>

bool esPrimo(int numero) {

    /*
        No entendi el algoritmo de peter
        Pero GeeksForGeeks nunca me abandona
        https://www.geeksforgeeks.org/check-number-full-prime/
    */
    
    if (numero == 1)
        return false;
 
    // check for all factors
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return false;
    }
 
    return true;
}

long long sumaPrimos( int b) {
    long long suma = 0;

    for (int i = 2; i <= b; ++i) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    return suma;
}

int main() {
    int b= 5000000;
    long long resultado = sumaPrimos(b);
    std::cout << "La suma de los números primos hasta "<< b << " es: " << resultado << std::endl;
    return 0;
}