#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int m = 1;
        int counter = n/2 - 1;
        int ans = pow(2,n) - pow(2,n-1);
        n = n - 2;
        while(counter--){
            ans = ans + pow(2,m) - pow(2,n);
            m++;
            n--;
        }
        cout << ans << endl;
    }
    return 0;
}
