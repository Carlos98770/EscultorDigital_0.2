#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

class PutSphere : public FiguraGeometrica{
private:
    int xcenter,ycenter,zcenter,radius;
    float r,g,b,a;
public:
    PutSphere();
    virtual ~PutSphere();
    void draw(Sculptor &t);
    PutSphere(std::vector<std::string> v);
};

#endif // PUTSPHERE_H
