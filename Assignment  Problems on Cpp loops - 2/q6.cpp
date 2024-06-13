#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int k=i;k<4;k++){
            cout<<" ";
        }
        for(char l='A';l<'A'+(i*2+1);l++){
            cout<<l;
        }
        cout<<endl;
    }
    for(int a=4;a>0;a--){
        for(int b=a;b<5;b++){
            cout<<" ";
        }
        for(char c='A';c<'A'+(a*2-1);c++){
            cout<<c;
        }
        cout<<endl;
    }   
}