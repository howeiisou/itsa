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
    int ncase,i,n,tmp,sum;
    cin >> ncase;
    while(ncase--){
        cin >> n;
        int job[n];
        for(i=0;i<n;i++)
            cin >> job[i];
        qsort(job,n,sizeof(int),cmp);
        tmp = sum = 0;
        for(i=0;i<n;i++){
            sum += tmp;
            tmp += job[i];
        }
        cout << sum << endl;
    }
    return 0;
}
