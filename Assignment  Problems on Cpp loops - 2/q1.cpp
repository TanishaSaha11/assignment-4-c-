#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int fact=1;
    if(n==0){
        fact=0;
    }
    else{
        for(int i=2;i<=n;i++){
        fact*=i;
        }
    }
    
    cout<<fact;
    
}