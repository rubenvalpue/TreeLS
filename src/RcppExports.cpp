// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// thinCloud
LogicalVector thinCloud(NumericMatrix& las, double voxel);
RcppExport SEXP _TreeLS_thinCloud(SEXP lasSEXP, SEXP voxelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type voxel(voxelSEXP);
    rcpp_result_gen = Rcpp::wrap(thinCloud(las, voxel));
    return rcpp_result_gen;
END_RCPP
}
// RCropCloud
LogicalVector RCropCloud(NumericMatrix& las, double xCenter, double yCenter, double len, bool circle, bool negative);
RcppExport SEXP _TreeLS_RCropCloud(SEXP lasSEXP, SEXP xCenterSEXP, SEXP yCenterSEXP, SEXP lenSEXP, SEXP circleSEXP, SEXP negativeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type xCenter(xCenterSEXP);
    Rcpp::traits::input_parameter< double >::type yCenter(yCenterSEXP);
    Rcpp::traits::input_parameter< double >::type len(lenSEXP);
    Rcpp::traits::input_parameter< bool >::type circle(circleSEXP);
    Rcpp::traits::input_parameter< bool >::type negative(negativeSEXP);
    rcpp_result_gen = Rcpp::wrap(RCropCloud(las, xCenter, yCenter, len, circle, negative));
    return rcpp_result_gen;
END_RCPP
}
// getCircle
List getCircle(NumericMatrix& las, double pixel, double rad_max, double min_den, unsigned int min_votes);
RcppExport SEXP _TreeLS_getCircle(SEXP lasSEXP, SEXP pixelSEXP, SEXP rad_maxSEXP, SEXP min_denSEXP, SEXP min_votesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type pixel(pixelSEXP);
    Rcpp::traits::input_parameter< double >::type rad_max(rad_maxSEXP);
    Rcpp::traits::input_parameter< double >::type min_den(min_denSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_votes(min_votesSEXP);
    rcpp_result_gen = Rcpp::wrap(getCircle(las, pixel, rad_max, min_den, min_votes));
    return rcpp_result_gen;
END_RCPP
}
// singleStack
List singleStack(NumericMatrix& las, double pixel, double rad_max, double min_den, unsigned int min_votes);
RcppExport SEXP _TreeLS_singleStack(SEXP lasSEXP, SEXP pixelSEXP, SEXP rad_maxSEXP, SEXP min_denSEXP, SEXP min_votesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type pixel(pixelSEXP);
    Rcpp::traits::input_parameter< double >::type rad_max(rad_maxSEXP);
    Rcpp::traits::input_parameter< double >::type min_den(min_denSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_votes(min_votesSEXP);
    rcpp_result_gen = Rcpp::wrap(singleStack(las, pixel, rad_max, min_den, min_votes));
    return rcpp_result_gen;
END_RCPP
}
// stackMap
List stackMap(NumericMatrix& las, double hmin, double hmax, double hstep, double pixel, double rad_max, double min_den, unsigned int min_votes);
RcppExport SEXP _TreeLS_stackMap(SEXP lasSEXP, SEXP hminSEXP, SEXP hmaxSEXP, SEXP hstepSEXP, SEXP pixelSEXP, SEXP rad_maxSEXP, SEXP min_denSEXP, SEXP min_votesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type hmin(hminSEXP);
    Rcpp::traits::input_parameter< double >::type hmax(hmaxSEXP);
    Rcpp::traits::input_parameter< double >::type hstep(hstepSEXP);
    Rcpp::traits::input_parameter< double >::type pixel(pixelSEXP);
    Rcpp::traits::input_parameter< double >::type rad_max(rad_maxSEXP);
    Rcpp::traits::input_parameter< double >::type min_den(min_denSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type min_votes(min_votesSEXP);
    rcpp_result_gen = Rcpp::wrap(stackMap(las, hmin, hmax, hstep, pixel, rad_max, min_den, min_votes));
    return rcpp_result_gen;
END_RCPP
}
// houghStemPoints
List houghStemPoints(NumericMatrix& las, double h1, double h2, double hstep, double radius, double pixel, double density, unsigned int votes);
RcppExport SEXP _TreeLS_houghStemPoints(SEXP lasSEXP, SEXP h1SEXP, SEXP h2SEXP, SEXP hstepSEXP, SEXP radiusSEXP, SEXP pixelSEXP, SEXP densitySEXP, SEXP votesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< double >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< double >::type hstep(hstepSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< double >::type pixel(pixelSEXP);
    Rcpp::traits::input_parameter< double >::type density(densitySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type votes(votesSEXP);
    rcpp_result_gen = Rcpp::wrap(houghStemPoints(las, h1, h2, hstep, radius, pixel, density, votes));
    return rcpp_result_gen;
END_RCPP
}
// houghStemPlot
List houghStemPlot(NumericMatrix& las, NumericMatrix& treePositions, double h1, double h2, double hstep, double radius, double pixel, double density, unsigned int votes);
RcppExport SEXP _TreeLS_houghStemPlot(SEXP lasSEXP, SEXP treePositionsSEXP, SEXP h1SEXP, SEXP h2SEXP, SEXP hstepSEXP, SEXP radiusSEXP, SEXP pixelSEXP, SEXP densitySEXP, SEXP votesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type treePositions(treePositionsSEXP);
    Rcpp::traits::input_parameter< double >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< double >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< double >::type hstep(hstepSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< double >::type pixel(pixelSEXP);
    Rcpp::traits::input_parameter< double >::type density(densitySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type votes(votesSEXP);
    rcpp_result_gen = Rcpp::wrap(houghStemPlot(las, treePositions, h1, h2, hstep, radius, pixel, density, votes));
    return rcpp_result_gen;
END_RCPP
}
// getCircleRansac
NumericVector getCircleRansac(NumericMatrix& las, unsigned int nSamples, double pConfidence, double pInliers);
RcppExport SEXP _TreeLS_getCircleRansac(SEXP lasSEXP, SEXP nSamplesSEXP, SEXP pConfidenceSEXP, SEXP pInliersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nSamples(nSamplesSEXP);
    Rcpp::traits::input_parameter< double >::type pConfidence(pConfidenceSEXP);
    Rcpp::traits::input_parameter< double >::type pInliers(pInliersSEXP);
    rcpp_result_gen = Rcpp::wrap(getCircleRansac(las, nSamples, pConfidence, pInliers));
    return rcpp_result_gen;
END_RCPP
}
// ransacStem
List ransacStem(NumericMatrix& las, std::vector<unsigned int>& segments, std::vector<double>& radii, unsigned int nSamples, double pConfidence, double pInliers, double tolerance);
RcppExport SEXP _TreeLS_ransacStem(SEXP lasSEXP, SEXP segmentsSEXP, SEXP radiiSEXP, SEXP nSamplesSEXP, SEXP pConfidenceSEXP, SEXP pInliersSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int>& >::type segments(segmentsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nSamples(nSamplesSEXP);
    Rcpp::traits::input_parameter< double >::type pConfidence(pConfidenceSEXP);
    Rcpp::traits::input_parameter< double >::type pInliers(pInliersSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(ransacStem(las, segments, radii, nSamples, pConfidence, pInliers, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// ransacPlot
List ransacPlot(NumericMatrix& las, std::vector<unsigned int>& treeId, std::vector<unsigned int>& segments, std::vector<double>& radii, unsigned int nSamples, double pConfidence, double pInliers, double tolerance);
RcppExport SEXP _TreeLS_ransacPlot(SEXP lasSEXP, SEXP treeIdSEXP, SEXP segmentsSEXP, SEXP radiiSEXP, SEXP nSamplesSEXP, SEXP pConfidenceSEXP, SEXP pInliersSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type las(lasSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int>& >::type treeId(treeIdSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int>& >::type segments(segmentsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nSamples(nSamplesSEXP);
    Rcpp::traits::input_parameter< double >::type pConfidence(pConfidenceSEXP);
    Rcpp::traits::input_parameter< double >::type pInliers(pInliersSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(ransacPlot(las, treeId, segments, radii, nSamples, pConfidence, pInliers, tolerance));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TreeLS_thinCloud", (DL_FUNC) &_TreeLS_thinCloud, 2},
    {"_TreeLS_RCropCloud", (DL_FUNC) &_TreeLS_RCropCloud, 6},
    {"_TreeLS_getCircle", (DL_FUNC) &_TreeLS_getCircle, 5},
    {"_TreeLS_singleStack", (DL_FUNC) &_TreeLS_singleStack, 5},
    {"_TreeLS_stackMap", (DL_FUNC) &_TreeLS_stackMap, 8},
    {"_TreeLS_houghStemPoints", (DL_FUNC) &_TreeLS_houghStemPoints, 8},
    {"_TreeLS_houghStemPlot", (DL_FUNC) &_TreeLS_houghStemPlot, 9},
    {"_TreeLS_getCircleRansac", (DL_FUNC) &_TreeLS_getCircleRansac, 4},
    {"_TreeLS_ransacStem", (DL_FUNC) &_TreeLS_ransacStem, 7},
    {"_TreeLS_ransacPlot", (DL_FUNC) &_TreeLS_ransacPlot, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_TreeLS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
