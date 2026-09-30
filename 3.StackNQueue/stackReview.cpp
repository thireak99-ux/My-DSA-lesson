#include <iostream>
#include <stack>

using namespace std;

int peek(stack<int> st, int pos)
{
    if (pos <= 0 || pos > st.size())
    {
        throw runtime_error("Peek at invalid position !!! ");
    }

    for (int i = 1; i < pos; i++)
    {
        st.pop();
    }
    return st.top();
}

void display(stack<int>st , string messages){

    cout << " { + } " << messages <<endl;
    cout << endl;
    int counter = 0;
    while (!st.empty())
    {
        cout << (++counter) <<". "<< st.top() << endl;
        st.pop();
    }
    
}
int getMin (stack<int> st ){
    int mn = st.top();
    st.pop();
    while (!st.empty()){
        mn = min(mn , st.top());
        st.pop();
    }
    return mn;
}

int getMax (stack<int> st ){
    int mx = st.top();
    st.pop();
    while (!st.empty()){
        mx = max(mx , st.top());
        st.pop();
    }
    return mx;
}

int main()
{
    system("cls");

    stack<int> nums;

    for (int i = 1; i <= 10; i++)
    {
        nums.push(i * 10);
    }

    try
    {
        cout << "Peek (1) : " << peek(nums, 1) << endl;
        cout << "Peek (2) : " << peek(nums, 2) << endl;
        cout << "Peek (20) : " << peek(nums, 20) << endl;
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }
    cout << endl;
    display(nums , "Our Original Values: " ) ;
    cout << endl;

    cout << "The minimum of the element: " << getMin (nums) << endl;
    cout << endl;
    cout << "The maximum of the element: " << getMax (nums) << endl;
}