#include <iostream>




using namespace std;


int main(){


	int res = fact(5);
	cout<<"Factorial of 5 is :"<<res;
	
}



int fact(int num) {
	if(num==0){
	return 0;
	}
	return num*fact(num-1);

}
