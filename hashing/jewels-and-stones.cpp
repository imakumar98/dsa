#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main() 
{
    string J = "aA";
    string S = "aAAbbbb";

    unordered_map<char,char> jewels;
            
        int total = 0;
        
        for(int i=0; i<J.length(); i++){
            jewels.insert({J[i], J[i]});
        }
        
        for(int i = 0; i<S.length(); i++){
            if(jewels.find(S[i])!=jewels.end()){
                total = total + 1;
            }
        }
        
        cout<<"Total"<<total;
}