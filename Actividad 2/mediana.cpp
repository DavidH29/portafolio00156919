#include <iostream>
using namespace std;

float mediana(int *p, int tamano){
    int medio, medio2;
    float med;

    if(tamano % 2 == 0){
        medio = (tamano/2) - 1;
        medio2 = (tamano/2);

        med = (*(p + medio) + *(p + medio2));
        med = med/2;
    }
    else{
        medio = (tamano/2);
        med = *(p + medio);
    }

    return med;
}

int main(){
    int n = 0;

    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    int arreglo[n];

    cout << "Por favor ingrese los numeros de menor a mayor" << endl;
    for(int i = 0; i < n; i++){
        cout << "Ingrese un numero: ";
        cin >> arreglo[i];
    }

    cout << "La mediana es " << mediana(arreglo, n);

    return 0;
}
