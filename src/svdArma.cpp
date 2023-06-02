// Author: Alberto Quaini

#include "svdArma.h"

// Compute the full svd decomposition of a matrix
Rcpp::List svdArma(const arma::mat C) {

  const unsigned int n_cols = C.n_cols;
  const unsigned int n_rows = C.n_rows;

  arma::mat left(n_rows, n_rows);
  arma::mat right(n_cols, n_cols);
  arma::vec sv(std::min(n_rows, n_cols));

  arma::svd(left, sv, right, C);

  return Rcpp::List::create(
    Rcpp::Named("left") = left,
    Rcpp::Named("right") = right,
    Rcpp::Named("sv") = sv
  );

}
