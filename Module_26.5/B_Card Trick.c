#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);
    while(t--){
        long long int n, m, i, sum=0, ans;
        scanf("%lld", &n);
        long long int arr[n+5];
        for(i=0; i<n; i++){
            scanf("%lld", &arr[i]);
        }
        scanf("%lld", &m);
        long long int suf[m+6];
        for(i=0; i<m; i++){
            scanf("%lld", &suf[i]);
        }

        for(i=0; i<m; i++){
            sum = sum + suf[i];
        }
        ans = sum%n;

        printf("%lld\n", arr[ans]);
    }
    return 0;
}
