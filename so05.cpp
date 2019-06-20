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
    int i,j,ncase,n;
    cin >> ncase;
    while(ncase--){
        j = 0;
        cin >> n;
        int a1[n],a2[n],a3[2*n];
        for(i=0;i<n;i++){
            cin >> a1[i];
            a3[j++] = a1[i];
        }
        for(i=0;i<n;i++){
            cin >> a2[i];
            a3[j++] = a2[i];
        }
        qsort(a3,j,sizeof(int),cmp);
        cout << a3[n-1] << endl;
    }
    return 0;
}
