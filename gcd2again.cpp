#include<bits/stdc++.h>
using namespace std;
void printLatin(int n)
{
    int k = n+1;
    for (int i=1; i<=n; i++)
    {
        int temp = k;
        while (temp <= n)
        {
            printf("%d ", temp);
            temp++;
        }
        for (int j=1; j<k; j++)
            printf("%d ", j);

        k--;
        printf("\n");
    }
}

// Driver program to test above function
int main(void)
{
    int n;
    cin>>n;
    printLatin(n);

    return 0;
}

