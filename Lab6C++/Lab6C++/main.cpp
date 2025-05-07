#include "Television.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {

    Television tv("Television", "Samsung", 150, "Black", 55, "4K");
    int choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Display television information\n";
        cout << "2. Change television information\n";
        cout << "3. Modify one parameter\n";
        cout << "4. Increase screen size by 5 inches\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            tv.print_info();
            break;

        case 2:
        {
            string brand, color, resolution;
            int power, screen_size;

            cout << "Enter new brand: ";
            cin.ignore();
            getline(cin, brand);

            cout << "Enter new color: ";
            getline(cin, color);

            cout << "Enter new power: ";
            cin >> power;

            cout << "Enter new screen size: ";
            cin >> screen_size;

            cin.ignore();
            cout << "Enter new resolution: ";
            getline(cin, resolution);

            tv.set_brand(brand);
            tv.set_color(color);
            tv.set_power(power);
            tv.set_screen_size(screen_size);
            tv.set_resolution(resolution);
        }
        break;

        case 3:
        {
            int param_choice;
            cout << "Which parameter do you want to change?\n";
            cout << "1. Brand\n";
            cout << "2. Power\n";
            cout << "3. Color\n";
            cout << "4. Screen Size\n";
            cout << "5. Resolution\n";
            cout << "Choice: ";
            cin >> param_choice;

            if (param_choice == 1) {
                string brand;
                cout << "Enter new brand: ";
                cin.ignore();
                getline(cin, brand);
                tv.set_brand(brand);
            }
            else if (param_choice == 2) {
                int power;
                cout << "Enter new power: ";
                cin >> power;
                tv.set_power(power);
            }
            else if (param_choice == 3) {
                string color;
                cout << "Enter new color: ";
                cin.ignore();
                getline(cin, color);
                tv.set_color(color);
            }
            else if (param_choice == 4) {
                int screen_size;
                cout << "Enter new screen size: ";
                cin >> screen_size;
                tv.set_screen_size(screen_size);
            }
            else if (param_choice == 5) {
                string resolution;
                cout << "Enter new resolution: ";
                cin.ignore();
                getline(cin, resolution);
                tv.set_resolution(resolution);
            }
            else {
                cout << "Invalid choice!\n";
            }
        }
        break;

        case 4:
            tv.process_data();
            break;

        case 0:
            return 0;

        default:
            cout << "Invalid choice!\n";
            break;
        }
    }
}