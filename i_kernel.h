#ifndef KERNELDENSITYESTIMATOR_I_KERNEL_H
#define KERNELDENSITYESTIMATOR_I_KERNEL_H

#include <memory>

#include "i_singleArgumentFunction.h"

class i_kernel : public i_singleArgumentFunction
{
  public:
    virtual double getW() = 0;
    virtual double getU() = 0;
};

typedef std::shared_ptr<i_kernel> kernelPtr;

enum kernelIDs
{
  NORMAL = 0,
  EPANECZNIKOW = 1,
  TRIANGLE = 2,
  DULL = 3
};

#endif //KERNELDENSITYESTIMATOR_I_KERNEL_H
