#ifndef INTERFACES_I_CLUSTERABLE_H
#define INTERFACES_I_CLUSTERABLE_H

#include <list>
#include <unordered_map>
#include <memory>

/**
 *  Interface for clusterable object. Each object that is meant to be clustered using provided clustering algorithms
 *  should be wrapped with this.
 */
class i_clusterable {
  public:
    virtual std::unordered_map<std::string, std::list<std::string>> getDataForComparison() = 0;
};

typedef std::shared_ptr<i_clusterable> clusterablePtr;

#endif //INTERFACES_I_CLUSTERABLE_H
