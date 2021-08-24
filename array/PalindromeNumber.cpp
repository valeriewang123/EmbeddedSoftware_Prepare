//
// Created by valerie on 2021/8/23.
//09. easy!tostring,  Follow up: Could you solve it without converting the integer to a string?

#include "../leetcode.h"

#include "math.h"

//without converting it to string
//input: 121
//output: true
//input: -121
//output: false
bool isPalindrome(int x) {
    if(x<0)return false;
    else if(x==0)return true;
    else {
        int size = log10(x) + 1;
        int *num = numOfNth(x);
        for (int i = 0; i < size / 2; i++) {
            if (*(num + i) != *(num + size - 1 - i))
                return false;
        }
        return true;
    }
}
// return number on each position of a integer
// *numOfNth(7654) = 7, *(numOfNth(7654)+1) = 6 ...
int* numOfNth(int x){
    int size = log10(x)+1;
    int* num= new int[size]; // new dynamic array
    int index = size;
    while(index){
        *(num+size-index) = x/pow(10,index-1);
        x = x - *(num+size-index) * pow(10,index-1);
        index--;
    }
    return num;
}



//smart solution
bool isPalindrome(int x) {
    if (x == 0) {
        return true;
    }
    if (x < 0 || x % 10 == 0) {
        return false;
    }
    int right = 0;// divide number into two parts, right part should reverse, if left ==  right then true
    while (x > right) {
        right = right * 10 + x % 10;
        x /= 10;
    }
    return x == right || x == right / 10; //even digit or odd digit
}