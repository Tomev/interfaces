#ifndef INTERFACES_I_OBJECTDISTANCEMEASURE_H
#define INTERFACES_I_OBJECTDISTANCEMEASURE_H

#include "i_clusterable.h"

/**
 *  Basic interface for general inter object distance measures.
 */
class i_objectDistanceMeasure {
  public:
    virtual double getObjectsDistance(clusterablePtr o1, clusterablePtr o2) = 0;
};

#endif //INTERFACES_I_OBJECTDISTANCEMEASURE_H
