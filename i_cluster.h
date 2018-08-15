#ifndef INTERFACES_I_CLUSTER_H
#define INTERFACES_I_CLUSTER_H

#include "i_clusterable.h"
#include "i_weightable.h"
#include "i_countable.h"

class i_cluster: protected i_weightable, protected i_countable {

};

#endif //INTERFACES_I_CLUSTER_H
