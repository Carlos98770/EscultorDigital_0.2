#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"

class CutBox : public FiguraGeometrica{
private:
    int x,x1,y,y1,z,z1;
public:
    CutBox();
    virtual ~CutBox();
    void draw(Sculptor &t);
    CutBox(std::vector <std::string> v);
};

#endif // CUTBOX_H
