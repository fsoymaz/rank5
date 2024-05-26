#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects){};

ASpell::~ASpell(){};

ASpell::ASpell(ASpell const & other)
{
	*this = other;
}

ASpell &ASpell::operator=(ASpell const & other)
{
	name = other.name;
	effects = other.effects;
	return *this;
}

std::string ASpell::getName() const
{
	return name;
}

std::string ASpell::getEffects() const
{
	return effects;
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}