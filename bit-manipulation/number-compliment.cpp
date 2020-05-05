#include <iostream>


int main() {
   

}



int compliment(int num) {
     int copy=num ;
        int pos=0 ;
       
        while(copy){
            num=num^(1<<pos) ;
            pos++ ;
            copy=(copy>>1) ;
        }
        return num ;
}