// Question : Given rewards to students.
// conditions
// 1. each student should atleast get one rewards
// 2. student having higher marks should have strictly more rewards

// Ans : Find all the min peaks and traverse both sides from there.



#include <iostream>;
#include <vector>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> vtr(n);
        vector<int> res(n,0);
        vector<int> mins(n);
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
        int total=0;
        if(vtr[1]>vtr[0])
                mins.push_back(0);
        for(int i=1; i<n-1; i++)
        {
                if(vtr[i]<vtr[i-1]&&vtr[i]<vtr[i+1])
                        mins.push_back(i);
        }
        if(vtr[n-1]<vtr[n-2])
        {
                mins.push_back(n-1);
        }
        for(int i=0; i<mins.size(); i++)
        {
                count=1;
                int current=mins[i];
                res[current]=1;
                int left=current-1;
                int right=current+1;
                while(right<n&&vtr[current]<vtr[right])
                {
                        if(res[right]>count+1) {
                                break;
                        }
                        count++;
                        res[right]=count;
                        right++;
                }
                count=1;
                while(left>=0&&vtr[current]<vtr[left])
                {
                        if(res[left]>count+1)
                        {
                                break;
                        }
                        count++;
                        res[left]=count;
                        left--;
                }
        }
        for(int i=0; i<res.size(); i++) {
                cout<<res[i]<<" ";

        }
}
