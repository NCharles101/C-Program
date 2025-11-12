#include <iostream>

class Character {
    public:
        Character(unsigned hp_ = 100) : hp(hp_) {
            std::cout << "Character's constructor\n";
        }
        int hp;

};






class Elf : virtual public Character{ //virtual inheritence solves diamond problem
    public:
        Elf() {
            std::cout << " I am an Elf \n";
        }
        void think() const {
            std::cout << "Let's no tfight!\n";
        }

};

class Warrior : virtual public Character{
    public:
        Warrior() {
            std::cout << "I am a warrior!\n";
        }
        void fight() const {
            std::cout << "slash!!!!!\n";
        }

};

class ElfWarrior : public Elf, public Warrior{

};

int main(void) {
    ElfWarrior buddy;
    buddy.fight();
    buddy.think();

    std::cout << buddy.hp << std::endl;
    return 0;
}