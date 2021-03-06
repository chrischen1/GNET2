// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// build_module
NumericMatrix build_module(const NumericMatrix X, const NumericMatrix Y, const int max_depth, const double cor_cutoff, const int min_divide_size);
RcppExport SEXP _GNET2_build_module(SEXP XSEXP, SEXP YSEXP, SEXP max_depthSEXP, SEXP cor_cutoffSEXP, SEXP min_divide_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< const double >::type cor_cutoff(cor_cutoffSEXP);
    Rcpp::traits::input_parameter< const int >::type min_divide_size(min_divide_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(build_module(X, Y, max_depth, cor_cutoff, min_divide_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GNET2_build_module", (DL_FUNC) &_GNET2_build_module, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_GNET2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
