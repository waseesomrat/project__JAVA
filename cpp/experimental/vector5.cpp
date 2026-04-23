#include<iostream>
#include<vector>

using namespace std;

int main() {

vector<int>v1 = {1,2,3,4,5};

vector<int>v2 = {2,3,4};

v2 = v1;
v2.assign(v1.begin() + 1 , v1.end() - 1);

for(auto i : v2){
    cout<<i<<endl;


}
    cout<<*v2.begin() + 2<<endl;


}