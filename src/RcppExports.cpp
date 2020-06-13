// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// adjusted_rand_score
double adjusted_rand_score(RObject x, RObject y);
RcppExport SEXP _genieclust_adjusted_rand_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(adjusted_rand_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rand_score
double rand_score(RObject x, RObject y);
RcppExport SEXP _genieclust_rand_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rand_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// adjusted_fm_score
double adjusted_fm_score(RObject x, RObject y);
RcppExport SEXP _genieclust_adjusted_fm_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(adjusted_fm_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// fm_score
double fm_score(RObject x, RObject y);
RcppExport SEXP _genieclust_fm_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(fm_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mi_score
double mi_score(RObject x, RObject y);
RcppExport SEXP _genieclust_mi_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mi_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// normalized_mi_score
double normalized_mi_score(RObject x, RObject y);
RcppExport SEXP _genieclust_normalized_mi_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(normalized_mi_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// adjusted_mi_score
double adjusted_mi_score(RObject x, RObject y);
RcppExport SEXP _genieclust_adjusted_mi_score(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(adjusted_mi_score(x, y));
    return rcpp_result_gen;
END_RCPP
}
// normalized_accuracy
double normalized_accuracy(RObject x, RObject y);
RcppExport SEXP _genieclust_normalized_accuracy(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(normalized_accuracy(x, y));
    return rcpp_result_gen;
END_RCPP
}
// pair_sets_index
double pair_sets_index(RObject x, RObject y);
RcppExport SEXP _genieclust_pair_sets_index(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(pair_sets_index(x, y));
    return rcpp_result_gen;
END_RCPP
}
// gclust_default
List gclust_default(NumericMatrix d, double gini_threshold, int M, String postprocess, String distance);
RcppExport SEXP _genieclust_gclust_default(SEXP dSEXP, SEXP gini_thresholdSEXP, SEXP MSEXP, SEXP postprocessSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gini_threshold(gini_thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< String >::type postprocess(postprocessSEXP);
    Rcpp::traits::input_parameter< String >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(gclust_default(d, gini_threshold, M, postprocess, distance));
    return rcpp_result_gen;
END_RCPP
}
// gclust_dist
List gclust_dist(NumericVector d, double gini_threshold, int M, String postprocess);
RcppExport SEXP _genieclust_gclust_dist(SEXP dSEXP, SEXP gini_thresholdSEXP, SEXP MSEXP, SEXP postprocessSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gini_threshold(gini_thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< String >::type postprocess(postprocessSEXP);
    rcpp_result_gen = Rcpp::wrap(gclust_dist(d, gini_threshold, M, postprocess));
    return rcpp_result_gen;
END_RCPP
}
// gini_index
double gini_index(Rcpp::NumericVector x);
RcppExport SEXP _genieclust_gini_index(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(gini_index(x));
    return rcpp_result_gen;
END_RCPP
}
// bonferroni_index
double bonferroni_index(Rcpp::NumericVector x);
RcppExport SEXP _genieclust_bonferroni_index(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bonferroni_index(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_genieclust_adjusted_rand_score", (DL_FUNC) &_genieclust_adjusted_rand_score, 2},
    {"_genieclust_rand_score", (DL_FUNC) &_genieclust_rand_score, 2},
    {"_genieclust_adjusted_fm_score", (DL_FUNC) &_genieclust_adjusted_fm_score, 2},
    {"_genieclust_fm_score", (DL_FUNC) &_genieclust_fm_score, 2},
    {"_genieclust_mi_score", (DL_FUNC) &_genieclust_mi_score, 2},
    {"_genieclust_normalized_mi_score", (DL_FUNC) &_genieclust_normalized_mi_score, 2},
    {"_genieclust_adjusted_mi_score", (DL_FUNC) &_genieclust_adjusted_mi_score, 2},
    {"_genieclust_normalized_accuracy", (DL_FUNC) &_genieclust_normalized_accuracy, 2},
    {"_genieclust_pair_sets_index", (DL_FUNC) &_genieclust_pair_sets_index, 2},
    {"_genieclust_gclust_default", (DL_FUNC) &_genieclust_gclust_default, 5},
    {"_genieclust_gclust_dist", (DL_FUNC) &_genieclust_gclust_dist, 4},
    {"_genieclust_gini_index", (DL_FUNC) &_genieclust_gini_index, 1},
    {"_genieclust_bonferroni_index", (DL_FUNC) &_genieclust_bonferroni_index, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_genieclust(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
