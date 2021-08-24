# EmbeddedSoftware_Prepare
This repository is a private resources which is prepared for Embedded software interview.

1. array - isUnique
   - my idea1: string, hash, recursive function
   - problem:  only first call leads to correct result, multiple calls don't.
     As static variable in function isUnique stays until program terminates.
     
- member functions of string: 
  - str.length()
  - str.erase(pos, num) erases num of chars starting from pos and return the rest to str.
  - str.front() returns the first element of char[]

> Hints: hash, bit vector, solve in O(NlogN)
    

2. array - Isomorphic Strings
    - idea: record the last position of each char. So int[128] is enough.
    
3. array - isIncludeInRotate (easy)
    - idea: first rotate, for each rotation, check if includes
      - ifInclude() use double for loop, O(N^2)
      - str.back() get the last element of string
    
4. array - PalindromeNumber (without to string, medium)
    - idea: 
      - store number on each position to an int array
      - check if it is palindrome
      - use of pow(a,b) and log10() from math.h