#include <iostream>
#include <string>
#include <map>

using namespace std;



template<typename K, typename V>
void print_map(std::unordered_map<K,V> const &m)
{
    for (auto const& pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

bool canConstruct(string ransomNote, string magazine){


   
    // return not len(Counter(ransomNote) - Counter(magazine))
        


}


int main(){

    bool res1 = canConstruct("a", "aab");
    // cout<<"Result of Res1"<<res1;

   

}



