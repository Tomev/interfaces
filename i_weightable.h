#ifndef INTERFACES_I_WEIGHTABLE_H
#define INTERFACES_I_WEIGHTABLE_H

/// General interface class for weightable.

/** Do note, that count is not necessarily equal to weight. */

class i_weightable
{
  public:
    virtual double getWeight() = 0;
    virtual void setWeight(double newWeight) = 0;
  protected:
    double weight = 0.0;
};

#endif //INTERFACES_I_WEIGHTABLE_H
