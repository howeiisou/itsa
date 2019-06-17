#include<iostream>
using namespace std;

int main(){
	int cnt;
	cin >> cnt;
	while(cnt--){
		int n,a=2;
		cin >> n;
		int i;
		for(i=0;i<n-1;i++){
			a*=2;
		}
		cout << a << endl;
	} 
	return 0;
}
