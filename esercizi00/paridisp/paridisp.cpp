using namespace std;
#include <iostream>

int main ()
{
    int n;
    int r;
    cout << "inserire il numero";
    cin >> n;
    r = n%2;
    if (r == 0)
    {
        cout << "il numero è pari";
    }
    if (r != 0)
    {
        cout << "il numero è dispari";
    }
return 0;
}
