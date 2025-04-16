#include <iostream>

using namespace std;

void func(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) { 
            for (int j = 0; j < n; j++) {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    setlocale(LC_ALL, "uk_UA"); 
    int n;

    cout << "¬ведiть розмiр матрицi: ";
    cin >> n;
    cout << "-----------------------------------------------------" << endl;


    
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = 1; 
        }
    }
    
    func(arr, n);
   
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
