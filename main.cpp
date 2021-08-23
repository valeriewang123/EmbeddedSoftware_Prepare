#include <iostream>
#include "leetcode.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    // array - isUnique test
    std::cout << isUnique("Hello, World!") << std::endl;
    std::cout << isUnique("abcf") << std::endl;
    std::cout << S_isUniqueChars("this is a dog") << std::endl;

    // array - isomorphic
    std::cout << Isomorphic("add", "odd") << std::endl;
    std::cout << Isomorphic("foo", "bar") << std::endl;
    std::cout << Isomorphic("paper", "title") << std::endl;


    return 0;
}
