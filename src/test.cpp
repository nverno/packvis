#include <Rcpp.h>
using namespace Rcpp;
// https://github.com/RcppCore/rcpp-gallery/blob/gh-pages/src/2013-01-10-simple-lambda-func-c++11.Rmd

// Enable C++11
// [[Rcpp::plugins("cpp11")]]

// [[Rcpp::export]]
std::vector<double> cpp11test(const std::vector<double>& x) {
  std::vector<double> y(x.size());
  std::transform(x.begin(), x.end(), y.begin(), [](double x) { return x*x; } );
  return y;
}

