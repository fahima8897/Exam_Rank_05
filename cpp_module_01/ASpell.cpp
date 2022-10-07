#include "ASpell.hpp"

ASpell::ASpell(): _name(NULL), _effects(NULL) {}



ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(_effects)
{
}

ASpell::ASpell(ASpell const &src)
{
    *this = src;
}

ASpell &ASpell::operator=(ASpell const &rhs)
{
    if (&rhs == this)
        return *this;
    this->_name = rhs._name;
    this->_effects = rhs._effects;
    return *this;
}

ASpell::~ASpell()
{
}

std::string const &ASpell::getName() const 
{
    return this->_name;
}

std::string const &ASpell::getEffects() const
{
    return this->_effects;
}

void ASpell::launch(ATarget &atarget) const
{
    atarget.getHitBySpell(*this);
}