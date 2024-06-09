#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include <vector>
#include <string>
#include "figurageometrica.h"
#include "sculptor.h"

class PutVoxel: public FiguraGeometrica{
private:
    int x,y,z;
    float r,g,b,a;
public:
    PutVoxel();
    virtual ~PutVoxel();
    void draw(Sculptor &t);
    PutVoxel(std::vector <std::string> v);
};

#endif // PUTVOXEL_H
