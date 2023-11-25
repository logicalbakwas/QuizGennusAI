#include<iostream>
#include<vector>

using namespace std;
 
vector<int> myVector(5,0);


int main(){
    myVector.push_back(1);
    for(int i=0; i<myVector.size(); i++){
        cout<<myVector[i]<<endl;
    }
    return 0;
}
