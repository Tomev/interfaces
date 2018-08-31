#ifndef KMEANS_I_CLUSTERFACTORY_H
#define KMEANS_I_CLUSTERFACTORY_H

#include "i_cluster.h"

class i_clusterFactory {
  public:
    clusterablePtr createObject
    clusterPtr createCluster(clusterablePtr object);
};

#endif //KMEANS_I_CLUSTERFACTORY_H
