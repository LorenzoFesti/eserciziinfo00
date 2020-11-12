using namespace std;
#include <iostream>

int main ()
{
    int a;
    int b;
    int r;

    cout << "inserisci il primo numero";
    cin >> a;

    cout << "inserisci il secondo numero";
    cin >> b;

    r = a%b;

    if (r==0)
    {
        cout << "i due numeri sono multipli uno dell'altro";
    }
    if (r!=0)
    {
        cout << "i due numeri non sono multipli uno dell'altro";
    }
return 0;
}
