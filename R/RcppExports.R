# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

thinCloud <- function(las, voxel = 0.025) {
    .Call(`_TreeLS_thinCloud`, las, voxel)
}

RCropCloud <- function(las, xCenter, yCenter, len, circle, negative) {
    .Call(`_TreeLS_RCropCloud`, las, xCenter, yCenter, len, circle, negative)
}

getCircle <- function(las, pixel = 0.05, rad_max = 0.25, min_den = 0.1, min_votes = 3L) {
    .Call(`_TreeLS_getCircle`, las, pixel, rad_max, min_den, min_votes)
}

singleStack <- function(las, pixel = 0.05, rad_max = 0.25, min_den = 0.1, min_votes = 3L) {
    .Call(`_TreeLS_singleStack`, las, pixel, rad_max, min_den, min_votes)
}

stackMap <- function(las, hmin = 1, hmax = 3, hstep = 0.5, pixel = 0.025, rad_max = 0.25, min_den = 0.1, min_votes = 3L) {
    .Call(`_TreeLS_stackMap`, las, hmin, hmax, hstep, pixel, rad_max, min_den, min_votes)
}

houghStemPoints <- function(las, h1 = 1, h2 = 3, hstep = 0.5, radius = 0.25, pixel = 0.025, density = 0.1, votes = 3L) {
    .Call(`_TreeLS_houghStemPoints`, las, h1, h2, hstep, radius, pixel, density, votes)
}

houghStemPlot <- function(las, treePositions, h1 = 1, h2 = 3, hstep = 0.5, radius = 0.25, pixel = 0.025, density = 0.1, votes = 3L) {
    .Call(`_TreeLS_houghStemPlot`, las, treePositions, h1, h2, hstep, radius, pixel, density, votes)
}

getCircleRansac <- function(las, nSamples = 5L, pConfidence = 0.99, pInliers = 0.8) {
    .Call(`_TreeLS_getCircleRansac`, las, nSamples, pConfidence, pInliers)
}

ransacStem <- function(las, segments, radii, nSamples = 5L, pConfidence = 0.99, pInliers = 0.8, tolerance = 0.05) {
    .Call(`_TreeLS_ransacStem`, las, segments, radii, nSamples, pConfidence, pInliers, tolerance)
}

ransacPlot <- function(las, treeId, segments, radii, nSamples = 5L, pConfidence = 0.99, pInliers = 0.8, tolerance = 0.05) {
    .Call(`_TreeLS_ransacPlot`, las, treeId, segments, radii, nSamples, pConfidence, pInliers, tolerance)
}

