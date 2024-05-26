#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
private:
	std::string name;
	std::string title;
	std::map<std::string, ASpell *> _SpellBook;

public:
	Warlock();
	~Warlock();
	Warlock(std::string const &name, std::string const &title);
	Warlock(Warlock const &other);
	Warlock &operator=(Warlock const &other);
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string SpellName);
	void launchSpell(std::string SpellName, ATarget const &target);
};