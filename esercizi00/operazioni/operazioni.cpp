using namespace std;
#include <iostream>

int main ()
{
    int a;
    int b;
    int somma;
    int prodotto;
    int differenza;
    int divisione;
    int resto;

    cout << "inserisci il primo numero";
    cin >> a;
    cout << "inserisci il secondo numero";
    cin >> b;

    somma = a+b;
    prodotto = a*b;
    differenza = a-b;
    divisione = a/b;
    resto = a%b;


    cout << "la somma è" << somma << "il prodotto è" << prodotto << "la differenza è" << differenza << "la divisone è" << divisione <<"il resto è" << resto;
    
    return 0;
}
