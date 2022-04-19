/* In this Algorithm the idea is to calculate, for each array position, the
maximum sum of a subarray that ends at that position. After this, the answer
for the problem is the maximum of those sums. 

The algorithm only contains one loop that goes through the input, so the time
complexity is O(n). This is also the best possible time complexity, because any
algorithm for the problem has to examine all array elements at least once.
*/

#include <bits/stdc++.h>
using namespace std;

void kadan(int n){
    int ar[n];
    cout << "Enter the Array elements : ";
    for(int i = 0; i < n; i++)
        cin >> ar[i];
        
    int best = 0, sum = 0;
    for(int i = 0; i < n; i++){
        sum = max(ar[i], sum + ar[i]);
        best = max(best, sum);
    }
    cout <<"\nMaximum subarray sum : " << best;
}

int main(){
    cout << "Enter the Array size : ";
    int n;
    cin >> n;
    kadan(n);
    return 0;
}
