//
// Created by valerie on 2021/8/23.
// isomorphic string: record the last position of each char
//
#include "../leetcode.h"
#include "string"
using namespace std;

bool Isomorphic (string str1, string str2){
 int lastIndexChar1[128] = {};
 int lastIndexChar2[128] = {};
 for(int i = 0; i < str1.length(); i++){
    if(lastIndexChar1[str1[i]] != lastIndexChar2[str2[i]])
        return false;
    else{
        lastIndexChar1[str1[i]] = i+1;
        lastIndexChar2[str2[i]] = i+1;
     }
 }
 return true;
}
