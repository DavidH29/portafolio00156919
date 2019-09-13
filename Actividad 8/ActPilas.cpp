#include <iostream>
using namespace std;

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

void pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
}

float ultimivacio(Pila *s){
    if(empty(s))
        return -1; //Lista vacía
    float a = 0;
  for(int i = s->top; i >= 0; i++)
    pop(s, &a);
  return a;
}

float ultimi(Pila *s){
    if(empty(s))
        return -1; //Lista vacía
    Pila aux;
    float a = 0;
    for(int i = s->top; i >= 0; i++){
        pop(s, &a);
        push(&aux, a);
    }
    return a;
    for(int i = s->top; i >= 0; i++){
        pop(&aux, &a);
        push(s, a);
    }
}

float ultimo = 0;

int main() {
    char opcion = 'a';
    Pila unaPila;
    initialize(&unaPila);

    push(&unaPila, 1.2);
    push(&unaPila, 3.4);
    push(&unaPila, 5.6);

    if(unaPila.top == -1)
        cout << "Pila Vacia" << endl;

    cout << "Desea dejar la pila vacia? y/n" << endl;
    cin >> opcion;

    switch(opcion){
        case 'y': ultimo = ultimivacio(&unaPila); break;
        case 'n': ultimo = ultimi(&unaPila); break;
        default : cout << "Oh my god, you had one job" << endl; break;
    }

    cout << "Ultimo: " << ultimo << endl;


    return 0;
}
