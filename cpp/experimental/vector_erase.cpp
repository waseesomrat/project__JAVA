#include<iostream>
#include<vector>

using namespace std;

int main() {


    vector<int>v = {1,2,3,5,6};

    v.erase(v.begin());
for(auto i : v){
    cout<<i<<endl;
}

}