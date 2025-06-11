// 因为题目没有说明输入的两个数的大小顺序，因此，对输入的两个数进行排序；
// 枚举所有位于已知两个数之间的所有数，并且保证4个数的和为30；
// 变量flag的作用是用于确认，如果无解，则输出0 0

#include<iostream>
using namespace std;
int main(){
	int a,b,flag=0;
	cin>>a>>b;
	if(a>b)
		swap(a,b);
	for(int i=a+1;i<b;i++){
		for(int j=i;j<b;j++){
			if(a+b+i+j==30){
				flag=1;
				cout<<i<<" "<<j<<endl;
			}
		}
    }
    if(flag==0){
        cout<<0<<" "<<0;
    }
    
	return 0;
}