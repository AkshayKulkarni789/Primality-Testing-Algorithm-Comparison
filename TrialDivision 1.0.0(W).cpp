#include <bits/stdc++.h>
using namespace std;
bool isPrime(long int);
int main() 
{
    long int a;
    cout<<"Enter the number to be checked";
    cin>>a;
    if(isPrime(a))
        cout<<"Prime";
    else
        cout<<"Not Prime";
    return 0;
}
bool isPrime(long int n)
{
    long int i,l=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
            l++;
    }
    if(l)
        return false;
    else
        return true;
}
