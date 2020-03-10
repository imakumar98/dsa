//Function to reverse array

#include <iostream>

using namespace std;


void reverse(int num[5]);


int main() {

    int a[5] = {1,2,3,4,5};
    int b[5];

    for(int i = 4; i >= 0; i--) {
        b[4-i] = a[i];

    }


    //Print B array
    for(int j=0; j<5; j++) {
    
        cout<<b[j]<<"\n";
    }

}



// void reverse(int num[], ){
//     for(int i=0; i<5; i++) {
//         cout<<num[i]<<"\n";
//     }
// }