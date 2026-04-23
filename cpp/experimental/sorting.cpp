#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {


vector<int>v = {2,2 , 6 , 1 , 4 , 9};

sort(v.begin(),v.end());

for(auto i : v){
    cout<<i<<endl;
}

}