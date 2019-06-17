#include<iostream>
using namespace std;

int main(){
	long long int n;//,tmp,sum=0,i;
	int cnt;
	cin >> cnt;
	while(cnt){
		//sum=0;
		cin >> n;
		//for(i=1;i<=n-1;i++){
		//	tmp=n%i;
	//		if(tmp==0) sum+=i;
	//	}
		if(n==6||n==28||n==496||n==8128||n==33550336||n==8589869056)
			cout << "perfect\n";
		else
			cout << "nonperfect\n";
		cnt--;
	}
	return 0;
}
