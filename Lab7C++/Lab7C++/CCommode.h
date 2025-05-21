#pragma once
#include "CFurniture.h"

class CCommode : public virtual CFurniture {
private:
    int numberOfDrawers;

public:
    CCommode(const string& material, int numberOfDrawers);
    void set_number_of_drawers(int drawers);
    int get_number_of_drawers() const;

    void display_info() const override;
};