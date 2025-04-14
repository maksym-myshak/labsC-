#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const long long GB = 1073741824;

long long func(long long volume, double percentage) {
    return static_cast<long long>(volume * (percentage / 100.0));
}

void showData() {
    ifstream infile("lab2.txt");
    if (!infile.is_open()) {
        cout << "File isn't open or doesn't exist." << endl;
        return;
    }

    cout << left << setw(15) << "Drive Name"
        << setw(15) << "Volume (GB)"
        << setw(25) << "Occupied Space (bytes)" << endl;
    cout << string(55, '-') << endl;

    string drive_name;
    double volume;
    long long occupied;

    while (infile >> drive_name >> volume >> occupied) {
        cout << left << setw(15) << drive_name
            << setw(15) << volume
            << setw(25) << occupied << endl;
    }
    infile.close();
}

void writeData() {
    ofstream file("lab2.txt", ios_base::out);
    if (!file.is_open()) {
        cout << "File isn't open." << endl;
        return;
    }

    string drive_name;
    double volume, percentage;

    cout << "Enter drive name: ";
    cin >> drive_name;

    cout << "Enter volume (GB): ";
    cin >> volume;

    cout << "Enter percentage of occupied space: ";
    cin >> percentage;

    long long volume_bytes = static_cast<long long>(volume * GB);
    long long occupied_bytes = func(volume_bytes, percentage);

    file << drive_name << " " << volume << " " << occupied_bytes << endl;
    file.close();
}

int main() {
    while (true) {
        cout << "Show data - press 1" << endl;
        cout << "Write data - press 2" << endl;
        cout << "Exit - press 3" << endl;

        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showData();
            break;
        case 2:
            writeData();
            break;
        case 3:
            cout << "Program is closing" << endl;
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    }
}


