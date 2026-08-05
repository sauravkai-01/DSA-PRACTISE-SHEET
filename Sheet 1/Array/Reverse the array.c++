#include<iostream>
using namespace std;
int main(){
    int n=5;
    char s[n]={'h','e','l','l','o'};
    int i,j;
    char temp;
    j=(sizeof(s)/sizeof(s[0]))-1;
    for(i=0;i<=j;i++)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
    }
    for(int z=0;z<n;z++)
    {
        cout<<s[z]<<" ";
    }
}