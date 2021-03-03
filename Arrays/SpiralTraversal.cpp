// Question: Given a 2D vector print the number in a spiral order

#include <iostream>
#include <vector>
using namespace std;
int main(){
        int n,m;
        cin>>n>>m;
        vector<vector<int> > vtr(n,vector<int>(m,0));
        for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                        cin>>vtr[i][j];

        int sr=0,er=n-1,sc=0,ec=m-1;
        int count=0;
        vector<int> res;

        while(count<m*n)
        {
                for(int i=sr; i<=ec; i++)
                {
                        res.push_back(vtr[sr][i]);
                        count++;
                }

                for(int i=sr+1; i<=er; i++)
                {
                        res.push_back(vtr[i][ec]);
                        count++;
                }

                for(int i=ec-1; i>=sc; i--)
                {
                        res.push_back(vtr[er][i]);
                        count++;
                }

                for(int i=er-1; i>sr; i--)
                {
                        res.push_back(vtr[i][sc]);
                        count++;
                }
                er--;
                sr++;
                ec--;
                sc++;
        }
        cout<<"Array Obtained by Traversing Given 2D array in spiral order is "<<endl;
        for(int i=0; i<res.size(); i++)
        {
                cout<<res[i]<<" ";
        }
        cout<<endl;
}

// Ans- 1. Print The perimeter of the given vector , and repeat this step recursively untill all elements are not visited
