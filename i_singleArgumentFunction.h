#ifndef INTERFACES_I_SINGLEARGUMENTFUNCTION_H
#define INTERFACES_I_SINGLEARGUMENTFUNCTION_H

#include "i_function.h"


/// Single argument function interface, for easier access.
class i_singleArgumentFunction : public i_function
{
  public:
    virtual double getValue(double arg) = 0;

    double getValue(std::vector<double> args) override
    {
      /** Note, that it's a single dimension function. It only works on first element of vector,
       *  and doesn't do any checking (contract programming).
       *
       *  @brief Return value of function in args[0].
       *
       *  @return Function value in args[0].
       */

      return getValue(args[0]);
    }
};

#endif //INTERFACES_I_SINGLEARGUMENTFUNCTION_H
