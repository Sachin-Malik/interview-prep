
//TODO: find the number which make the required sum.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int sum;
        cin>>sum;
        vector<int> vtr(n);
        for(int i=0; i<n; i++)
                cin>>vtr[i];

        vector<vector<int> > res;
        vector<int> temp;

        int count=0;

        unordered_map<int,vector<vector<int> > > umap;


        for(int i=0; i<n; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        if(umap.find(sum-(vtr[i]+vtr[j]))!=umap.end())
                        {
                                umap[sum-(vtr[i]+vtr[j])].push_back({vtr[i],vtr[j]});
                                count++;

                        }
                }
                for(int k=0; k<i; k++)
                {
                        umap[vtr[k]+vtr[i]].push_back({vtr[i],vtr[k]});
                }
        }
        cout<<"There are "<<count<< " combinations of number which give a sum of"<< sum<<endl;
}
