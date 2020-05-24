#include <iostream>
#include <vector>


using namespace std;

void isHappy(int num) {

    int value = num;

    int mod = 0;

    int result = 0;
    
    while(value>0) {
        mod = value%10;
        result = result + mod*mod;
        value = value/10;
        // cout<<value;
    }

    cout<<result;



   
}


int main(){

    isHappy(10);
}