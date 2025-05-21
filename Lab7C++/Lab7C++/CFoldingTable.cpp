#include "CFoldingTable.h"

CFoldingTable::CFoldingTable(const string& material, int length, int width, int height, int numberOfDrawers, bool foldable)
    : CFurniture(material), CTable(material, length, width, height), CCommode(material, numberOfDrawers), isFoldable(foldable) {
}

void CFoldingTable::increase_size(int length, int width, int height) {
    CTable::increase_size(length, width, height);
}

void CFoldingTable::decrease_size(int length, int width, int height) {
    int newLength, newWidth, newHeight;
    CTable::get_dimensions(newLength, newWidth, newHeight);
    newLength -= length;
    newWidth -= width;
    newHeight -= height;
    CTable::set_dimensions(newLength, newWidth, newHeight);
    cout << "Розміри розкладного столу зменшені до: " << newLength << "x" << newWidth << "x" << newHeight << " см." << endl;
}

void CFoldingTable::display_info() const {
    CTable::display_info();
    cout << "Кількість шухляд: " << CCommode::get_number_of_drawers() << endl;
    cout << "Чи розкладний стіл: " << (isFoldable ? "Так" : "Ні") << endl;
}