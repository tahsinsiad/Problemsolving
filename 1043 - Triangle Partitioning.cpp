#include<bits/stdc++.h>
using namespace std;

double triangle(double AB,double AC,double BC,double Ratio)
{
    double AD,low,mid,high,smalltri,bigtri,trapizm,s1,s2,AE,DE,R;

    low = 0.0;
    high=AB;

    while(high-low>.00000001)
    {
        mid=(low+high)/2.0;
        AD=mid;

        AE=(AD/AB)*AC;
        DE=(AD/AB)*BC;

        s1=(AB+BC+AC)/2.0;
        s2=(AE+DE+AD)/2.0;

        bigtri=sqrt(s1*(s1-AB)*(s1-BC)*(s1-AC));
        smalltri=sqrt(s2*(s2-AD)*(s2-AE)*(s2-DE));

        trapizm=bigtri-smalltri;

        R=smalltri/trapizm;

        if(R>Ratio)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }




    return AD;

}

int main()
{
    double a,b,c,r;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b>>c>>r;
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(8)<<triangle(a,b,c,r)<<endl;
    }


}
