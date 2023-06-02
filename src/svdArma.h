// Author: Alberto Quaini

#ifndef FACTOR_MODEL_STATISTICS_H
#define FACTOR_MODEL_STATISTICS_H

#include <RcppArmadillo.h>

//' Compute the full svd decomposition of a real matrix
//'
//' @name svdArma
//' @description Compute the full svd decomposition of a real matrix.
//'
//' @param C matrix of real numbers.
//'
//' @return list containing the matrix of left singular vectors,
//' the matrix of right singular vectors and the vector of nonzero
//' singular values.
//'
// [[Rcpp::export]]
Rcpp::List svdArma(const arma::mat C);

#endif
