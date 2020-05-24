#include <iostream>


using namespace std;




bool isPerfectSquare(int num){
    int min = 1;
    int max = INT32_MAX;

    while(min<=max){
        int mid = min + (max - min)/2;

        cout<<mid;

        int64_t square = mid*mid;

        // cout<<square;

        if(square==num) {
            return true;
        }

        if(square < num) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }

    }
    return false;
}


int main() {
    bool result = isPerfectSquare(2147395600);

    cout<<"Result : "<<result;
}