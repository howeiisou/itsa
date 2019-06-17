#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int n;
	char s[1024];
	while(cin.getline(s,1024)){
		if(s[0]=='#')return 0;
		else{
		n=0;
		int i,flag=0,b;
		for(i=0;i<strlen(s)-1;i++){
			n*=3;
			if(s[i]=='1') n+=1;
			else if(s[i]=='2') n+=2;
		}
		if(n==1){
			cout << "0" << endl;
			flag=1;
		}
		else{
			for(i=2;i<=sqrt(n);i++){
				if(n%i==0){
					cout << "0" << endl;
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			cout << "-1\n";
		}
	}
	return 0;
}
