
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
  ModelHandle Lmodel;
  x = TreeliteLoadLightGBMModel(path, &Lmodel);
  return x;
}