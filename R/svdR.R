## Author: Alberto Quaini

#' Compute the full svd decomposition of a real matrix
#'
#' @name svdR
#' @description Compute the full svd decomposition of a real matrix.
#'
#' @param C matrix of real numbers.
#'
#' @return list containing the matrix of left singular vectors,
#' the matrix of right singular vectors and the vector of nonzero
#' singular values.
#'
#' @export
svdR = function(C) {

  return(svdArma(C))

}

