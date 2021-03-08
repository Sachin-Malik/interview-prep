// Question: find the longest range in sub-array. (range is a series of number contains all the occuring integer between them)
// for arr[]={1,11,3,0,15,5,2,4,10,7,12,6}
// ANS would be => [0,7]




#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int> myVtr(n);
        map<int,int> myMap;
        for(int i=0; i<n; i++)
                cin>>myVtr[i];

        for(int i=0; i<n; i++)
        {
                myMap[myVtr[i]]++;
        }

        int a_max=INT_MIN,count_max=INT_MIN;
        int flag=0;

        auto it=myMap.begin();
        int a=(*it).first;
        int prev=(*it).first;
        int count=0;
        it++;
        int counter=0;
        for(; it!=myMap.end(); it++)
        {

                if((*it).first-1==prev)
                {

                        count++;
                        prev=((*it).first);
                }
                else{

                        flag=1;
                        if(count>count_max)
                        {
                                count_max=count;
                                count=0;
                                a_max=a;
                                a=(*it).first;
                        }
                }
                // cout<<(*it).first<<endl;
        }
        if(flag==0) {
                cout<<a<<" "<<a+n-1<<endl;
        }
        else
                cout<<a_max<<" "<<a_max+count_max<<endl;
}
