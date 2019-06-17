#include <cstring>
#include <iostream>
using namespace std;

int main(){
	char s[256][16];
	int idx[64],i=0,cnt=0,j=0;
	while(cin >> s[i]){
		if(strcmp("NA",s[i])==0){
			cnt++;
			idx[j++]=i;
		}
		i++;
	}
	cout << cnt << endl;
	for(i=0;i<j;i++){
		cout << idx[i] << endl;
	}
	return 0;
} 
