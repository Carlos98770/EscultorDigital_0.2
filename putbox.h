#ifndef PUTBOX_H
#define PUTBOX_H
#include "sculptor.h"
#include "figurageometrica.h"
#include <string>
#include <vector>

class PutBox : public FiguraGeometrica{
private:
    int x,x1,y,y1,z,z1;
    float r,g,b,a;
public:
    PutBox();
    virtual ~PutBox();
    void draw(Sculptor &t);
    PutBox(std::vector <std::string> v);
};

#endif // PUTBOX_H
