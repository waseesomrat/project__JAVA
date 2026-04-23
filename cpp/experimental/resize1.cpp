#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main() {
vector<int>v = {1,2,3,4,5};

    int x = 100;
    v.resize(6,x);

    for(auto i : v){
        cout<<i<<endl;
    }

}