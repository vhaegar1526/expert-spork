#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    char stack[n+1];
    int top=-1,i;
 
    for(i=0;i<strlen(s);i++)
    {
        if(i==0)
            stack[++top]=s[i];
        else
        {
            stack[++top]=s[i];
            if(stack[top]==stack[top-1])
            top=top-2;
        }
    }
    cout<<top+1<<endl;
    
    for(i=0;i<=top;i++)
        cout<<stack[i];
}
