#include<iostream>
using namespace std;
class stack{
	int *a;
    int top;
    int capacity;
    public:
    stack(int capacity)
    {
        this->capacity=capacity;
        top=-1;
        a=new int[capacity];
    }
void push(int data)
{
    if(top==capacity-1)
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    a[top]=data;
}

int pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
        return -1;
    }
    int res=a[top];
    top--;
    return res;
}

int peek()
{
    if(top==-1)
    {
        cout<<"no element in stack"<<endl;
        return -1;
    }
    return a[top];
}

bool empty()
{
    return top==-1;
}
};
int  main()
{
    stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.pop();
   // cout<<s->res<<endl;
    cout<<s.peek()<<endl;
    return 0;
}