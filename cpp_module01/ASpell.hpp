#pragma once
#include "ATarget.hpp"
#include <iostream>
class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell(ASpell const &other);
		ASpell &operator=(ASpell const &other);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch(ATarget const &target) const;
};