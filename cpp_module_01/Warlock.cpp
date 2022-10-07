#include "Warlock.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Warlock::Warlock()
{
}

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *aspell)
{
	if (! aspell)
		return ;
	this->_spell.push_back(aspell);
}

void Warlock::forgetSpell(std::string spell_name)
{
	std::vector<ASpell *>::iterator it = _spell.begin();
	std::vector<ASpell *>::iterator ite = _spell.end();
	for (int i = 0; i < _spell.size(); i++)
	{
		if (this->_spell[i].getName() == spell_name)
			delete _spell[i];
		return ;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &Warlock::getName() const
{
	return (this->_name);
}

std::string const &Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(const std::string &str)
{
	this->_title = str;
}

/* ************************************************************************** */