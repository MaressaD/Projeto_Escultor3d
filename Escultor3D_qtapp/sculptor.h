#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "voxel.h"

class Sculptor {
private:
    /**
   * @brief v declara a matriz tridimensional do tipo Voxel
   */
  Voxel ***v;
  /**
   * @brief nx declara a dimensão no eixo x
   * ny declara a dimensão no eixo y
   * nz declara a dimensão no eixo z
   */

  int nx,ny,nz;
  /**
   * @brief r,g,b e a declara as cores atuais do desenho, assim como sua transparência "a"
   */
  float r,g,b,a;
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float r, float g, float b, float a);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void writeOFF(const char* filename);

};

#endif // SCULPTOR_H

