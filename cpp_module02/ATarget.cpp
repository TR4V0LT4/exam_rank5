  #include "ATarget.hpp"
  ATarget::ATarget(std::string const &type)
  {
    this->type = type;
  }
std::string const &ATarget::getType() const
{
    return type;
}

ATarget::~ATarget() {}

void ATarget::getHitBySpell(ASpell const &spell) const 
{
   std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}