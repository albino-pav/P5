#ifndef FLANGING_H
#define FLANGING_H

#include <vector>
#include <string>
#include "effect.h"

namespace upc {
  class Flanging: public upc::Effect {
    private:
      long double fase_mod, inc_fase_mod;
      long double fase_sen, inc_fase_sen;
	  std::vector<float> buffer;
	  float	fm, I;
    float A_flang, g, M_o;
    public:
      Flanging(const std::string &param = "");
	  void operator()(std::vector<float> &x);
	  void command(unsigned int);
  };
}

#endif
