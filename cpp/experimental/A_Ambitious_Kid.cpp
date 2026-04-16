#include<iostream>
#include<cmath>
using namespace std;
int main() {
int t;
cin>>t;

int x;
cin>>x;

int min = abs(x);

for(int i = 0;i < t;i++){
    cin>>x;
    if(abs(x) < min){
        min = abs(x);
    }
}


cout<<min;


return 0;
}

