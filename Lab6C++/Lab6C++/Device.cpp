#include "Device.h"
#include <iostream>

using namespace std;

Device::Device(string type, const string& brand, int power, const string& color) {
    this->type = type;
    this->brand = new string(brand);
    this->power = power;
    this->color = new string(color);
}

Device::Device() {
    type = "";
    brand = new string("");
    power = 0;
    color = new string("");
}

Device::Device(const Device& other) {
    type = other.type;
    brand = new string(*other.brand);
    power = other.power;
    color = new string(*other.color);
}

Device& Device::operator=(const Device& other) {
    if (this == &other) return *this;

    delete brand;
    delete color;

    type = other.type;
    brand = new string(*other.brand);
    power = other.power;
    color = new string(*other.color);

    return *this;
}

void Device::set_brand(const string& brand) {
    *(this->brand) = brand;
}

string Device::get_brand() {
    return *brand;
}

void Device::set_power(int power) {
    this->power = power;
}

int Device::get_power() {
    return power;
}

void Device::set_color(const string& color) {
    *(this->color) = color;
}

string Device::get_color() {
    return *color;
}

Device::~Device() {
    delete brand;
    delete color;
}