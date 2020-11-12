using namespace std;
#include <iostream>

int main ()
{
    int i;
    int n;
    int somma=0;
    int media;
    int prodotto=1;
    int max;
    int min;
    for (i=1;i<=3;i++) {
        cout << "inserisci numero";
        cin >> n;
        somma = somma+n;
        prodotto=prodotto*n;
        if (i==1) {
            max = n;
        }
        if (n>max) {
            max = n;
        }
        if (i==1) {
            min = n;
        }
        if (n<min) {
            min = n;
        }
    }
    media = somma/3;
    cout << "la somma è " << somma << " il prodotto è " << prodotto << " la media è " << media << " il numero più grande è " << max << " il numero più piccolo è " << min;
return 0;
}

