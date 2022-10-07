#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iomanip>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
private:
    /* data */
public:
    Fwoosh();
    virtual ~Fwoosh();

    virtual ASpell *clone() const;
};



#endif