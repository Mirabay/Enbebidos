/*
Desarrolla una función que regresa la suma de todos
los números primos que hay entre 1 y 5,000,000 (cinco millones).
Si quieres probar, recuerda que la suma de los números primos 
menores a 10 es 2 + 3 + 5 + 7 = 17.

El resultado esperado para el límite de 
5,000,000 es 838,596,693,108 (toma en cuenta esto para 
el tipo de datos).
*/

int exercise02(int a,int b)
{
    int sum=0;
    if (a== 0 or a== 1 or a== 4) sum=sum;
    for (int x = 2; x < a / 2; x++) {
    if (a % x == 0) return false;
    }
    
    
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
