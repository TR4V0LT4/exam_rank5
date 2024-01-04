#include "Warlock.hpp"
Warlock::Warlock(std::string const &name , std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}		
Warlock::~Warlock(){std::cout << this->name << ": My job here is done!\n";}

std::string const &Warlock::getName() const 
{
	return name;
}

std::string const &Warlock::getTitle() const
{
	return title;
}
void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}
void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}
void	Warlock::learnSpell(ASpell *new_spell)
{
	book.learnSpell(new_spell);
}
void	Warlock::forgetSpell(std::string spell)
{
	book.forgetSpell(spell);
}		
void	Warlock::launchSpell(std::string spell , ATarget const &target)
{
	if(book.createSpell(spell))
		book.createSpell(spell)->launch(target);
}
