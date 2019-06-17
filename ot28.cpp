#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[1024];
	while(cin.getline(s,1024)){
		int l=strlen(s)-1;
		int i,cnt=0;
		for(i=0;i<l;i++){
			int a=0,tmp=(int)s[i],j=1;
			while(tmp>=1){
				a+=(tmp%2)*j;
				tmp/=2;
				j*=10;
			}
			cout << a << endl;
			char str[1024];
			sprintf(str,"%d",a);
			int l2=strlen(str);
			for(j=0;j<l2;j++){
				if(str[j]=='1') cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
} 
