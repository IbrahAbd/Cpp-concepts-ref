#include <iostream>
#include <vector>
using namespace std;

class Magical_Energy{
    private:
        int * energy = new int[5];
        int number_energy = 5;
        string type = "Chakra";
    
    public:
        // Constructor
        Magical_Energy(int * Energy){
            energy = new int[5];
            for (int i=0; i < 5; ++i){
                energy[i] = Energy[i];
            }
            cout << "Energy created!" << endl;
        } 

        // Destructor
        ~Magical_Energy(){
            cout << "Energy destroyed!" << endl;
            delete[] energy;
        }

        // Copy Constructor
        Magical_Energy(const Magical_Energy & rhs){
            number_energy = rhs.number_energy;
            type = rhs.type;
            // NB
            energy = new int[5];
            for (int i=0; i < 5 ; ++i){
                energy[i] = rhs.energy[i];
            }
            cout << "Copied over!" << endl;
        }

        // Move constructor
        Magical_Energy(Magical_Energy && rhs){
            number_energy = rhs.number_energy;
            type = std::move(rhs.type);
            energy = rhs.energy;
            rhs.energy = nullptr;
            cout << "Moved over!" << endl;
        }

        // Copy Assignment operator
        Magical_Energy & operator=(const Magical_Energy & rhs){
            if (this != &rhs){
                // NB
                delete[] energy;

                number_energy = rhs.number_energy;
                type = rhs.type;

                // NB
                energy = new int[5];
                for (int i=0; i < 5 ; ++i){
                    energy[i] = rhs.energy[i];
                }
                cout << "Copy Assignment operation over!" << endl;
            }
            return *this;
        }

        // Move assignment operator
        Magical_Energy & operator=(Magical_Energy && rhs){
            if (this != &rhs){
                // NB
                delete[] energy;
                number_energy = rhs.number_energy;
                type = std::move(rhs.type);
                energy = new int[5];
                energy = rhs.energy;
                rhs.energy = nullptr;   
                cout << "Move assignment operator over!" << endl;
            }
            return *this;
        }

};

int main(){
    int * energy = new int[5];
    energy[0] = 10;
    energy[1] = 20;
    energy[2] = 30;
    energy[3] = 40;
    energy[4] = 50;


    int * energy2 = new int[5];
    energy2[0] = 10;
    energy2[1] = 20;
    energy2[2] = 30;
    energy2[3] = 40;
    energy2[4] = 50;

    int * energy3 = new int[5];
    energy3[0] = 10;
    energy3[1] = 20;
    energy3[2] = 30;
    energy3[3] = 40;
    energy3[4] = 50;

    Magical_Energy M_energy(energy);
    Magical_Energy N_energy(energy2);
    Magical_Energy O_energy(energy3);

    Magical_Energy copy = M_energy;
    N_energy = M_energy;

    Magical_Energy copy2 = std::move(M_energy);

    O_energy = std::move(copy2);

    return 0;
}