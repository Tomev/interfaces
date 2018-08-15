#ifndef INTERFACES_I_CLUSTERDISTANCEMEASURE_H
#define INTERFACES_I_CLUSTERDISTANCEMEASURE_H

#include "i_cluster.h"

/**
 *  Basic interface for general inter cluster distance measures.
 */
class i_clusterDistanceMeasure {
  public:
    virtual double getClustersDistance(clusterPtr c1, clusterPtr c2) = 0;
};

#endif //INTERFACES_I_CLUSTERDISTANCEMEASURE_H
