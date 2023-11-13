#include <iostream>
#include <string>
#include <vector>

using namespace std;

void divide_con(vector<int>& pool,int s){
    for(int i=0;i<s;i++){
        for(int si=0;si<s-1-i;si++){
            if(pool.at(si)>pool.at(si+1)){
                swap(pool.at(si),pool.at(si+1));
            };
        }
    }
};

int main(){
    vector<int> vec;

    //testing....
        for(int i=5;i>=0;i--){
            vec.push_back(i);
        };

    int size=vec.size();
    divide_con(vec,size);

    //reading....
    for(int si=0;si<size;si++) cout<<vec.at(si);

    return 0;
}