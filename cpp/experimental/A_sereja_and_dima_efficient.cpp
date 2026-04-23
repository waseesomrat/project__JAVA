#include<iostream>
#include<vector>

using namespace std;

int main() {

int t;cin >>t;
vector<int> v(t);
for(int i = 0;i < t;i++){
cin>>v[i];
}

int l = 0;
int r = t - 1;

int sereja = 0,dima = 0;

for(int turn = 0; l <= r;turn++){
    int take = 0;
    if(v[l] > v[r]){
         take = v[l];
         l++;
    }
    else{
        take = v[r];
        r--;}
        if(turn % 2 == 0)
            sereja += take;
        else
        dima += take;
}
cout<<sereja<<" "<<dima<<endl;
}