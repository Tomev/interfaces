#ifndef INTERFACES_I_CLUSTER_H
#define INTERFACES_I_CLUSTER_H

#include <memory>
#include <vector>
#include "i_clusterable.h"
#include "../i_weightable.h"
#include "../i_countable.h"

class i_cluster;
typedef std::shared_ptr<i_cluster> clusterPtr;

/**
 *  Basic cluster interface, taking into account, that clusters can be weighted.
 */
class i_cluster: public i_weightable, public i_countable {
  public:
    virtual std::vector<clusterPtr> getSubclusters() = 0;

    unsigned int addSubcluster(clusterPtr subcluster) {
      _subclusters.push_back(subcluster);
      return _subclusters.size();
    };

    clusterablePtr getMean() {return _mean;};


  protected:
    std::vector<clusterPtr> _subclusters;
    clusterablePtr _mean;
};



#endif //INTERFACES_I_CLUSTER_H
