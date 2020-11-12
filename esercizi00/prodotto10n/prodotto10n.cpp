using namespace std;
#include <iostream>

int main ()
{
    int p=1;
    int num;
    int i;
    for(i=1;i<=10;i++)
    {
        cout << "inserisci numero";
        cin >> num;
        p = p*num;
    }
 cout << "il prodotto è" << p;
return 0;
}

