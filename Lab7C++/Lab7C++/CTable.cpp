#include "CTable.h"

CTable::CTable(const string& material, int length, int width, int height)
    : CFurniture(material), length(length), width(width), height(height) {
}

void CTable::set_dimensions(int length, int width, int height) {
    this->length = length;
    this->width = width;
    this->height = height;
}

void CTable::get_dimensions(int& length, int& width, int& height) const {
    length = this->length;
    width = this->width;
    height = this->height;
}

void CTable::increase_size(int length, int width, int height) {
    this->length += length;
    this->width += width;
    this->height += height;
    cout << "������ ����� ������� ��: " << this->length << "x" << this->width << "x" << this->height << " ��." << endl;
}

void CTable::display_info() const {
    CFurniture::display_info();
    cout << "������ �����: " << length << "x" << width << "x" << height << " ��." << endl;
}