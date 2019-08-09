#include "fancyutils.h"
#include "coreutils.h"
#include <iostream>

template<typename T> void EXPECT_EQ(T value1, T value2, const std::string& name)
{
    std::string result = value1 == value2 ? "OK" : "FAILED";
    std::cout << "Test " << name << " " << result << "\n";
}

int main(int argc, char** argv) 
{
    EXPECT_EQ(fancy::get_number(), 42, "public API");
    EXPECT_EQ(*fancy::fizzbuzz(42), std::string("fizzbuzz"), "private API");
}
