#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
void PrintDelay(string values){
    for(int i=0;i<values.length();i++){
        cout<<values[i];Sleep(10);
    }
}
int main(){
     PrintDelay("Hello Everyone how are you today ");
    return 0;
}
