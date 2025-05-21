#include "CFurniture.h"

CFurniture::CFurniture(const string& mat) {
    material = new string(mat);
}

CFurniture::CFurniture(const CFurniture& other) {
    material = new string(*other.material);
}

CFurniture& CFurniture::operator=(const CFurniture& other) {
    if (this != &other) {
        delete material;
        material = new string(*other.material);
    }
    return *this;
}

CFurniture::~CFurniture() {
    delete material;
}

void CFurniture::set_material(const string& mat) {
    *material = mat;
}

string CFurniture::get_material() const {
    return *material;
}

void CFurniture::display_info() const {
    cout << "Матеріал: " << *material << endl;
}