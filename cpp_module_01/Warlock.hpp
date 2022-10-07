#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class ASpell;
class ATarget;

class Warlock
{

	public:

		Warlock(const std::string &name, const std::string &title);
		~Warlock();


		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(const std::string &str);

		void introduce() const;
		
		void learnSpell(ASpell *aspell);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, ATarget const &atarget);


	private:

		std::string _name;
		std::string _title;
		std::vector<ASpell*> _spell;

		Warlock();
		Warlock( Warlock const & src );
		Warlock &		operator=( Warlock const & rhs );
};


#endif /* ********************************************************* WARLOCK_H */