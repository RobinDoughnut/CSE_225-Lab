//
//  main.cpp
//  P1
//
//  Created by Taasin Bin Hossain Alvi on 10/8/22.
// Write a function to check palindrome

#include <iostream>
using namespace std;


void PalCheck(int n) {
    int r, number, sum = 0;
    bool flag = false;
    number = n;
    do
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
        
        
    } while (n != 0);
    if(sum == number) {
        flag = true;
    }
    
    if(flag == true) {
        printf("Number is palindrome! \n");
    } else printf("Not palindrome \n");
    
}

int main(int argc, const char * argv[]) {
    
    PalCheck(121);
    
    return 0;
}
