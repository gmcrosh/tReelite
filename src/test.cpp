
#include <Rcpp.h>

extern "C" {
#include "treelite/c_api.h"
}


//' Test function
//' 
//' @param path Path to lightGBM model object
//'
//' @return Int
//' @export
//'
//' @examples
//' treelite_test('LightGBM_model.txt')
// [[Rcpp::export]]
int treelite_test(Rcpp::String path) {
  int x;
  std::string cpath;
  cpath = std::string(path);
  ModelHandle Lmodel;
  x = TreeliteLoadLightGBMModel(cpath.c_str(), &Lmodel);
  return x;
}