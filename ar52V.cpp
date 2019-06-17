#include <cstring>
#include <iostream>
using namespace std;

void trans(char c){
	if(c=='A')	printf(" 10");
	if(c=='B')	printf(" 0111");
	if(c=='C')	printf(" 0101");
	if(c=='D')	printf(" 011");
	if(c=='E')	printf(" 1");
	if(c=='F')	printf(" 1101");
	if(c=='G')	printf(" 001");
	if(c=='H')	printf(" 1111");
	if(c=='I')	printf(" 11");
	if(c=='J')	printf(" 1000");
	if(c=='K')	printf(" 010");
	if(c=='L')	printf(" 1011");
	if(c=='M')	printf(" 00");
	if(c=='N')	printf(" 01");
	if(c=='O')	printf(" 000");
	if(c=='P')	printf(" 1001");
	if(c=='Q')	printf(" 0010");
	if(c=='R')	printf(" 101");
	if(c=='S')	printf(" 111");
	if(c=='T')	printf(" 0");
	if(c=='U')	printf(" 110");
	if(c=='V')	printf(" 1110");
	if(c=='W')	printf(" 100");
	if(c=='X')	printf(" 0110");
	if(c=='Y')	printf(" 0100");
	if(c=='Z')	printf(" 0011");
}
int main(){
	int cnt=0;
	cin >> cnt;
	while(cnt--)
	{
		char s[200];
		cin >> s;
		int l=strlen(s),i=0;
		cout << s << ":";
		for(i=0;i<l;i++)
			trans(s[i]);
		cout << endl;
	}
	return 0;
}
