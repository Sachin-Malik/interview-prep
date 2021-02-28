#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
        int n,m;
        cin>>n>>m;
        vector<int> a(100);
        vector<int> b(100);
        int input;
        for(int i=0; i<n; i++)
        {
                cin>>input;
                a.push_back(input);
        }
        cout<<"second input"<<endl;
        for(int i=0; i<m; i++)
        {
                cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ptr1=0,ptr2=0;
        int min=INT_MAX;
        while(ptr1<n&&ptr2<m)
        {
                if(abs(a[ptr1]-b[ptr2])<min)
                        min=abs(a[ptr1]-b[ptr2]);
                cout<<"current min is "<<min<<endl;
                if(a[ptr1]<b[ptr2])
                {
                        ptr1++;
                }
                else
                        ptr2++;
        }
        cout<<min<<endl;
}
