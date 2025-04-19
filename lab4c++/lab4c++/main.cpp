
#include <iostream>
#include <string>
#include "GasStation.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    CGasStation station(2000, 2000, 1500, 1000, 1000, 1000, 750, 500, 60);

    while (true) {
        cout << endl;
        cout << "          Gas Station" << endl;
        cout << "1 - ??????????? ???????? i???????i? ??? ????????" << endl;
        cout << "2 - ?????????? ??'?? ?????????? ??????" << endl;
        cout << "3 - ??????????? ??'?? ?????????? ??????" << endl;
        cout << "4 - ?????????? ??'?? ???????" << endl;
        cout << "5 - ??????????? ??'?? ???????" << endl;
        cout << "6 - ?????????? ??'?? LPG" << endl;
        cout << "7 - ??????????? ??'?? LPG" << endl;
        cout << "8 - ?????????? ??'?? ????????????i?" << endl;
        cout << "9 - ??????????? ??'?? ????????????i?" << endl;
        cout << "10 - ?????????? ????? ?????????? ??????" << endl;
        cout << "11 - ??????????? ????? ?????????? ??????" << endl;
        cout << "12 - ?????????? ????? ???????" << endl;
        cout << "13 - ??????????? ????? ???????" << endl;
        cout << "14 - ?????????? ????? LPG" << endl;
        cout << "15 - ??????????? ????? LPG" << endl;
        cout << "16 - ?????????? ????? ????????????i?" << endl;
        cout << "17 - ??????????? ????? ????????????i?" << endl;
        cout << "18 - ?????????? ????????? ?????i??? ???????????? ?i???????" << endl;
        cout << "19 - ??????????? ????????? ?????i??? ???????????? ?i???????" << endl;
        cout << "20 - ??i?????? ????? ?????????? ??????" << endl;
        cout << "21 - ??i?????? ????? ???????" << endl;
        cout << "22 - ??i?????? ????? LPG" << endl;
        cout << "23 - ??i?????? ????? ????????????i?" << endl;
        cout << "24 - ???????? ????????? ???????" << endl;
        cout << "25 - ???????? ????????" << endl;
        cout << "26 - ???????? LPG" << endl;
        cout << "27 - ???????? ????????????i??" << endl;
        cout << "0 - ???i?" << endl;
        cout << "????i?? ???i?: ";

        int choice;
        cin >> choice;
        switch (choice) {
        case 1: station.get_info(); break;
        case 2: {
            double volume;
            cout << "????i?? ??'?? ?????????? ??????: ";
            cin >> volume;
            station.setDieselVolume(volume);
            break;
        }
        case 3: cout << "??'?? ?????????? ??????: " << station.getDieselVolume() << " ?" << endl; break;
        case 4: {
            double volume;
            cout << "????i?? ??'?? ???????: ";
            cin >> volume;
            station.setGasolineVolume(volume);
            break;
        }
        case 5: cout << "??'?? ???????: " << station.getGasolineVolume() << " ?" << endl; break;
        case 6: {
            double volume;
            cout << "????i?? ??'?? LPG: ";
            cin >> volume;
            station.setLpgVolume(volume);
            break;
        }
        case 7: cout << "??'?? LPG: " << station.getLpgVolume() << " ?" << endl; break;
        case 8: {
            double volume;
            cout << "????i?? ??'?? ????????????i?: ";
            cin >> volume;
            station.setElectricVolume(volume);
            break;
        }
        case 9: cout << "??'?? ????????????i?: " << station.getElectricVolume() << " ???-???" << endl; break;
        case 10: {
            double reserve;
            cout << "????i?? ????? ?????????? ??????: ";
            cin >> reserve;
            station.setDieselReserve(reserve);
            break;
        }
        case 11: cout << "????? ?????????? ??????: " << station.getDieselReserve() << " ?" << endl; break;
        case 12: {
            double reserve;
            cout << "????i?? ????? ???????: ";
            cin >> reserve;
            station.setGasolineReserve(reserve);
            break;
        }
        case 13: cout << "????? ???????: " << station.getGasolineReserve() << " ?" << endl; break;
        case 14: {
            double reserve;
            cout << "????i?? ????? LPG: ";
            cin >> reserve;
            station.setLpgReserve(reserve);
            break;
        }
        case 15: cout << "????? LPG: " << station.getLpgReserve() << " ?" << endl; break;
        case 16: {
            double reserve;
            cout << "????i?? ????? ????????????i?: ";
            cin >> reserve;
            station.setElectricReserve(reserve);
            break;
        }
        case 17: cout << "????? ????????????i?: " << station.getElectricReserve() << " ???-???" << endl; break;
        case 18: {
            double capacity;
            cout << "????i?? ????????? ?????i??? ???????????? ?i???????: ";
            cin >> capacity;
            station.setNozzleCapacity(capacity);
            break;
        }
        case 19: cout << "????????? ?????i??? ???????????? ?i???????: " << station.getNozzleCapacity() << " ?/???" << endl; break;
        case 20: {
            double amount;
            cout << "????i?? ?i???i??? ?????????? ?????? ??? ??i???????: ";
            cin >> amount;
            station.increaseDieselReserve(amount);
            break;
        }
        case 21: {
            double amount;
            cout << "????i?? ?i???i??? ??????? ??? ??i???????: ";
            cin >> amount;
            station.increaseGasolineReserve(amount);
            break;
        }
        case 22: {
            double amount;
            cout << "????i?? ?i???i??? LPG ??? ??i???????: ";
            cin >> amount;
            station.increaseLpgReserve(amount);
            break;
        }
        case 23: {
            double amount;
            cout << "????i?? ?i???i??? ????????????i? ??? ??i???????: ";
            cin >> amount;
            station.increaseElectricReserve(amount);
            break;
        }
        case 24: {
            double amount;
            cout << "????i?? ?i???i??? ?????????? ?????? ??? ????????: ";
            cin >> amount;
            double time = station.refuelDiesel(amount);
            if (time != -1) {
                cout << "??? ????????: " << time << " ???" << endl;
            }
            else {
                cout << "????????? ????????? ????????? ???????!" << endl;
            }
            break;
        }
        case 25: {
            double amount;
            cout << "????i?? ?i???i??? ??????? ??? ????????: ";
            cin >> amount;
            double time = station.refuelGasoline(amount);
            if (time != -1) {
                cout << "??? ????????: " << time << " ???" << endl;
            }
            else {
                cout << "????????? ????????? ????????!" << endl;
            }
            break;
        }
        case 26: {
            double amount;
            cout << "????i?? ?i???i??? LPG ??? ????????: ";
            cin >> amount;
            double time = station.refuelLpg(amount);
            if (time != -1) {
                cout << "??? ????????: " << time << " ???" << endl;
            }
            else {
                cout << "????????? ????????? LPG!" << endl;
            }
            break;
        }
        case 27: {
            double amount;
            cout << "????i?? ??????? ???????????? ??? ????????: ";
            cin >> amount;
            double time = station.refuelElectric(amount);
            if (time != -1) {
                cout << "??? ????????: " << time << " ???" << endl;
            }
            else {
                cout << "????????? ????????? ?????????????!" << endl;
            }
            break;
        }
        case 0: return 0;
        default: cout << "???i???? ???i?!" << endl; break;
        }
    }

    return 0;
}