#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int num1=num,reverse=0;
    //num1=num;
    while(num1>0){
        reverse=reverse*10+(num1%10);
        num1=num1/10;
        
    }
    cout<<"Reverse of digits:"<<reverse;
}