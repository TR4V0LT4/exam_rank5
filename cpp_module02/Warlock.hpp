#pragma once 
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
class Warlock
{
	private:
		std::string name;
		std::string title;
		SpellBook  book;
		
	public:	
		Warlock(std::string const &name , std::string const &title);
		~Warlock();
		
		std::string const &getName() const;
		std::string const &getTitle() const;
		
		void setTitle(std::string const &title);
		
		void introduce() const;

		void learnSpell(ASpell *new_spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell , ATarget const &target);
};
