#include "readoff.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include "putvoxel.h"
#include "figurageometrica.h"
#include "sculptor.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"

ReadOff::ReadOff()
{

}

void ReadOff::read(std::vector<FiguraGeometrica *> &desenho, Sculptor *&t, const char *filename){
    fin.open(filename);
    if(!fin.is_open()){
        std::cout <<"Arquivo não aberto" << std::endl;
        exit(1);
    }

    std::cout <<"Arquivo aberto" << std::endl;
    std::cout << std::endl;

    while(std::getline(fin,line,'\n')){
        std::stringstream linha(line);

        std::vector<std::string> v;
        while(linha.good()){
            linha >> palavra;
            v.push_back(palavra);
        }

        if(v[0] == "dim")
            t = new Sculptor(v);

        if( v[0] == "putvoxel")
            desenho.push_back(new PutVoxel(v));

        if(v[0] == "cutvoxel")
            desenho.push_back(new CutVoxel(v));

        if(v[0] == "putbox")
            desenho.push_back(new PutBox(v));

        if(v[0] == "cutbox")
            desenho.push_back(new CutBox(v));

        if(v[0] == "putsphere")
            desenho.push_back(new PutSphere(v));

        if(v[0] == "cutsphere")
            desenho.push_back(new CutSphere(v));

        if(v[0] == "putellipsoid")
            desenho.push_back(new PutEllipsoid(v));

        if(v[0] == "cutellipsoid")
            desenho.push_back(new CutEllipsoid(v));


    }

    fin.close();
    std::cout << "leu" << std::endl;
}

ReadOff::~ReadOff()
{

}
