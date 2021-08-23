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
    

