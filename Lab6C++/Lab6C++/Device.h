#pragma once
#include <string>

using namespace std;

class Device {
protected:
    string type;
    string* brand;
    int power;
    string* color;

public:
    Device(string type, const string& brand, int power, const string& color);
    Device();  
    Device(const Device& other); 
    Device& operator=(const Device& other);  

    void set_brand(const string& brand);
    string get_brand();
    void set_power(int power);
    int get_power();
    void set_color(const string& color);
    string get_color();

    virtual void process_data() = 0;  
    virtual void print_info() = 0;    

    virtual ~Device();  
};