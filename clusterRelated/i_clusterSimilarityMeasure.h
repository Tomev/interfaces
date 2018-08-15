#ifndef INTERFACES_I_CLUSTERSIMILARITYMEASURE_H
#define INTERFACES_I_CLUSTERSIMILARITYMEASURE_H

#include "i_cluster.h"
#include "i_objectSimilarityMeasure.h"

/**
 *  Basic interface for general inter cluster similarity measures.
 */
class clusterSimilarityMeasure {
  public:
    virtual double getClustersSimilarity(clusterPtr c1, clusterPtr c2) = 0;
  protected:
    std::shared_ptr<i_objectSimilarityMeasure> objectSimilarityMeasure;
};

#endif //INTERFACES_I_CLUSTERSIMILARITYMEASURE_H
