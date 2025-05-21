#include <iostream>
#include <windows.h>
#include "CFoldingTable.h"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    CFoldingTable table("Äóá", 200, 100, 75, 3, true);

    table.display_info();

    table.increase_size(20, 10, 5);
    table.decrease_size(10, 5, 2);

    CFurniture* pFurniture = &table; 
    pFurniture->display_info();

    return 0;
}