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


    
    cout << "I�������i� ��� ����� ��������:" << endl;
    cout << station1;

   
    cout << "\n����i�� ���i ���i ��� ����� ��������:" << endl;
    cin >> station1;

    cout << "\n�������� i�������i� ��� ����� ��������:" << endl;
    cout << station1;

    
    CGasStation combinedStation = station1 + station2;
    cout << "\n��������� ��������� ���� ��������:" << endl;
    cout << combinedStation;

    
    cout << "\n������ ����� �������� ����� ������i�� --:" << endl;
    cout << station1;
    --station1;
    cout << "\n������ ����� �������� �i��� ������i� --:" << endl;
    cout << station1;

    
    if (station1 != station2) {
        cout << "\n�������� �i��i��������!" << endl;
    }
    else {
        cout << "\n�������� �������i!" << endl;
    }

    
    try {
        cout << "\n������ �� ������� ����� �������� �� i������� [0] (������): "
            << station1[0] << " �" << endl;
        cout << "������ �� ������� ����� �������� �� i������� [3] (������������i�): "
            << station1[3] << " ���-���" << endl;
    }
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}