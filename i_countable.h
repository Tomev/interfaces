#ifndef INTERFACES_I_COUNTABLE_H
#define INTERFACES_I_COUNTABLE_H

/// General interface class for countable objects.

/** Do note, that count is not necessarily equal to weight. */

class i_countable
{
  public:
    virtual long getCount() = 0;
};

#endif //INTERFACES_I_COUNTABLE_H
