#pragma once 
#include <iostream>
class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;

    public:
        ASpell(std::string const &name , std::string const &effects);
        virtual ~ASpell();
        virtual ASpell *clone() const  = 0;

        std::string const &getName() const;
        std::string const &getEffects() const ;
        
        void launch( ATarget const  &target) const;
};

#include "ATarget.hpp"