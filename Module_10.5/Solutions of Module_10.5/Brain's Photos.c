#include<stdio.h>
int main()
{
    int n, m,  flag = 0, i, j;
    char arr[105][305], a;
    scanf("%d%d", &n, &m);

    for(i=1; i<=n; i++){
        scanf("%c", &a);
        for(j=1; j<2*m; j++){

            scanf("%c",  &arr[i][j]);
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<2*m; j++){
            if(arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M')
                flag = 1;
        }
    }
    if(flag == 0)
        printf("#Black&White\n");
    else
        printf("#Color\n");
    return 0;
}
