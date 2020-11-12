using namespace std;
#include <iostream>

int main ()
{
    double r;
    const double pigreco = 3.14;
    cout << "inserire il raggio";
    cin >> r;
    double d = 2*r;
    double c = 2*pigreco*r;
    double a = pigreco*r*r;
    cout << "il diametro è " << d << ", la circonferenza è " << c << ", l'area del cerchio è " << a;
return 0;
}
