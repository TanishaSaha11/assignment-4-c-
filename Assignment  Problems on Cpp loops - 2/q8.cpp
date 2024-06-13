#include<iostream>
using namespace std;
int main(){
    int n; //6
    cout<<"Please enter number of lines:";
    cin>>n;
    int num=2;
    for(int i=1;i<n+1;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        int count=i; //no.of available seats
        while(count>0){
            int prime=0;
            if(num==2){
                cout<<num<<" ";
                count--;
            }
            else{
                for(int k=2;k<num;k++){
                    if(num%k==0){
                        prime=1;
                        break;
                    }
                }
                if(prime==0){
                    cout<<num<<" ";
                    count--;
                }
            }
            num++;
        }
        cout<<endl;
    }
}