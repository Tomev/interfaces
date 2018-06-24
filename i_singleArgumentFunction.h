#ifndef INTERFACES_I_SINGLEARGUMENTFUNCTION_H
#define INTERFACES_I_SINGLEARGUMENTFUNCTION_H

#include "i_function.h"


/// Single argument function interface, for easier access.
class i_singleArgumentFunction : public i_function
{
  public:
    virtual double getValue(double arg) = 0;
};

#endif //INTERFACES_I_SINGLEARGUMENTFUNCTION_H
