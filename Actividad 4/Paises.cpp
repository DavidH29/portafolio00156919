#include <iostream>
using namespace std;

struct paises{
    string nombre;
    string capital;
    int habitantes;
};

int main(){
    paises america[5];
    america[0].nombre = "El Salvador";
    america[0].capital = "San Salvador";
    america[0].habitantes = 0;

    america[1].nombre = "Estados Unidos";
    america[1].capital = "Washintong D.C";
    america[1].habitantes = 0;

    america[2].nombre = "Mexico";
    america[2].capital = "Ciudad de Mexico";
    america[2].habitantes = 0;

    america[3].nombre = "Argentina";
    america[3].capital = "Buenos Aires";
    america[3].habitantes = 0;

    america[4].nombre = "Chile";
    america[4].capital = "Santiago de Chile";
    america[4].habitantes = 0;

    //////////////////////////

    paises europa[5];
    europa[0].nombre = "Espania";
    europa[0].capital = "Madrid";
    europa[0].habitantes = 0;

    europa[1].nombre = "Francia";
    europa[1].capital = "Paris";
    europa[1].habitantes = 0;

    europa[2].nombre = "Alemania";
    europa[2].capital = "Berlin";
    europa[2].habitantes = 0;

    europa[3].nombre = "Reino Unido";
    europa[3].capital = "Londres";
    europa[3].habitantes = 0;

    europa[4].nombre = "Italia";
    europa[4].capital = "Roma";
    europa[4].habitantes = 0;

    //////////////////////////

    paises asia[5];
    asia[0].nombre = "China";
    asia[0].capital = "Pekin";
    asia[0].habitantes = 0;

    asia[1].nombre = "Japon";
    asia[1].capital = "Tokio";
    asia[1].habitantes = 0;

    asia[2].nombre = "India";
    asia[2].capital = "Nueva Delhi";
    asia[2].habitantes = 0;

    asia[3].nombre = "Rusia";
    asia[3].capital = "Moscu";
    asia[3].habitantes = 0;

    asia[4].nombre = "Corea del Norte";
    asia[4].capital = "Pionyang";
    asia[4].habitantes = 0;

    //////////////////////////

    paises africa[5];
    africa[0].nombre = "Egipto";
    africa[0].capital = "El Cairo";
    africa[0].habitantes = 0;

    africa[1].nombre = "Argelia";
    africa[1].capital = "Argel";
    africa[1].habitantes = 0;

    africa[2].nombre = "Nigeria";
    africa[2].capital = "Abuya";
    africa[2].habitantes = 0;

    africa[3].nombre = "Mozambique";
    africa[3].capital = "Maputo";
    africa[3].habitantes = 0;

    africa[4].nombre = "Marruecos";
    africa[4].capital = "Rabat";
    africa[4].habitantes = 0;

    //////////////////////////

    paises oceania[5];
    oceania[0].nombre = "Australia";
    oceania[0].capital = "Canberra";
    oceania[0].habitantes = 0;

    oceania[1].nombre = "Nueva Zelanda";
    oceania[1].capital = "Wellington";
    oceania[1].habitantes = 0;

    oceania[2].nombre = "Papua Nueva Guinea";
    oceania[2].capital = "Puerto Moresby";
    oceania[2].habitantes = 0;

    oceania[3].nombre = "Fiyi";
    oceania[3].capital = "Suva";
    oceania[3].habitantes = 0;

    oceania[4].nombre = "Samoa";
    oceania[4].capital = "Apia";
    oceania[4].habitantes = 0;

    int seleccion = 0,pobtotal = 0, pobcapmaspob = 0;
    string capmaspob = "";

    cout << "Seleccione un continente:" << endl;
    cout << "1.America\n2.Europa\n3.Asia\n4.Africa\n5.Oceania" << endl;
    cin >> seleccion;

    switch(seleccion){
        case 1:
            for(int i = 0; i < 5; i++){
                cout << "Ingrese la poblacion de " << america[i].nombre << endl;
                cin >> america[i].habitantes;
            }
            for(int i = 0; i < 5; i++){
                pobtotal += america[i].habitantes;
            }
            cout << "La poblacion del continente es " << pobtotal << endl;
            pobcapmaspob = america[0].habitantes;
            capmaspob = america[0].capital;
            for(int i = 1; i < 5; i++){
                if(pobcapmaspob < america[i].habitantes){
                    pobcapmaspob = america[i].habitantes;
                    capmaspob = america[i].capital;
                }
            }
            cout << "La capital mas poblada es " << capmaspob << endl;
            break;

        case 2:
            for(int i = 0; i < 5; i++){
                cout << "Ingrese la poblacion de " << europa[i].nombre << endl;
                cin >> europa[i].habitantes;
            }
            for(int i = 0; i < 5; i++){
                pobtotal += europa[i].habitantes;
            }
            cout << "La poblacion del continente es " << pobtotal << endl;
            pobcapmaspob = europa[0].habitantes;
            capmaspob = europa[0].capital;
            for(int i = 1; i < 5; i++){
                if(pobcapmaspob < europa[i].habitantes){
                    pobcapmaspob = europa[i].habitantes;
                    capmaspob = europa[i].capital;
                }
            }
            cout << "La capital mas poblada es " << capmaspob << endl;
            break;

        case 3:
            for(int i = 0; i < 5; i++){
                cout << "Ingrese la poblacion de " << asia[i].nombre << endl;
                cin >> asia[i].habitantes;
            }
            for(int i = 0; i < 5; i++){
                pobtotal += asia[i].habitantes;
            }
            cout << "La poblacion del continente es " << pobtotal << endl;
            pobcapmaspob = asia[0].habitantes;
            capmaspob = asia[0].capital;
            for(int i = 1; i < 5; i++){
                if(pobcapmaspob < asia[i].habitantes){
                    pobcapmaspob = asia[i].habitantes;
                    capmaspob = asia[i].capital;
                }
            }
            cout << "La capital mas poblada es " << capmaspob << endl;
            break;

        case 4:
            for(int i = 0; i < 5; i++){
                cout << "Ingrese la poblacion de " << africa[i].nombre << endl;
                cin >> africa[i].habitantes;
            }
            for(int i = 0; i < 5; i++){
                pobtotal += africa[i].habitantes;
            }
            cout << "La poblacion del continente es " << pobtotal << endl;
            pobcapmaspob = africa[0].habitantes;
            capmaspob = africa[0].capital;
            for(int i = 1; i < 5; i++){
                if(pobcapmaspob < africa[i].habitantes){
                    pobcapmaspob = africa[i].habitantes;
                    capmaspob = africa[i].capital;
                }
            }
            cout << "La capital mas poblada es " << capmaspob << endl;
            break;

        case 5:
            for(int i = 0; i < 5; i++){
                cout << "Ingrese la poblacion de " << oceania[i].nombre << endl;
                cin >> oceania[i].habitantes;
            }
            for(int i = 0; i < 5; i++){
                pobtotal += oceania[i].habitantes;
            }
            cout << "La poblacion del continente es " << pobtotal << endl;
            pobcapmaspob = oceania[0].habitantes;
            capmaspob = oceania[0].capital;
            for(int i = 1; i < 5; i++){
                if(pobcapmaspob < oceania[i].habitantes){
                    pobcapmaspob = oceania[i].habitantes;
                    capmaspob = oceania[i].capital;
                }
            }
            cout << "La capital mas poblada es " << capmaspob << endl;
            break;

        default: cout << "E R R O R" << endl;
            break;
    }



    return 0;
}
