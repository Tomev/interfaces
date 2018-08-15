#ifndef INTERFACES_I_CLUSTERINGALGORITHM_H
#define INTERFACES_I_CLUSTERINGALGORITHM_H

#include <vector>
#include "i_clusterable.h"


/**
 *  All clustering algorithms interface.
 */
class i_clusteringAlgorithm {
  public:
    virtual std::vector<cluster> groupObjects(std::vector<i_clusterable>) = 0;

};

#endif //INTERFACES_I_CLUSTERINGALGORITHM_H
