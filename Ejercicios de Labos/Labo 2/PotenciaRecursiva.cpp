#include <iostream>
#include <math.h>
using namespace std;

int exponente(int a, int b, unsigned long long acum){
    if(b == 0)
        return acum;
    else{
        acum = a *acum;
        exponente(a,b-1,acum);
    }
}

int main(){
    int x = 0, y = 0, cont = 1;
    cout << "Ingrese x: ";
    cin >> x;

    cout << "Ingrese y: ";
    cin >> y;

    unsigned long long int power = exponente(x, y, 1);

    cout << power << endl;

    return 0;
}
