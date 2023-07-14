#include <iostream>
using namespace std;

int main() {
	  // Variable para almacenar la suma de los números
    int suma = 0;
    
    
    // Declaración del arreglo con los números del 1 al 5
    int numeros[] = {1, 2, 3, 4, 5};


    // Bucle for para iterar sobre cada elemento del arreglo
    for (int i = 0; i < 5; i++) {
        // Se acumula la suma de los elementos en la variable suma
        suma = suma + numeros[i];
    }

    // Impresión del resulta do de la suma
    cout << "La suma de los numeros del 1 al 5 es: " << suma << endl;

    return 0;
}


//calcule la  multiplicacion  de los siguientes numeros 8,4,2,7,5,1,7,8,9
