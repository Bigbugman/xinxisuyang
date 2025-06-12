#include<iostream>
using namespace std;
int a,b,c;
int main() {
	cin>>a>>b>>c;
	if(a==b&&b==c) {
		cout<<"Equilateral glass"<<endl;
	} else if(a==b || b==c || c==a) {
		cout<<"Isosceles glass"<<endl;
	} else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
		cout<<"Right angle glass"<<endl;
	} else {
		cout<<"None"<<endl;
	}
	return 0;
 
}