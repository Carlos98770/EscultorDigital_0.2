#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

class CutEllipsoid : public FiguraGeometrica{
private:
    int xcenter,ycenter,zcenter,raiox,raioy,raioz;
public:
    CutEllipsoid();
    virtual ~CutEllipsoid();
    void draw(Sculptor &t);
    CutEllipsoid(std::vector< std::string> v);
};

#endif // CUTELLIPSOID_H

