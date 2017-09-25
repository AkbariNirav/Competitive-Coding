#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    long int maxx=-9999999,maxy=-9999999,minx=999999999,miny=999999999;
    while(n--)
    {
        long int x,y;
        cin>>x>>y;
        x>maxx?maxx=x:maxx=maxx;
        y>maxy?maxy=y:maxy=maxy;
        x<minx?minx=x:minx=minx;
        y<miny?miny=y:miny=miny;
    }
    
    double mx=max(abs(maxx-minx),abs(miny-maxy));
    double q1=sqrt(maxx*maxx+maxy*maxy); 
    double q2=sqrt(minx*minx+maxy*maxy);    
    double q3=sqrt(minx*minx+miny*miny);    
    double q4=sqrt(maxx*maxx+miny*miny);    
   
    printf("%.10f",max(mx,max(q1,max(q2,max(q3,q4)))));
    return 0;
}
