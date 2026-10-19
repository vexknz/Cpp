#include <iostream>
using namespace std;

int main()
{
  double a, b, c;
  cout << "Input (a, b, c): ";
  cin >> a >> b >> c;
    
  double area = 2 * (a * b + b * c + a * c);
  cout << "Area: " << area << std::endl;
    
}