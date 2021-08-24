#include <iostream>
#include "leetcode.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
//    // array - isUnique test
//    std::cout << isUnique("Hello, World!") << std::endl;
//    std::cout << isUnique("abcf") << std::endl;
//    std::cout << S_isUniqueChars("this is a dog") << std::endl;
//
//    // array - isomorphic
//    std::cout << isomorphic("add", "odd") << std::endl;
//    std::cout << isomorphic("foo", "bar") << std::endl;
//    std::cout << isomorphic("paper", "title") << std::endl;

    // array - isInclude
    std::cout << isInclude("hello", "q") << std::endl;
    std::cout << isIncludeRotate("aabcd", "cda") << std::endl;

    // array - PalindromeNumber
    std::cout << *numOfNth(76543) << " "<< *(numOfNth(76543)+1)<< std::endl;
    std::cout << isPalindrome(76567) << std::endl;
    return 0;
}
