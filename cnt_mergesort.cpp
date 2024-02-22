//count merge sort occurance


#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void Merge(int a[], int l, int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];
    for(i=0;i<n1; i++)L[i]=a[l+i];
    for(j=0;j<n2; j++)R[j]=a[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])a[k++]=L[i++];
        else a[k++]=R[j++];
    }
    while(i<n1)a[k++]=L[i++];
    while(j<n2)a[k++]=R[j++];

}
void MergeSort(int a[],int l, int r)
{
    cnt++;
    if(l<r)
    {

        int m=(l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);

    }
}

int main()
{
    cout<<"input size: ";
    int n;
    cin>>n;
    cout<<"input array: ";
    int a[n];
    for(int i=0;i<n; i++)cin>>a[i];
    MergeSort(a,0,n-1);
    cout<<"sorted array: ";
    for(int i=0;i<n; i++)cout<<a[i]<<" ";
    cout<<endl<<"number of recursive call: "<<cnt;
    return 0;
}






