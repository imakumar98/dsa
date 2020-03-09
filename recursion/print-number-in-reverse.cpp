#include <iostream>

using namespace std;

void fun(int);


int main() {
    int a = 5;
    fun(a);

    return 0;
}


void fun(int num) {


    if(num>0) {
        cout<<num;

        fun(num-1);
    }
}