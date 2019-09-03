//Josue David Hurtado Argueta
//00156919
//Seccion 02
#include <iostream>
using namespace std;


int multiplicacion(int a, int b){
	if(b == 1){
		return a;
	}
	else{
		
		int x = b - 1;
		int y = multiplicacion(a, x);
		
		return a + y;
	}
}

int main(){
	int n = 0, multiplicador = 0;
	
	cout << "Ingrese los numeros a y b" << endl;
	cin >> n;
	cout << "x" << endl;
	cin >> multiplicador;
	
	int m = multiplicacion(n, multiplicador);
	cout << "Reesultado de " << n << " x " << multiplicador << " = " << m << endl;
	
	return 0;
}