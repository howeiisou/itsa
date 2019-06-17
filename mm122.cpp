#include<iostream>
using namespace std;

int main(){
	int cnt;
	cin >> cnt;
	while(cnt--){
		long long int f,d,p,x;
		cin >> f >> d >> p >> x;
		int day=0;
		if(d>x){
			if(d>f*x){
				d-=f*x;
				day+=f;
				day+=(d/(p+x));
			}
			else if(d==f*x) day = f;
			else day = d/x;
		}
		else if(d==x) day=1;
		else day=0;
		cout << day << endl;
	}
	return 0;
} 
