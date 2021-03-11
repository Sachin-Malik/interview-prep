// QUESTION : given an array of interger print all possible permutation of array without using any library function.



#include <iostream>
#include <vector>
#include <set>
#include <vector>
using namespace std;

int helper(vector<int> myvector,vector<int> perm,vector<vector<int> > &perms)
{
        if(myvector.size()==0)
        {
                perms.push_back(perm);
        }
        else
        {
                for(int i=0; i<myvector.size(); i++)
                {
                        vector<int> newmyvector=myvector;
                        auto it=newmyvector.begin();

                        for(int j=0; j<i; j++)
                                it++;
                        vector<int> newperm=perm;
                        newperm.push_back(*it);
                        newmyvector.erase(it);

                        helper(newmyvector,newperm,perms);

                }
        }
}
int main(){
        int n;
        cin>>n;
        vector<int> myvector(n);
        for(int i=0; i<n; i++)
                cin>>myvector[i];

        vector<int> current;
        vector<vector<int> > perms;
        helper(myvector,current,perms);

        for(int i=0; i<perms.size(); i++)
        {
                for(int j=0; j<perms[i].size(); j++)
                {
                        cout<<perms[i][j]<<" ";
                }
                cout<<endl;
        }
}
