#include <bits/stdc++.h>
using namespace std;
void Seive(int [],int);
int main()
{
    long int n,i;
    int a[100000];
    cout<<"Enter the number of primes required as output : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        a[i] = i;
    }
    Seive(a,n);
    return 0;
}
void Seive(int a[],int n)
{
    long int k = 2;
    int i,j;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i] != k && a[i]%k == 0)
                a[i] = 0;
        }
        if(a[j] != 0 && a[j] != k)
            k = a[j];
    }    
    for(i=0;i<n;i++)
    {
        if(a[i] != 0)
            cout<<a[i]<<"\t";
    }
}
