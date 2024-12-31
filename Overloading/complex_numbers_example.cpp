#include <iostream>

class complex{
    private:
        double real;
        double imaginary;

    public:
        complex(double r, double i): real(r), imaginary(i) {};   

        complex operator+(const complex & rhs) const{
            return complex(real + rhs.real, imaginary + rhs.imaginary);
        }

        bool operator==(const complex &other) const
        {
            return (real == other.real && imaginary == other.imaginary);
        }

        // Overloading the << operator (stream insertion)
        friend std::ostream &operator<<(std::ostream &os, const complex &c);
};

std::ostream &operator<<(std::ostream &os, const complex &c)
{
    os << c.real << " + " << c.imaginary << "i";
    return os;
}

int main()
{
    complex c1(3.0, 4.0);
    complex c2(1.0, 2.0);

    complex result = c1 + c2;                    // Add the two complex numbers
    std::cout << "Sum: " << result << std::endl; // Output: "4 + 6i"

}