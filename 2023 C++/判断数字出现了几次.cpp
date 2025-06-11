#include<iostream>
using namespace std;
int main(){
	int n,k,i,j,c=0;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        j=i;
        while(j!=0){
            if(j%10==k){
                c++;
            }
                j=j/10;
            }
        }
    cout<<c;
}