
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel {

    class NumberWithUnits {

    public:
        double amount;
        std::string unit;
        
        NumberWithUnits(const double _amount, const std::string _unit) : amount(_amount), unit(_unit) {}
        
        void read_units(ifstream units_file);
    
        NumberWithUnits operator+(const NumberWithUnits &x);
        NumberWithUnits operator-(const NumberWithUnits &x);

        NumberWithUnits operator+=(const NumberWithUnits &x);
        NumberWithUnits operator-=(const NumberWithUnits &x);
        
        NumberWithUnits operator+();
        NumberWithUnits operator-();
        

        std::string operator<(const NumberWithUnits &x);
        std::string operator<=(const NumberWithUnits &x);

        std::string operator>(const NumberWithUnits &x);
        std::string operator>=(const NumberWithUnits &x);
        
        std::string operator==(const NumberWithUnits &x);
        std::string operator!=(const NumberWithUnits &x);
        
        
        NumberWithUnits operator++();
        NumberWithUnits operator++(NumberWithUnits);

        NumberWithUnits operator--();
        NumberWithUnits operator--(NumberWithUnits);
        
        
        NumberWithUnits operator*(const double x);
        
        NumberWithUnits operator*(const double x);
        NumberWithUnits operator*(const double x);
        
        
        friend ostream& operator<<(ostream& output, const NumberWithUnits &x);
        friend istream& operator>>(istream& input, const NumberWithUnits &x);
    };
    
}
