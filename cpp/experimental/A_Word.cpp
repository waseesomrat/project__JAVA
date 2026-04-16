#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;
int main() {

    char arr[1100];
    int upper = 0;
    cin>>arr;
    int len = strlen(arr);
    for(int i = 0 ; i < strlen(arr);i++){
        if(isupper(arr[i])){
            upper++;
        }
    }
    if(upper > strlen(arr)/2){
        for(int i = 0;i < len;i++){
            arr[i] = toupper(arr[i]);
        }}
    else 
        for(int i = 0;i < len;i++){
            arr[i] = tolower(arr[i]);
        }

        cout<< arr;
    return 0;
}