#include <iostream>
#include <string>
#include "GasStation.h"

// +, --, !=, []

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
  

    CGasStation station1(1000, 1000, 1000, 1000, 500, 500, 500, 500, 50);
    CGasStation station2;

    station2 = station1; 


    
    cout << "Iнформацiя про першу заправку:" << endl;
    cout << station1;

   
    cout << "\nВведiть новi данi для першої заправки:" << endl;
    cin >> station1;

    cout << "\nОновлена iнформацiя про першу заправку:" << endl;
    cout << station1;

    
    CGasStation combinedStation = station1 + station2;
    cout << "\nРезультат додавання двох заправок:" << endl;
    cout << combinedStation;

    
    cout << "\nЗапаси першої заправки перед операцiєю --:" << endl;
    cout << station1;
    --station1;
    cout << "\nЗапаси першої заправки пiсля операцiї --:" << endl;
    cout << station1;

    
    if (station1 != station2) {
        cout << "\nЗаправки вiдрiзняються!" << endl;
    }
    else {
        cout << "\nЗаправки однаковi!" << endl;
    }

    
    try {
        cout << "\nДоступ до резерву першої заправки за iндексом [0] (дизель): "
            << station1[0] << " л" << endl;
        cout << "Доступ до резерву першої заправки за iндексом [3] (електроенергiя): "
            << station1[3] << " кВт-год" << endl;
    }
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}