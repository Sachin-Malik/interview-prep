
//Ques. Find the longest peak in a given array.
//      a peak is a sequence of strictly increasing number till a peak is reached and after that it is strictly decreasing.


#include <iostream>
#include <vector>
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

        vector<int> maxVtr(n), minVtr(n);
        maxVtr[0]=0;
        minVtr[n-1]=0;
        int max_left=maxVtr[0];
        int min_right=minVtr[n-1];
        for(int i=1; i<n; i++)
        {
                if(vtr[i]>max_left)
                {
                        max_left=vtr[i];
                        maxVtr[i]=maxVtr[i-1]+1;
                }
                else
                {
                        max_left=vtr[i];
                        maxVtr[i]=0;
                }
        }
        for(int i=n-2; i>=0; i--)
        {
                if(vtr[i]>min_right)
                {
                        min_right=vtr[i];
                        minVtr[i]=minVtr[i+1]+1;
                }
                else
                {
                        min_right=vtr[i];
                        minVtr[i]=0;
                }
        }
        int total=0;
        for(int i=0; i<n; i++) {
                if(maxVtr[i]+minVtr[i]>total)
                        total=maxVtr[i]+minVtr[i];
        }
        cout<<total+1<<endl;
}
