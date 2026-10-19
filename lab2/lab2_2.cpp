#include <iostream>
using namespace std;

int main()
{
    int m, n;
    
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Before res: m:" << m << ", n: " << n << endl;
    cout << "Res: " << --m-n-- << endl;
    cout << "After res: m:" << m << ", n: " << n;
    
}