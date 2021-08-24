//
// Created by valerie on 2021/8/23.
//字符串循环位移包含
//1. 字符串循环移位
//2. check 字符串包含
//s1 = AABCD, s2 = CDAA
//Return : true

#include "../leetcode.h"
#include "string"
bool isIncludeRotate(string str1, string str2){
    for(int i = 1; i < str1.length(); i++){
        if(isInclude(str1, str2))
            return true;
        //put the first element to the back
        char temp = str1.front();
        for(int j = 0; j< str1.length()-1; j++){
            str1[j] = str1[j+1];
        }
        str1.back() = temp;
    }
    return false;

}

bool isInclude(string str1, string str2){
    //check if str1 includes str2
    if(str1.length() < str2.length())
        return false;
    for(int i = 0; i < str1.length()-str2.length()+1; i++){
        if(str1[i] == str2.front()){
            for(int j = 1; j < str2.length(); j++){
                if(str1[i+j] != str2[j])
                    return false;
            }
            return true;
        }
    }
    return false;

}