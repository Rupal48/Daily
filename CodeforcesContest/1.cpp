#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n,m,k;
        cin >> n >> m >> k;
        int pocket1[n] , pocket2[m];
        for (int j=0;j<n;j++) cin >> pocket1[j];
        for (int j=0;j<m;j++) cin >> pocket2[j];

        int count = 0;

        for (int j=0;j<n;j++) {
            for (int l=0;l<m;l++) {
                if(pocket1[j]+pocket2[l] <= k) {
                    count++;
                }
            }
        }

        cout << count << endl;
    } 
}