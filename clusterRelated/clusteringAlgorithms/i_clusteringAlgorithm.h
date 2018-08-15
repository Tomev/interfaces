#ifndef INTERFACES_I_CLUSTERINGALGORITHM_H
#define INTERFACES_I_CLUSTERINGALGORITHM_H

#include <vector>
#include "../i_cluster.h"

/**
 *  All clustering algorithms interface.
 */
class i_clusteringAlgorithm {
  public:
    virtual std::vector<clusterPtr> groupObjects(std::vector<clusterPtr>) = 0;
};

#endif //INTERFACES_I_CLUSTERINGALGORITHM_H
