
using namespace std;
using namespace ariel;

NumberWithUnits ariel::NumberWithUnits::operator+(const NumberWithUnits &x){return *this;}
NumberWithUnits ariel::NumberWithUnits::operator-(const NumberWithUnits &x){return *this;}

void ariel::NumberWithUnits::operator+=(const NumberWithUnits &x){}
void ariel::NumberWithUnits::operator-=(const NumberWithUnits &x){}

NumberWithUnits ariel::NumberWithUnits::operator+(){return *this;}
NumberWithUnits ariel::NumberWithUnits::operator-(){return *this;}


std::string ariel::NumberWithUnits::operator<(const NumberWithUnits &x){return std::string("true");}
std::string ariel::NumberWithUnits::operator<=(const NumberWithUnits &x){return std::string("true");}

std::string ariel::NumberWithUnits::operator>(const NumberWithUnits &x){return std::string("true");}
std::string ariel::NumberWithUnits::operator>=(const NumberWithUnits &x){return std::string("true");}

std::string ariel::NumberWithUnits::operator==(const NumberWithUnits &x){return std::string("true");}
std::string ariel::NumberWithUnits::operator!=(const NumberWithUnits &x){return std::string("true");}


NumberWithUnits ariel::NumberWithUnits::operator++(){return *this;}
NumberWithUnits ariel::NumberWithUnits::operator++(NumberWithUnits){return *this;}

NumberWithUnits ariel::NumberWithUnits::operator--(){return *this;}
NumberWithUnits ariel::NumberWithUnits::operator--(NumberWithUnits){return *this;}


NumberWithUnits ariel::NumberWithUnits::operator*(const double x){return *this;}



friend ostream& ariel::NumberWithUnits::operator<<(ostream& output, const NumberWithUnits &x){return output;}
friend istream& ariel::NumberWithUnits::operator>>(istream& input, const NumberWithUnits &x){return input;}
