#include "Television.h"
#include <iostream>

using namespace std;

Television::Television(string type, const string& brand, int power, const string& color,
    int screen_size, const string& resolution) {
    this->type = type;
    this->brand = new string(brand);
    this->power = power;
    this->color = new string(color);
    this->screen_size = screen_size;
    this->resolution = new string(resolution);
}

Television::Television(const Television& other) : Device(other) {
    screen_size = other.screen_size;
    resolution = new string(*other.resolution);
}

Television& Television::operator=(const Television& other) {
    if (this == &other) return *this;

    delete resolution;

    Device::operator=(other);
    screen_size = other.screen_size;
    resolution = new string(*other.resolution);

    return *this;
}

void Television::set_screen_size(int screen_size) {
    this->screen_size = screen_size;
}

int Television::get_screen_size() {
    return screen_size;
}

void Television::set_resolution(const string& resolution) {
    *(this->resolution) = resolution;
}

string Television::get_resolution() {
    return *resolution;
}

void Television::process_data() {
    this->screen_size += 5;  
    cout << "Screen size increased by 5 inches" << endl;
}

void Television::print_info() {
    cout << "Type: " << type << endl
        << "Brand: " << *brand << endl
        << "Power: " << power << "W" << endl
        << "Color: " << *color << endl
        << "Screen Size: " << screen_size << " inches" << endl
        << "Resolution: " << *resolution << endl;
}

Television::~Television() {
    delete resolution;
}