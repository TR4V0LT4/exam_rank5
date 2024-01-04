 #include "SpellBook.hpp"

  SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}
   
        void SpellBook::learnSpell(ASpell* spell)
        {
            this->spells[spell->getName()] = spell;
        }
        void SpellBook::forgetSpell(std::string const &spell)
        {
            if(this->spells[spell])
                this->spells[spell] = NULL;
        }

        ASpell* SpellBook::createSpell(std::string const &spell)
        {
            if(this->spells[spell])
                return this->spells[spell];
            return NULL;
        }