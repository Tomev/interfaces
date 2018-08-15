#ifndef INTERFACES_I_FUNCTION_H
#define INTERFACES_I_FUNCTION_H

#include <vector>
#include <memory>

/// A general interface for mathematical functions.
class i_function
{
  public:
    virtual double getValue(std::vector<double> args) = 0;
};

typedef std::shared_ptr<i_function> functionPtr;

#endif //INTERFACES_I_FUNCTION_H
