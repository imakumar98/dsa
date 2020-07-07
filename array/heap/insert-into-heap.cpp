#include <iostream>

using namespace std;

int main()
{
    int heap[10] = {0,30, 20, 15, 5, 10, 12, 6};

    int value = 40;

    int next_index = 8;

    heap[next_index] = value;

    

    while(heap[next_index/2]<heap[next_index])
    {
        int temp = heap[next_index];
        heap[next_index] = heap[next_index/2];
        heap[next_index/2] = temp;
    }


    //Print heap Values
    for(int i=0; i<10; i++)
    {
        cout<<heap[i]<<endl;
    }
}