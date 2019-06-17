#include<iostream>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	int base,i=1,b=0;
	cin >> base;
	while(n>=1){
		b+=(n%base)*i;
		n/=base;
		i*=10;
	}
	cout << b << endl;
	return 0; 
} 
