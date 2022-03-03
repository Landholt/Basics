#include <iostream>

namespace cpp {
    void numeral_help();

    class number_example {
        friend void cpp::numeral_help();
        private:
            short s_short = 0b1111111111111111;
            unsigned short u_short = 0b1111111111111111;
            int s_int = -66000; //signed is default
            unsigned int u_int = 132000;
            long s_long = -1000;
            unsigned long long u_ll = 1000;
            float f = -3.5;
            double d = 3.25;
            long double ld = 3.125;
    };

    void printy() {
        std::cout << "Printy Success" << std::endl;
    }

    void numeral_help() {
        number_example n;
        std::cout <<
            "sizeof(short): " << sizeof(n.s_short) << " bytes" << std::endl <<
            "sizeof(int): " << sizeof(n.s_int) << " bytes" << std::endl <<
            "sizeof(long): " << sizeof(n.s_long) << " bytes" << std::endl <<
            "sizeof(long long): " << sizeof(n.u_ll) << " bytes" << std::endl <<
            "sizeof(float): " << sizeof(n.f) << " bytes" << std::endl <<
            "sizeof(double): " << sizeof(n.d) << " bytes" << std::endl <<
            "sizeof(long double): " << sizeof(n.ld) << " bytes" << std::endl;
    }
}
