#pragma once 
#include <iostream>
class ASpell;
class ATarget
{
    private:
        std::string type;

    public:
        ATarget(std::string const &type);
        virtual ~ATarget();
        virtual ATarget *clone() const = 0;
        
        std::string const &getType() const;
        void getHitBySpell(ASpell const &spell) const;
};

#include "ASpell.hpp"