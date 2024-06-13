#include<iostream>
using namespace std;
int main(){
    for(int i=100;i<=500;i++){
        int x=i,sum=0;
        while(x>0){
            int y=x%10;
            sum+=(y*y*y);
            x=x/10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
        
    }
}