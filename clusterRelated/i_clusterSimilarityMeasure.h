#ifndef INTERFACES_I_CLUSTERSIMILARITYMEASURE_H
#define INTERFACES_I_CLUSTERSIMILARITYMEASURE_H

#include "i_cluster.h"

/**
 *  Basic interface for general inter cluster similarity measures.
 */
class clusterSimilarityMeasure {
  public:
    virtual double getClustersSimilarity(clusterPtr c1, clusterPtr c2) = 0;
};

#endif //INTERFACES_I_CLUSTERSIMILARITYMEASURE_H
