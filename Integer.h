
// Most compilers understand the once pragma, but just in case...
#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <assert.h>
#include <vector>

namespace cosc326 {

    class Integer {

    public:

        Integer();                             // Integer i;
        Integer(const Integer &i);             // Integer j(i);
        explicit Integer(const std::string &s);         // Integer k("123");

        ~Integer();

        Integer &operator=(const Integer &i);  // j = i;

        // Unary operators
        Integer operator-() const;                   // -j;
        Integer operator+() const;                   // +j;

        // Arithmetic assignment operators
        Integer &operator+=(const Integer &i); // j += i;
        Integer &operator-=(const Integer &i); // j -= i;
        Integer &operator*=(const Integer &i); // j *= i;
        Integer &operator/=(const Integer &i); // j /= i;
        Integer &operator%=(const Integer &i); // j %= i;

        // lhs < rhs -- a 'friend' means operator isn't a member, but can access the private parts of the class.
        // You may need to make some other functions friends, but do so sparingly.
        friend bool operator<(const Integer &lhs, const Integer &rhs);

        std::string toString() const;

        void setValue(std::string val);

        bool isPositive() const;

        static Integer addition(const Integer &lhs, const Integer &rhs);

        static Integer multiply(const Integer &lhs, const Integer &rhs);

        static bool compare(const Integer &lhs, const Integer &rhs);

        static Integer *divide(const Integer &lhs, const Integer &rhs);

        static Integer diff(const Integer &lhs, const Integer &rhs);

        Integer absValue() const;

        std::string removeLeadingZeros(std::string str);


      
    private:

        std::string value = "0";

        
        static bool isStringPositive(std::string str);

        std::string removePositiveSign(std::string str);


        static bool isInteger(std::string str);

        std::string parseValue(std::string value);

        std::string strAbsValue(std::string str) const;
    };

    // Binary operators
    Integer operator+(const Integer &lhs, const Integer &rhs); // lhs + rhs;
    Integer operator-(const Integer &lhs, const Integer &rhs); // lhs - rhs;
    Integer operator*(const Integer &lhs, const Integer &rhs); // lhs * rhs;
    Integer operator/(const Integer &lhs, const Integer &rhs); // lhs / rhs;
    Integer operator%(const Integer &lhs, const Integer &rhs); // lhs % rhs;

    std::ostream &operator<<(std::ostream &os, const Integer &i);  // std::cout << i << std::endl;
    std::istream &operator>>(std::istream &is, Integer &i);        // std::cin >> i;

    bool operator>(const Integer &lhs, const Integer &rhs); // lhs > rhs
    bool operator<=(const Integer &lhs, const Integer &rhs); // lhs <= rhs
    bool operator>=(const Integer &lhs, const Integer &rhs); // lhs >= rhs
    bool operator==(const Integer &lhs, const Integer &rhs); // lhs == rhs
    bool operator!=(const Integer &lhs, const Integer &rhs); // lhs != rhs

    Integer gcd(const Integer &a, const Integer &b);  // i = gcd(a, b);
}

static cosc326::Integer ZERO = cosc326::Integer("0");
static cosc326::Integer ONE = cosc326::Integer("1");

#endif
