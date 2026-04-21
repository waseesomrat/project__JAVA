#include<iostream>
#include<cstring>

using namespace std;
int main() {

char x[1000];
cin>>x;
int count = 0;
int val[26] = {0};
int l = strlen(x);
for(int i = 0; i < l ;i++){
    val[x[i] - 'a']++;
}

for(int i = 0 ; i < 26;i++){
    if(val[i] > 0){
        count++;
    }
}
if(count % 2 == 0){
    cout<<"CHAT WITH HER!";
}
else
cout<<"IGNORE HIM!";

}