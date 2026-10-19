#include <iostream>
#include <clocale>
using namespace std; 

int main() {

    double a, b, c, x;
    std::cout << "Input a, b, c, x: ";
    std::cin >> a >> b >> c >> x;

    double F;
    bool error = false;

    if (c < 0 && x != 0) {
        F = (-a * x - c);
    } 
    else if (c > 0 && x == 0) {
        F = (x - a) / -c;
    } 
    else {
        if (c - a == 0) {
            error = true;
        } else {
            F = (b * x) / (c - a);
        }
    }

    if (error) {
        cout << "Zero div error.";
    } else {
        cout << "Res F = " << F;
    }

    return 0;
}
