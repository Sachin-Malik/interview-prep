// Question : Given rewards to students.
// conditions
// 1. each student should atleast get one rewards
// 2. student having higher marks should have strictly more rewards



#include <iostream>;
#include <vector>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> vtr(n);
        vector<int> res(n);
        for(int i=0; i<n; i++)
                cin>>vtr[i];

        int minValue=INT_MAX;
        int minIndex=-1;
        for(int i=0; i<n; i++) {
                if(vtr[i]<minValue)
                {
                        minValue=vtr[i];
                        minIndex=i;
                }
        }
        int count=1;
        int total=1;
        res[minIndex]=1;
        for(int i=minIndex+1; i<n; i++)
        {
                if(vtr[i]>vtr[i-1])
                {
                        count++;
                        total=total+count;
                }
                else{
                        count=1;
                        total=total+count;
                }
                res[i]=count;
        }

        for(int i=minIndex-1; i>=0; i--)
        {
                if(vtr[i-1]>vtr[i])
                {
                        count++;
                        total=total+count;
                }
                else{
                        count=1;
                        total=total+count;
                }
                res[i]=count;
        }
        cout<<"The Minimum Rewards are "<<total<<endl;
        cout<<"and the rewards for each student is ";
        for(int i=0; i<n; i++)
                cout<<res[i]<<" ";
        cout<<endl;

}
