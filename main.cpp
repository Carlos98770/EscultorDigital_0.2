#include <iostream>
#include "figurageometrica.h"
#include "putvoxel.h"
#include "sculptor.h"
#include "readoff.h"

int main(void){
    std::vector <FiguraGeometrica*> desenho;
    Sculptor *t;
    ReadOff aux;

    aux.read(desenho,t,"/home/eduardo/Documentos/Qt_projects/arqDesenho/teste.txt");


    for(int i = 0; i < int(desenho.size());i++)
        desenho[i]->draw(*t);

    t->writeOFF("/home/eduardo/Documentos/Qt_projects/arqDesenho/desenho.off");



    std::cout << desenho.size();

    for(int i = 0; i < int(desenho.size()); i++)
        delete desenho[i];



    delete t;
    return 0;




}
