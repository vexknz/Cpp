#include <iostream>
#include <clocale>
using namespace std;

int main() {

    int a, b, c;
    cout << "Input a, b, c" << endl;
    cin >> a >> b >> c;
    
    int max_num = a;
    if (b > max_num) max_num = b;
    if (c > max_num) max_num = c;

    int min_num = a;
    if (b < min_num) min_num = b;
    if (c < min_num) min_num = c;

    double average = (max_num + min_num) / 2.0;

    cout << "Max num = " << max_num << endl;
    cout << "Min num = " << min_num << endl;
    cout << "AVG = " << average << endl;

    return 0;
}
