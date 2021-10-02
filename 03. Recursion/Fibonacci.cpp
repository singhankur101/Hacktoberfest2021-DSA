// C++ code to implement Fibonacci series
#include <bits/stdc++.h>
using namespace std;
 
// Function for fibonacci
 
int fib(int N)
{
    // Stop condition
    if (N == 0)
        return 0;
 
    // Stop condition
    if (N == 1 || N == 2)
        return 1;
 
    // Recursion function
    else
        return (fib(N - 1) + fib(N - 2));
}
 
// Driver Code
int main()
{
    // Initialize variable n.
    int n = 5;
    cout<<"Fibonacci series of 5 numbers is: ";
 
    // for loop to print the fiboancci series.
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}
