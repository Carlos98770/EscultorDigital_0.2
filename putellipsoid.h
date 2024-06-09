#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

class PutEllipsoid : public FiguraGeometrica{
private:
    int xcenter,ycenter,zcenter,raiox,raioy,raioz;
    float r,g,b,a;
public:
    PutEllipsoid();
    virtual ~PutEllipsoid();
    void draw(Sculptor &t);
    PutEllipsoid(std::vector< std::string> v);
};

#endif // PUTELLIPSOID_H
