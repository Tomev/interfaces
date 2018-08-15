#ifndef INTERFACES_I_OBJECTSIMILARITYMEASURE_H
#define INTERFACES_I_OBJECTSIMILARITYMEASURE_H

#include "i_clusterable.h"

/**
 *  Basic interface for general inter object similarity measures.
 */
class i_objectSimilarityMeasure {
  public:
    virtual double getObjectsSimilarity(clusterablePtr o1, clusterablePtr o2) = 0;
};

#endif //INTERFACES_I_OBJECTSIMILARITYMEASURE_H
