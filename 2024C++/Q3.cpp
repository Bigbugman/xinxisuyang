#include <iostream>
#include <vector>
using namespace std;
int n;
int a[1010][1010];
vector<int> res;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		char flag;
		int x,y,k;
		cin>>flag;
		if(flag=='M') {
			cin>>x>>y>>k;
			a[x][y]=k;
		} else if(flag=='N') {
			cin>>x>>y;
			res.push_back(a[x][y]);
		}
 
	}
 
	for (int i = 0; i < res.size(); ++i) {
		cout << res[i];
	}
 
	return 0;
}