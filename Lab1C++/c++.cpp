#include <iostream>
#include <limits>

using namespace std;

long func(long* arr, int length);
float func(float* arr, int length);

int main() {
    int length;

    cout << "Enter length of long array: ";
    cin >> length;

    long* arr_long = new long[length];

    cout << "Enter elements of long array: ";
    for (int i = 0; i < length; i++) {
        cin >> arr_long[i];
    }

    long min_elem_long = func(arr_long, length);
    if (min_elem_long != std::numeric_limits<long>::max()) {
        cout << "Minimum even element in long array: " << min_elem_long << endl;
    }
    else {
        cout << "No even elements in long array." << endl;
    }

    delete[] arr_long;

    cout << "Enter length of float array: ";
    cin >> length;

    float* arr_float = new float[length];

    cout << "Enter elements of float array: ";
    for (int i = 0; i < length; i++) {
        cin >> arr_float[i];
    }

    float min_elem_float = func(arr_float, length);
    if (min_elem_float != std::numeric_limits<float>::max()) {
        cout << "Minimum even element in float array: " << min_elem_float << endl;
    }
    else {
        cout << "No even elements in float array." << endl;
    }

    delete[] arr_float;

    return 0;
}

long func(long* arr, int length) {
    long min_elem = std::numeric_limits<long>::max(); 
    for (int i = 0; i < length; ++i) {
        if (arr[i] % 2 == 0 && arr[i] < min_elem) {
            min_elem = arr[i];
        }
    }
    return min_elem;
}

float func(float* arr, int length) {
    float min_elem = std::numeric_limits<float>::max(); 
    for (int i = 0; i < length; ++i) {
        if (static_cast<int>(arr[i]) % 2 == 0 && arr[i] < min_elem) { 
            min_elem = arr[i];
        }
    }
    return min_elem;
}
