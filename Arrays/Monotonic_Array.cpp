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
        int ptr1=0;
        int ptr2=1;
        if(n<2)
        {
                cout<<"Monotonic"<<endl;
                return 0;
        }
        int direction=0;
        while(ptr2<n&&vtr[ptr1]==vtr[ptr2])
        {
                ptr1++;
                ptr2++;
        }
        if(ptr2==n)
        {
                cout<<"Monotonic"<<endl;
                return 0;
        }
        else{
                if(vtr[ptr2]>vtr[ptr1])
                        direction=1;
                else
                        direction=-1;
        }
        for(int i=ptr2; i<n; i++)
        {
                if(vtr[ptr2]-vtr[ptr1]>0)
                {
                        if(direction=-1)
                        {
                                cout<<"Not Monotonic"<<endl;
                                return 0;
                        }
                }
                else if(vtr[ptr2]-vtr[ptr1]<0)
                {
                        if(direction==1)
                        {
                                cout<<"Not Monotonic"<<endl;
                                return 0;
                        }
                }
        }
        cout<<"Monotonic"<<endl;

}
