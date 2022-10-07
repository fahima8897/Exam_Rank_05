#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iomanip>
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
private:
    /* data */
public:
    Dummy(/* args */);
    virtual ~Dummy();

    virtual ATarget *clone() const;
};


#endif