/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    //Use this output format
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<"0\t0\t0\t0\t\t1\t\t0\t\t0\n";
    std::cout<<"0\t0\t1\t0\t\t1\t\t0\t\t0\n";
    std::cout<<"0\t1\t0\t0\t\t1\t\t0\t\t0\n";
    std::cout<<"0\t1\t1\t0\t\t0\t\t0\t\t0\n";
    std::cout<<"1\t0\t0\t0\t\t1\t\t1\t\t1\n";
    std::cout<<"1\t0\t1\t0\t\t1\t\t1\t\t1\n";
    std::cout<<"1\t1\t0\t0\t\t1\t\t1\t\t1\n";
    std::cout<<"1\t1\t1\t1\t\t0\t\t0\t\t1\n";
    return 0;
}