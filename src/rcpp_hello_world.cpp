
#include <Rcpp.h>

extern "C" {
#include "treelite/c_api.h"
}

// [[Rcpp::export]]
int treelite_test() {
  int x;
  ModelHandle Lmodel;
  x = TreeliteLoadLightGBMModel("/home/rstudio/tReelite/LightGBM_model.txt", &Lmodel);
  return x;
}