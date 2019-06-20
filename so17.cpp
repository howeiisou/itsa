#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
    int ncase,i,j,n,len,flag;
    cin >> ncase;
    while(ncase--){
        cin >> n;
        char set[n][50];
        flag = i = 0;
        while(n--){
            cin >> set[i];
            if(i >= 1 && flag != 1){
                for(j=0;j<i;j++){
                    if (set[j][0] != set[i][0])
                        continue;
                    len = strlen(set[j]) > strlen(set[i]) ? strlen(set[i]) : strlen(set[j]);
                    if (strncmp(set[i],set[j],len) == 0)
                        flag = 1;
                }
            }
            i++;
        }
        if (!flag)
            cout << "Yes\n";
        else
            cout <<"No\n";
    }
    return 0;
}
