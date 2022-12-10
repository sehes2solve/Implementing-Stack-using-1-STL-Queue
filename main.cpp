#include <iostream>
#include <queue>

using namespace std;
using std::queue;

class myStack
{
public:
    queue <int>q1;
    void push(int value)
    {

       q1.push(value);
    }


    int top()
    {
        return q1.back();
    }
void pop()
{
   for (int i = 0; i < q1.size() - 1; ++i) {
            q1.push(q1.front());
            q1.pop();
        }
        q1.pop();
    }

};
int main()
{
    cout << "My Stack Consists Of 70,49,176,20"<<endl;
    myStack s;
    s.push(70);
    s.push(49);
    s.push(176);
    s.push(20);
    s.pop();
    s.pop();
    s.pop();
    cout<<"After Calling The Pop Function, The Top of The Stack is" <<endl;
    cout<<s.top();
    return 0;
}
