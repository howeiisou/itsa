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
    int i,n,sum=0;
    cin >> n;
    int dis[n];
    for(i=0;i<n;i++)
        cin >> dis[i];
    qsort(dis,n,sizeof(int),cmp);
    for(i=1;i<n;i++)
        sum += (dis[i] - dis[i-1]);
    sum += (dis[n-1] - dis[0]);
    cout << sum << endl;
    return 0;
}
