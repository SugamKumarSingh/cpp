#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number till which you want to print factorial: ";
    cin>>num;

    for (int i=1; i<=num; i++)
    {
        int j=i, result=1;
        do
        {
            result = result * j;
            j--;
        } while (j>1);
        cout<<"Factorial of "<<i<<" is "<<result<<endl;
    }
    
    return 0;
}