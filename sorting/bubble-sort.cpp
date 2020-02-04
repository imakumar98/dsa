#include <iostream>

using namespace std;


int main() {

	int arr[5] = {8, 7, 6, 4, 3};

	int length = 5;

	int swaps = 0;

	for(int i=0; i<length-1; i++) {

		for(int j=0; j<length-1; j++){
			if(arr[j]>arr[j+1]) {
				
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

			} 
		}


	}

	//Print Array
	for(int i=0; i<length; i++) {

		cout<<arr[i]<<" ";
	}


	cout<<"\n"<<"Number of swaps : "<<swaps;

	
}
