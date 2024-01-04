#pragma once

#include <string>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class TargetGenerator
{
    private:
        std::map<std::string , ATarget *> Targets;
        
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target_ptr);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);

};