#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    this->Targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(const std::string &target_type)
{
    if(Targets[target_type])
        Targets[target_type] = NULL;
}

ATarget* TargetGenerator::createTarget(const std::string &target_type)
{
    if(Targets[target_type])
        return Targets[target_type];
    return NULL;
}