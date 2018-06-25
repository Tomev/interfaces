#ifndef KERNELDENSITYESTIMATOR_I_KERNEL_H
#define KERNELDENSITYESTIMATOR_I_KERNEL_H

#include <memory>

#include "i_singleArgumentFunction.h"

class i_kernel : public i_singleArgumentFunction
{
  public:

  /** Kernel specific parameter given by equation (TeX):
   *
   *  W(K) = \int^\infty_{-\infty} K^2(x) dx,
   *
   *  where K denotes kernel.
   *
   *  More info about that in Kernel Estimators in Systems Analysis.
   */
    virtual double getW() = 0;

  /** Kernel specific parameter given by equation (TeX):
   *
   *  U(K) = \int^\infty_{-\infty} x^2 K(x) dx,
   *
   *  where K denotes kernel.
   *
   *  More info about that in Kernel Estimators in Systems Analysis.
   */
    virtual double getU() = 0;
};

typedef std::shared_ptr<i_kernel> kernelPtr;

enum kernelIDs
{
  NORMAL        = 0,
  EPANECZNIKOW  = 1,
  TRIANGLE      = 2,
  DULL          = 3
};

#endif //KERNELDENSITYESTIMATOR_I_KERNEL_H
