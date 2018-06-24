#ifndef INTERFACES_I_FUNCTION_H
#define INTERFACES_I_FUNCTION_H

#include <vector>

/// A general interface for mathematical functions.
class i_function
{
  public:
    virtual double get_value(std::vector<double> args) = 0;
};

#endif //INTERFACES_I_FUNCTION_H
