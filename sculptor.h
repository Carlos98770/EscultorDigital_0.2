#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <vector>
#include <string>

struct Voxel {
  float r,g,b; // Cores
  float a; // Trasnparencia
  bool show; // Incluido ou nao
};

class Sculptor{

private:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:

  int Nvertices = 0;
  int Nfaces = 0;
  Sculptor(std::vector<std::string> vt);
  virtual ~Sculptor();
  void setColor(float r, float g, float b, float a);
  void writeOFF(const char* filename);
  int getNx() const;
  int getNy() const;
  int getNz() const;
  void putVoxel(int x,int y,int z);
  void cutVoxel(int x, int y,int z);

};

#endif // SCULPTOR_H
