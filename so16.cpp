#include <iostream>
#include<cstdlib>
using namespace std;

int cmp(const void *a, const void *b){
    int *p1 = (int *)a;
    int *p2 = (int *)b;
    if (*p1 > *p2)
        return 1;
    else if (*p1 < *p2)
        return -1;
    else
        return 0;
}

int main(){
    int ncase,n,k,i;
    cin >> ncase;
    while(ncase--){
        cin >> n >> k;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        qsort(arr,n,sizeof(int),cmp);
        cout <<arr[n-k] << endl;
    }
    return 0;
}
