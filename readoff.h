#ifndef READOFF_H
#define READOFF_H
#include "figurageometrica.h"
#include "sculptor.h"
#include <vector>
#include <string>
#include <fstream>


class ReadOff{
private:
    std::ifstream fin;
    std::string line;
    std::string palavra;
public:
    ReadOff();
    void read(std::vector<FiguraGeometrica*> &desenho, Sculptor *&t, const char *filename);
    ~ReadOff();
};

#endif // READOFF_H
