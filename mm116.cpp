#include<cstring>
#include<iostream>
using namespace std;

int main(){
	long int cnt,i;
	char s[256];
	cin >> cnt;
	while(cnt--){
		int a=0,b=0;
		cin >> s;
		int l=strlen(s);
		for(i=0;i<l;i+=2) a+=s[i]-48;
		for(i=1;i<l;i+=2) b+=s[i]-48;
		if((a-b)%11==0) cout << "true\n";
		else cout << "false\n";
	}
	return 0;
}
