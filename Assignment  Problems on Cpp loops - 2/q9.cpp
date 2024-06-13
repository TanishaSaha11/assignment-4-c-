#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    for(int i=2;i<num;i++){
        int found=1;
        int x=i;
        int rem=num-i;
        if(x==2){  
            found=1;
        }
        else{
            for(int j=2;j<x/2;j++){
                if(x%j==0){
                    found=0;
                    break;
                }
            }
        }
        if(found==1){
            for(int k=2;k<=rem/2;k++){
                if(rem%k==0){
                    found=0; //not prime
                    break;
                }
            }
        }
        if(found==1){
            cout<<num<<'='<<i<<'+'<<rem<<endl;;
        }

    }
}
