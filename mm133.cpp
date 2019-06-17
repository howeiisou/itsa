#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	cin >> n;
	double sum=1/3,i;
	if(n%2==0){
		for(i=2;i<=n;i+=2){
			sum+=(1/i);
		}
	} 
	else{
		for(i=1;i<=n;i+=2){
			sum+=(1/i);
		}
	}
	printf("%.11f\n",sum);
	return 0;
}
