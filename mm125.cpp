#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[1024];
	while(cin.getline(s,1024)){
		if(s[0]=='#') return 0;
		else{
			int cnt=0,flag=0;
			int i=strlen(s)-1;
			for(;i>-1;i--){
				if(s[i]>'0'){
					if(s[i]>'1'){
						cnt++;
						flag=1;
					}
					else if(flag==1){
						cnt++;
					}
				}
				else flag=0;
			}
			cout << cnt << endl;
		}
	}
	return 0;
} 
