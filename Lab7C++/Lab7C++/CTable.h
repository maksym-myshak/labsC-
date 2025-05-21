#pragma once
#include "CFurniture.h"

class CTable : public virtual CFurniture {
private:
    int length; 
    int width;  
    int height; 

public:
    CTable(const string& material, int length, int width, int height);
    void set_dimensions(int length, int width, int height);
    void get_dimensions(int& length, int& width, int& height) const;

    void increase_size(int length, int width, int height);
    void display_info() const override;
};