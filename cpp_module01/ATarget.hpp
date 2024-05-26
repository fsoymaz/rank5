#pragma once
#include "ASpell.hpp"
class ASpell;
#include <iostream>
class ATarget
{
	protected:
		std::string type;

	public:
		ATarget(std::string type);
		ATarget(ATarget const &other);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &other);
		std::string const &getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const & spell) const;
};