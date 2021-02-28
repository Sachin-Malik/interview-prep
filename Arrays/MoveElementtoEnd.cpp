#include <iostream>
using namespace std;
int main()
{
        int n,b;
        cin>>n>>b;
        vector<int> vtr(b);
        for(int i=0; i<n; i++)
                cin>>vtr[i];
        int ptr1,ptr2;
        ptr1=ptr2=n-1;

        while(ptr2>=0)
        {
                if(vtr[ptr2]==b)
                {
                        swap(vtr[ptr2],vtr[ptr1]);
                        ptr1=ptr1-1;
                        ptr2=ptr1;
                }
                else{
                        ptr--;
                }
        }

        for(int i=0; i<n; i++)
                cout<<vtr[i]<<" ";
}
