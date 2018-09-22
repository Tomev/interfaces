#ifndef INTERFACES_I_CLUSTERDISTANCEMEASURE_H
#define INTERFACES_I_CLUSTERDISTANCEMEASURE_H

#include "i_cluster.h"
#include "i_objectDistanceMeasure.h"

/**
 *  Basic interface for general inter cluster distance measures.
 */
class i_clusterDistanceMeasure {
  public:
    virtual double getClustersDistance(clusterPtr c1, clusterPtr c2) = 0;
  protected:
    std::shared_ptr<i_objectDistanceMeasure> objectDistanceMeasure;
};

typedef std::shared_ptr<i_clusterDistanceMeasure> clusterDistanceMeasurePtr;

#endif //INTERFACES_I_CLUSTERDISTANCEMEASURE_H
