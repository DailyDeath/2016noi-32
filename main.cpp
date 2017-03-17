#include <iostream>
using namespace std;
int main()
{
    int a[20][2],b,c,d,e=0,f=0,g=0;
    cin>>b;
    for(c=0;c<b;c++)
    {
        for(d=0;d<3;d++)
        cin>>a[c][d];
        if(a[c][0]>0)
            e=e+a[c][0];
        if(a[c][1]>0)
            f=f+a[c][1];
        if(a[c][2]>0)
            g=g+a[c][2];
        }
        cout<<e<<" "<<f<<" "<<g<<" "<<(e+f+g)<<endl;
        return 0;

}
