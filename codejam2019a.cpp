#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i,n,j,k,r=0;
    int counter = 0,counter2=0;
    int sum=0;
    cin >> t;
    for(i=1;i<=t;i++) {
        cin>> n;
        int matrix[n][n];
        for(j=0;j<n;j++){
        for(k=0;k<n;k++)
		{
		cin>>matrix[j][k];
		if(j==k) {
			sum=sum+matrix[j][k];
		}
		}
}

for (j = 0; j < n; j++)
        {
 int temp_arr[101]={0};
            for (k = 0; k < n; k++)

            {

                if (temp_arr[matrix[j][k]]>0)
                {
                    counter2++;
                    break;
                }
                else{
                    temp_arr[matrix[j][k]]++;
                }
            }
        }
for (j = 0; j < n; j++)
        {
           int temp_arr[101]={0};

            for (k = 0; k < n; k++)
            {
                if (temp_arr[matrix[k][j]]>0)
                {
                    counter++;
                    break;
                }
                else{
                    temp_arr[matrix[k][j]]++;
                }
            }
        }
 printf("Case #%d: %d %d %d\n",i, sum, counter2, counter);

    }
}




