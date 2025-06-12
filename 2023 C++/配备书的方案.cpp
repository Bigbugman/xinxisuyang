#include <iostream>
using namespace std;
int main(){
    int n=12,m=14;
    if (n%2 && m%2 ) {
        cout << "YES-1" << endl;
    } 
    else if (n%2== 1 && m%2 == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}