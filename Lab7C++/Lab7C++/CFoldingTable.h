#pragma once
#include "CTable.h"
#include "CCommode.h"

class CFoldingTable : public CTable, public CCommode {
private:
    bool isFoldable; 

public:
    CFoldingTable(const string& material, int length, int width, int height, int numberOfDrawers, bool foldable);
    void increase_size(int length, int width, int height);
    void decrease_size(int length, int width, int height);
    void display_info() const override;
};