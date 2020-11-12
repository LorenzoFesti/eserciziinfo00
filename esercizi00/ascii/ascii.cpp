using namespace std;
#include <iostream>

int i;
char x;
int y;
char z;
int a;
char p;
int main ()
{

    for (a=48; a<=57; a++)
    {
        p = a;
        cout << "CHAR: " << p << "\t ASCII: " << a << "\n";
    }

    for (i = 65; i <= 90; i++)
    {
        x = i;
        cout << "CHAR: " << x << "\t ASCII: " << i << "\n";
    }

    for (y=97; y<=122; y++)
    {
        z = y;
        cout << "CHAR: " << z << "\t ASCII: " << y << "\n";
    }

return 0;
}
