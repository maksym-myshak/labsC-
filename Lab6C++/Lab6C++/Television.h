#pragma once
#include "Device.h"

class Television : public Device {
private:
    int screen_size;
    string* resolution;

public:
    Television(string type, const string& brand, int power, const string& color,
        int screen_size, const string& resolution);
    Television(const Television& other);  
    Television& operator=(const Television& other);  

    void set_screen_size(int screen_size);
    int get_screen_size();

    void set_resolution(const string& resolution);
    string get_resolution();

    void process_data() override; 
    void print_info() override;    

    virtual ~Television();  
};