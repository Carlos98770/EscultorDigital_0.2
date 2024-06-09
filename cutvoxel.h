#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include <string>
#include <vector>
class CutVoxel : public FiguraGeometrica{
private:
    int x,y,z;
public:
    CutVoxel();
    virtual ~CutVoxel();
    void draw(Sculptor &t);
    CutVoxel(std::vector <std::string> v);
};

#endif // CUTVOXEL_H
