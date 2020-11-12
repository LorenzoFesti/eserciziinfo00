#include <iostream>
using namespace std;

int in;
int sum = 0;
int n = 0;

int main ()
{

    cout << "Inserire numero " << endl;
    cin >> in;

    while (in != 0)
    {
        if (in%2 == 0)
        {
            sum+=in;
            n++;
        }
        cout << "Inserire numero " << endl;
        cin >> in;
    }
    cout << "La media è: " << sum/n << endl;
    return 0;
}

