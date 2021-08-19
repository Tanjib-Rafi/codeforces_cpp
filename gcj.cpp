#include<bits/stdc++.h>
using namespace std;
const int mx = 101;
int main()
{
    ios::sync_with_stdio(0);
    int t, n, count1=0,count2=0, sum;
    cin >> t;
    int matrix[mx][mx];
    for(int k=1; k<=t; k++){
        cin>>n;
        vector <int> v[100];
        sum=0;
        count1=0;
        count2 = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for(int i=0; i<n; i++){
            sum+=matrix[i][i];
        }
        for(int i=0; i<n; i++){
            int temp_arr[101]={0};
            for(int j=0; j<n; j++){
                if(temp_arr[matrix[i][j]]>0){
                    count1++;
                    break;
                }
                else{
                    temp_arr[matrix[i][j]]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            int temp_arr[101]={0};
            for(int j=0; j<n; j++){
                if(temp_arr[matrix[j][i]]>0){
                    count2++;
                    break;
                }
                else{
                    temp_arr[matrix[j][i]]++;
                }
            }
        }
        //printf("Case #%d: %d %d %d\n",k, sum, count1, count2);
        cout<<"Case #"<<k <<":"<<sum <<count1 <<count2;
    }
}
