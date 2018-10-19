#ifndef KMEANS_I_CLUSTERFACTORY_H
#define KMEANS_I_CLUSTERFACTORY_H

#include "i_cluster.h"

class i_clusterFactory {
  public:
    virtual clusterablePtr createObject() = 0;
    virtual clusterPtr createCluster(clusterablePtr object) = 0;
};

#endif //KMEANS_I_CLUSTERFACTORY_H
