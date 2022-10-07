#include "ATarget.hpp"


ATarget::ATarget(/* args */) :_type(NULL)
{
}

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::ATarget(ATarget const &src)
{
    *this = src;
}

ATarget &ATarget::operator=(ATarget const &rhs)
{
    if (&rhs == this)
        return *this;
    this->_type = rhs._type;
    return *this;
}

ATarget::~ATarget()
{
}

std::string const &ATarget::getType() const
{
    return this->_type;
}

void ATarget::getHitBySpell(ASpell const &aspell)
{
    std::cout << this->_type << " has been " << aspell.getEffects() << "!\n"; 
}

