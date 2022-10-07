#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Warlock
{

	public:

		Warlock(const std::string &name, const std::string &title);
		~Warlock();


		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(const std::string &str);

		void introduce() const;


	private:

		std::string _name;
		std::string _title;

		Warlock();
		Warlock( Warlock const & src );
		Warlock &		operator=( Warlock const & rhs );
};


#endif /* ********************************************************* WARLOCK_H */