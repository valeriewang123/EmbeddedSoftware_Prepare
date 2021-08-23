//
// Created by valerie on 2021/8/23.
// determine if a string has all unique characters.
//
#include "../leetcode.h"
#include "string"
using namespace std;

bool isUnique(string str){
    static int character[128] = {}; // to zero initialize, ascii table includes 128 different chars
    if(str.length() == 0)
        return true;
    if(str.front()>127 || str.front() <0 )
    {
        printf("Error, Character cannot be recognized!");
        return false;
    }
    if(character[str.front()] == 0)
    {
        character[str.front()] += 1;
        return isUnique(str.erase(0,1));
    }
    else
        return false;
}

bool S_isUniqueChars(string str){
    if(str.length() > 128)
        return false;
    bool char_set[128] ={};
    for(int i = 0; i< str.length(); i++) {
        int val = str.at(i);
        if (char_set[val])
            return false;
        else
            char_set[val] = true;
    }
    return true;
}