using namespace std;
#include <iostream>

int main ()
{
    int a;
    int b;
    cout <<"inserisci il primo numero";
    cin >>a;
    cout <<"inserisci il secondo numero";
    cin >>b;
    if (a>b)
    {
        cout <<a<<" is larger than "<<b;
    }
    if (a<b)
    {
        cout <<b<<" is larger than "<<a;
    }
    if (a==b)
    {
        cout <<"These numbers are equals";
    }
return 0;
}

