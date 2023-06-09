# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Compute the full svd decomposition of a real matrix
#'
#' @name svdArma
#' @description Compute the full svd decomposition of a real matrix.
#'
#' @param C matrix of real numbers.
#'
#' @return list containing the matrix of left singular vectors,
#' the matrix of right singular vectors and the vector of nonzero
#' singular values.
#'
svdArma <- function(C) {
    .Call(`_svdArma_svdArma`, C)
}

