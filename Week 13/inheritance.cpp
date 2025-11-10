#include <iostream>
// TODO
// Reload function for weapon and for all derived classes (except Knife)
// Create an inventory for the player (set of weapons)

class Weapon { // Abstract class
    public:
        virtual void use(void) = 0; // Pure virtual function
};

class Gun : public Weapon {
    public:
    void use(void) override {
        std::cout << "BANG!" << std::endl;
    }
};

class MachineGun : public Gun {
    public:
        int magazine = 20;
        void use(void) override {
            while (magazine-- > 0) {
                std::cout << "BANG!";
            }
            std::cout << '\n';
            magazine = 20;
        }   
};

class Bazooka : public Weapon {
    void use(void) override {
        std::cout << "BOOM!" << std::endl;
    }
};

class Knife : public Weapon {
    public:
    void use(void) override {
        std::cout << "SLASH!" << std::endl;
    }
    bool get_isStainless(void){
        return is_stainless;
    }
    private:
        bool is_stainless;
};

class Player {
    public:
    void use_weapon(Weapon& weapon) {
        Knife *knife = dynamic_cast<Knife*>(&weapon);
        if (knife != NULL) {
                if (knife->get_isStainless()){
                    std::cout << "Stainless knife. Can use it." << std::endl
                    weapon.use();
                }
                else{
                    std::cout  << "Cannot use not stainless knife." << std::endl;
                }
        }
        else{
            std::cout << "Not a knife." << std::endl;
        }
        weapon.use();
    }
};
int main(void) {
Gun gun;
MachineGun mg;
Bazooka bazooka;
Knife knife;
gun.use();
//mg.shoot();
// Create a reference to a base class
Gun& weapon = mg;
weapon.use();
std::cout << "-------------------\n";
Player player;
player.use_weapon(knife);
return 0;
}