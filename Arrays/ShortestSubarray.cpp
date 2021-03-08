#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int> vtr(n);
        for(int i=0; i<n; i++)
        {
                cin>>vtr[i];
        }

        int leftMax=INT_MIN;
        int leftMin=INT_MAX;
        map<int,int> m;
        int leftMinIndex=-1;

        for(int i=0; i<n; i++)
        {
                if(vtr[i]>leftMax)
                {
                        leftMax=vtr[i];
                }
                else{
                        if(vtr[i]<leftMin)
                        {
                                leftMin=vtr[i];
                        }
                        leftMinIndex=i;
                }
        }
        int a;
        for(int i=0; i<n; i++)
        {
                if(vtr[i]>=leftMin)
                {
                        a=i;
                        break;
                }
        }
        cout<<a<<" "<<leftMinIndex<<endl;
}
