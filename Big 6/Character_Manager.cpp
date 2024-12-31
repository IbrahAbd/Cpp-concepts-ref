#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Character{
    public:
        std::string name;
        int health;
        int level;
        vector<string *> abilities;

        // Constructor
        Character(string name, int health, int level, vector<string *> abilities) : name(name), health(health), level(level)
        {
            for (auto &ability : abilities)
            {
                this->abilities.push_back(new std::string(*ability));
            }
        };

        // Destructor
        ~Character(){
            for (auto &ability : abilities)
            {
                delete ability;
            }
        }
    
        // Copy constructor
        Character (const Character & rhs){
            name = rhs.name;
            health = rhs.health;
            level = rhs.level;
            for (auto &ability : rhs.abilities)
            {
                abilities.push_back(new std::string(*ability));
            }
        }

        // Copy assignment operator
        Character &operator=(const Character &rhs)
        {
            if (this != &rhs)
            {
                // First, free any existing resources
                for (auto &ability : abilities)
                {
                    delete ability;
                }
                abilities.clear();

                // Perform the deep copy
                name = rhs.name;
                health = rhs.health;
                level = rhs.level;
                for (auto &ability : rhs.abilities)
                {
                    abilities.push_back(new std::string(*ability));
                }
            }
            return *this;
        }

        // Move constructor

        // Move constructor
        Character(Character &&rhs) noexcept
            : name(std::move(rhs.name)), health(rhs.health), level(rhs.level), abilities(std::move(rhs.abilities))
        {
            // Set rhs abilities to empty to avoid double deletion
            rhs.abilities.clear();
        }


        // Move assignment operator
        Character &operator=(Character &&rhs) noexcept
        {
            if (this != &rhs)
            {
                // Clean up existing resources
                for (auto &ability : abilities)
                {
                    delete ability;
                }
                abilities.clear();

                // Move the resources from rhs
                name = std::move(rhs.name);
                health = rhs.health;
                level = rhs.level;
                abilities = std::move(rhs.abilities);

                // Set rhs to an empty state
                rhs.health = 0;
                rhs.level = 0;
                rhs.abilities.clear();
            }
            return *this;
        }

        // Method to display character information
        void display() const
        {
            cout << "Name: " << name << "\nHealth: " << health << "\nLevel: " << level << "\nAbilities:\n";
            for (auto &ability : abilities)
            {
                cout << "- " << *ability << "\n";
            }
        }
};

int main(){
            // Creating abilities
            vector<string *> abilities;
            abilities.push_back(new string("Fireball"));
            abilities.push_back(new string("Shield Block"));
            abilities.push_back(new string("Sword Slash"));

            // Create a Character instance
            Character hero("Hero", 100, 5, abilities);

            // Display hero's information
            hero.display();

            // Copy constructor example
            Character copyHero = hero;

            // Display copied hero's information
            copyHero.display();

            // Move constructor example
            Character movedHero = std::move(hero);

            // Display moved hero's information
            movedHero.display();

            // Clean up allocated memory for abilities
            for (auto &ability : abilities)
            {
                delete ability;
            }

            return 0;
}
