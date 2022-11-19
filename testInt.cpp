#include <iostream>
#include <string>
#include "Integer.h"


using namespace cosc326;
using namespace std;


int main(void) {

    // Test default Constructor
    Integer first;

    std::string first_print = first.toString();
    printf("%s\n", first_print.c_str());

    // Test constructor passing in another instance

    Integer second(first);

    std::string second_print = second.toString();
    printf("%s\n", second_print.c_str());


    // Test string constructor
    Integer third("1");

    std::string third_print = third.toString();
    printf("%s\n", third_print.c_str());

    // Test assigment

    third = second;
    third_print = third.toString();
    printf("%s\n", third_print.c_str());


    // Test -
    Integer i("5");
    Integer j = -i;

    Integer k = -j;


    std::string j_print = j.toString();
    printf("j: %s\n", j_print.c_str());

    std::string k_print = k.toString();
    printf("k: %s\n", k_print.c_str());

    // Test addition
    Integer plus = i + third;

    Integer x("10");
    Integer y("2");
    Integer plus2 = x + y;

    std::string plus_print = plus.toString();
    printf("plus: %s\n", plus_print.c_str());

    std::string plus2_print = plus2.toString();
    printf("plus2: %s\n", plus2_print.c_str());

    std::string i_print = i.toString();
    printf("i: %s\n", i_print.c_str());

    // Test subtraction
    Integer subtract = x - y;
    Integer subtract2 = y - x;

    std::string subtract_print = subtract.toString();
    printf("x - y: %s\n", subtract_print.c_str());

    std::string subtract2_print = subtract2.toString();
    printf("y - x: %s\n", subtract2_print.c_str());


    // Testing +=
    x += y;

    std::string plusEquals_print = x.toString();
    printf("x += y: %s\n", plusEquals_print.c_str());

    // Testing -=
    x = Integer("10");

    plusEquals_print = y.toString();
    printf("y: %s\n", plusEquals_print.c_str());

    plusEquals_print = x.toString();
    printf("x: %s\n", plusEquals_print.c_str());

    x -= y;

    plusEquals_print = x.toString();
    printf("x -= y: %s\n", plusEquals_print.c_str());


    // Testing << >>
    cout << "first = " << first << '\n';


    // Testing ==
    if(x == y) {
        printf("Equals\n");
    } else {
        printf("Does not equal\n");
    }
    x = Integer("10");
    y = Integer("10");
    if(x == y) {
        printf("Equals\n");
    } else {
        printf("Does not equal\n");
    }

    x = Integer("-10");
    y = Integer("10");
    if(x == y) {
        printf("Equals\n");
    } else {
        printf("Does not equal\n");
    }

    x = Integer("-10");
    y = Integer("-10");
    if(x == y) {
        printf("Equals\n");
    } else {
        printf("Does not equal\n");
    }

    //Testing !=

    x = Integer("10");
    y = Integer("10");
    if(x != y) {
        printf("Does not equal\n");
    } else {
        printf("Equals\n");
    }

    x = Integer("-10");
    y = Integer("10");
    if(x != y) {
        printf("Does not equal\n");
    } else {
        printf("Equals\n");
    }

    x = Integer("-10");
    y = Integer("-10");
    if(x != y) {
        printf("Does not equal\n\n");
    } else {
        printf("Equals\n\n");
    }

    // Testing < & >

    x = Integer("10");
    y = Integer("10");
    if(x < y) {
        printf("Less than\n");
    } else {
        printf("Not less than\n");
    }


    x = Integer("1");
    y = Integer("10");
    if(x < y) {
        printf("Less than\n");
    } else {
        printf("Not less than\n");
    }

    x = Integer("10");
    y = Integer("1");
    if(x < y) {
        printf("Less than\n\n");
    } else {
        printf("Not less than\n\n");
    }

    x = Integer("10");
    y = Integer("10");
    if(x > y) {
        printf("Greater than\n");
    } else {
        printf("Not Greater than\n");
    }


    x = Integer("1");
    y = Integer("10");
    if(x > y) {
        printf("Greater than\n");
    } else {
        printf("Not Greater than\n");
    }

    x = Integer("10");
    y = Integer("1");
    if(x > y) {
        printf("Greater than\n\n");
    } else {
        printf("Not Greater than\n\n");
    }

    // Testing <= & >=
    x = Integer("10");
    y = Integer("10");
    if(x <= y) {
        printf("Less than or equals\n");
    } else {
        printf("Not less than or equals\n");
    }


    x = Integer("1");
    y = Integer("10");
    if(x <= y) {
                printf("Less than or equals\n");

    } else {
        printf("Not less than or equals\n");
    }

    x = Integer("10");
    y = Integer("1");
    if(x <= y) {
        printf("Less than or equals\n\n");

    } else {
        printf("Not less than or equals\n\n");
    }

    x = Integer("10");
    y = Integer("10");
    if(x >= y) {
        printf("Greater than or equals\n");
    } else {
        printf("Not Greater than or equals\n");
    }


    x = Integer("1");
    y = Integer("10");
    if(x >= y) {
        printf("Greater than or equals\n");
    } else {
        printf("Not Greater than or equals\n");
    }

    x = Integer("10");
    y = Integer("1");
    if(x >= y) {
        printf("Greater than or equals\n\n");
    } else {
        printf("Not Greater than or equals\n\n");
    }

    x = Integer("12");
    y = Integer("15");
    Integer times = x * y;
    std::string times_value = times.toString();
    printf("Times: %s\n", times_value.c_str());

    Integer divide = y / x;

    std::string divide_value = divide.toString();
    printf("Divide: %s\n", divide_value.c_str());


    Integer divide2 = Integer("08");

    std::string divide_value2 = divide2.toString();
    //printf("Divide2: %s\n", divide_value2.c_str());
    cout << divide2;
    Integer divide3 = Integer("100") / Integer("2");
    printf("Divide2 = %s\n", divide3.toString().c_str());

    Integer mod_value = Integer("463") % Integer("86");
    printf("mod = %s\n", mod_value.toString().c_str());

    Integer gcd_value = gcd(Integer("983"), Integer("65"));
    printf("gcd = %s\n", gcd_value.toString().c_str());

    Integer divide4 = Integer("0") / Integer("2");
    printf("Divide2 = %s\n", divide4.toString().c_str());

    Integer divide5 = Integer("11") / Integer("11");
    printf("Divide2 = %s\n", divide5.toString().c_str());
    divide5 = Integer("100") / Integer("100");
    printf("Divide3 = %s\n", divide5.toString().c_str());

    if (Integer("-100") > Integer("100")) {
        printf("Stupid\n");
    } else {
        printf("Smart\n");
    }

    Integer divide6 = Integer("44") / Integer("4");
    printf("divide6 = %s\n", divide6.toString().c_str());

    Integer divide7 = Integer("-20") / Integer("4");
    printf("divide7 = %s\n", divide7.toString().c_str());

}