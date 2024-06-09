#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

class CutSphere : public FiguraGeometrica{
private:
    int xcenter,ycenter,zcenter,radius;
public:
    CutSphere();
    virtual ~CutSphere();
    void draw(Sculptor &t);
    CutSphere(std::vector<std::string> v);
};

#endif // CUTSPHERE_H
