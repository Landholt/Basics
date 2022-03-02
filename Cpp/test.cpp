#include <iostream>

namespace cpp {
    void integer_help();

    class int_example {
        friend void cpp::integer_help();
        private:
            short s_short = -32768;
            unsigned short u_short = 65535;
            int s_int = -66000;
            int u_int = 132000;
    
    };

    void printy() {
        std::cout << "Printy Success" << std::endl;
    }

    void integer_help() {
        int_example i;
        std::cout <<
            "sizeof(short): " << sizeof(i.s_short) << " bytes" << std::endl <<
            "sizeof(int): " << sizeof(i.s_int) << " bytes" << std::endl;
    }
}
