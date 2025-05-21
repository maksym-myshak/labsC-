#pragma once
#include <iostream>
#include <string>
using namespace std;

class CFurniture {
protected:
    string* material;  

public:
    CFurniture(const string& material);
    CFurniture(const CFurniture& other); 
    CFurniture& operator=(const CFurniture& other);
    virtual ~CFurniture(); 

    void set_material(const string& material); 
    string get_material() const;

    virtual void display_info() const;
};