#ifndef VOXEL_H
#define VOXEL_H

struct Voxel {
    /**
   * @brief
   *  r define a intensidade do vermelho (com valores de 0 a 1)
   *  g define a intensidade do verde (com valores de 0 a 1)
   *  b define a intensidade do azul (com valores de 0 a 1)
   */

    float r,g,b;
    /**
     * @brief a
     */
    float a;
    /**
   * @brief isOn define a intensidade da transparência (com valores de 0 a 1)
   */
  bool isOn;

};

#endif // VOXEL_H
