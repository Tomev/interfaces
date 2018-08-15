#ifndef INTERFACES_I_DISTANCEBASEDCLUSTERINGALGORITHM_H
#define INTERFACES_I_DISTANCEBASEDCLUSTERINGALGORITHM_H

#include "i_clusteringAlgorithm.h"
#include "../i_clusterDistanceMeasure.h

/**
 *  Interface for distance based clustering algorithms (such as k-means).
 */
class i_distanceBasedClusteringAlgorithm : public i_clusteringAlgorithm {
  protected:
    std::shared_ptr<i_clusterDistanceMeasure> clusterDistanceMeasure;
};

#endif //INTERFACES_I_DISTANCEBASEDCLUSTERINGALGORITHM_H
