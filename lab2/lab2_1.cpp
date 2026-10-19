#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, ch, zn;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter b number: ";
    cin >> b;
    
    ch = pow((a+b), 4) - (pow(a, 4) + 4 * (pow(a, 3) * b));
    zn = 6 * a * a * b * b + 4 * a * pow(b, 3) + pow(b, 4);
    
    cout<< "Res: " << ch / zn << endl;

    return 0;
}