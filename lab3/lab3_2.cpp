#include <iostream>
#include <clocale>
using namespace std;

int main() {
    int year;
    cout << "Input year: from 1950 to 2020: " << endl;
    cin >> year;

    if (year < 1950 || year > 2020) {
        cout << "Error. Input from 1950 to 2020!!!" << endl;
        return 1;
    }


    int animal_number = (year - 1950) % 12;
    if (animal_number < 0) {
        animal_number += 12;
    }
    
    animal_number += 1; 

    cout << "Year " << year << " - ";
    
    switch (animal_number) {
        case 1:  cout << "миша";   break;
        case 2:  cout << "бик";    break;
        case 3:  :cout << "тигр";   break;
        case 4:  cout << "кіт";    break;
        case 5:  cout << "дракон"; break;
        case 6:  cout << "змія";   break;
        case 7:  cout << "кінь";   break;
        case 8:  cout << "вівця";  break;
        case 9:  cout << "мавпа";  break;
        case 10: cout << "півень"; break;
        case 11: cout << "собака"; break;
        case 12: cout << "кабан";  break;
    }


    return 0;
}
