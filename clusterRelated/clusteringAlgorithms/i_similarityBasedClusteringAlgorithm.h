#ifndef INTERFACES_I_SIMILARITYBASEDCLUSTERINGALGORITHM_H
#define INTERFACES_I_SIMILARITYBASEDCLUSTERINGALGORITHM_H

#include "i_clusteringAlgorithm.h"
#include "../i_clusterSimilarityMeasure.h"

/**
 *  Interface for similarity based clustering algorithms (such as AHC).
 */
class i_similarityBasedClusteringAlgorithm : public i_clusteringAlgorithm {
  protected:
    std::shared_ptr<i_clusterSimilarityMeasure> clusterSimilarityMeasure;
};

#endif //INTERFACES_I_SIMILARITYBASEDCLUSTERINGALGORITHM_H
