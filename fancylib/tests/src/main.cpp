#include <iostream>
#include <string>
#include "fancyutils.h"
#include "coreutils.h"


template<typename T> void EXPECT_EQ(T value1, T value2, const std::string& name)
{
    std::string result = value1 == value2 ? "OK" : "FAILED";
    std::cout << "Test " << name << " " << result << "\n";
}

int main() {

    // testing public API
    EXPECT_EQ(fancy::get_number(), 42, "PublicAPI");    

    // testing private API
     EXPECT_EQ(fancy::generate_sequence(), {42, 42, 42}, "PrivateAPI");
}
