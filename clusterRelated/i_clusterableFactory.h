#include "i_clusterable"

class i_clusterableFactory{
    virtual clusterablePtr createClusterable() = 0;
    virtual clusterablePtr createMeanClusterable(std::vector<clusterablePtr> clusterables);
};

#ifndef KMEANS_I_CLUSTERABLEFACTORY_H
#define KMEANS_I_CLUSTERABLEFACTORY_H
#endif //KMEANS_I_CLUSTERABLEFACTORY_H
