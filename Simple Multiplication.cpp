#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;


int simpleMultiplication(int a){
    return (a&1)? a=a+(a<<3): a<<3;
    // return a * ( 8 + ( a & 1 ) );
    
}
//1     01
//2   10
//3     11
//8     100
/*
check if the number is even or not 
//1&1 =1
//2&1 =0
//3&1 =1
//4&1 =0
*/

int main() {
    
    cout<<simpleMultiplication(1);
    return 0;

}
