#include<iostream>
#include<vector>

using namespace std;

int main() {


int t;
cin>>t;
vector<int>vct(t);
for(auto &i : vct){
    cin>>i;
}
for(auto &i : vct){
    i++;
    cout<<i<<endl;
}
for(auto i : vct){
    cout<<i<<endl;
}
vct.clear(); //destroys prev vector.
for(auto i : vct){
    cout<<i<<endl;
}

}