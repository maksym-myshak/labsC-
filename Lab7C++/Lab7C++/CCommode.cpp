#include "CCommode.h"

CCommode::CCommode(const string& material, int numberOfDrawers)
    : CFurniture(material), numberOfDrawers(numberOfDrawers) {
}

void CCommode::set_number_of_drawers(int drawers) {
    numberOfDrawers = drawers;
}

int CCommode::get_number_of_drawers() const {
    return numberOfDrawers;
}

void CCommode::display_info() const {
    CFurniture::display_info();
    cout << "Кількість шухляд: " << numberOfDrawers << endl;
}