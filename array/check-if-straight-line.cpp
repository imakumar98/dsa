#include <iostream>
#include <vector>


using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    

    for(int i=0; i<coordinates.size()-2; i++){
        
        int s1 = (coordinates[i+1][1] - coordinates[i][1])*(coordinates[i+2][0]-coordinates[i+1][0]);
        int s2 = (coordinates[i+2][1] - coordinates[i+1][1])*(coordinates[i+1][0]-coordinates[i][0]);

        if(s1!=s2) {
            return false;
        }


    }

    return true;
}


int main(){

    vector<vector<int>> coordinates{{-4,-3},{1,0},{3,-1}, {0,-1}, {-5,2}, {6,7}};

    bool result = checkStraightLine(coordinates);

    cout<<result;
}