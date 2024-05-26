#include "ATarget.hpp"

ATarget::ATarget(std::string type) : type(type){}

ATarget::~ATarget(){}

ATarget::ATarget(ATarget const &other)
{
	*this = other;
}


ATarget &ATarget::operator=(ATarget const &other)
{
	type = other.type;
	return *this;
}

std::string const &ATarget::getType() const
{
	return type;
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been "<< spell.getEffects() << "!" << std::endl;
}
