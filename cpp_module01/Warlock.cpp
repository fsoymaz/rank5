#include "Warlock.hpp"

Warlock::Warlock(){};
Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &other)
{
	*this = other;
}

Warlock &Warlock::operator=(Warlock const &other)
{
	name = other.name;
	title= other.title;
	return *this;
}

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
	std::cout << name << ": I am " << name << ", " << title <<"!" << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" <<  std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string SpellName)
{
    std::map<std::string, ASpell*>::iterator it = _SpellBook.find(SpellName);
    if (it != _SpellBook.end())
    {
        delete it->second;
        _SpellBook.erase(it);
    }
}
void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		_SpellBook[SpellName]->launch(target);
}