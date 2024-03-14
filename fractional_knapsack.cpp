

//fractional knapsack


#include<bits/stdc++.h>
using namespace std;
#define ll long long
void knapsack(int n, float weight[],float profit[],float capacity)
{
    float x[20],tp=0;
    int i,j,u;
    u=capacity;
    for(i=0; i<n; i++)
        x[i]=0.0;
        cout<<"ji";
    for(i=0; i<n; i++)
        if(weight[i]>u)break;
        else
        {
            x[i]=1.0;
            tp+=profit[i];
            u-=weight[i];
        }
    if(i<n)x[i]=u/weight[i];
    tp+=(x[i]*profit[i]);
    //cout.setf(fixed);
    cout<<"maximum profit: ";
    cout<<setprecision(2)<<tp;
}
int main()
{
    float weight[20],profit[20],capacity,rat[20],temp;
    int num,i,j;
    cout<<"enter number of objects: ";
    cin>>num;
    cout<<"enter weight and profit of each element: ";
    for(i=0; i<num; i++)
        cin>>weight[i]>>profit[i];
    cout<<"enter capacity of knapsack: ";
    cin>>capacity;
    for(i=0; i<num; i++)rat[i]=profit[i]/weight[i];

    for(i=0; i<num; i++)
        for(j=i+1; j<num; j++)
            if(rat[i]<rat[j])
            {
                temp=rat[j];
                rat[j]=rat[i];
                rat[i]=temp;

                temp=weight[j];
               weight[j]=weight[i];
                weight[i]=temp;

                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;
            }

        knapsack(num,weight,profit,capacity);

    return 0;
}






