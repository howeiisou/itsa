#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;

int cmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);
} 
int main(){
	int arr[1024],cnt=0;
	while(cin >> arr[cnt]) cnt++;
	qsort(arr,cnt,sizeof(int),cmp);
	cout << arr[cnt/2] << endl;
	return 0;
}
