#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;
public:
    void push(int data){v.push_back(data);}

    bool empty()
    {
        return v.size()==0;
    }
    void pop()
    {
        if(!empty())
            v.pop_back();
    }

    int top(){return v[v.size()-1];}
};

int main()
{
    Stack s;

    for(int i=0;i<7;i++)
        s.push(i*2);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
