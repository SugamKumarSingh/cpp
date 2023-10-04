#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout<<"Upto: ";
    cin>>num;

    for (int i=2; i<num; i++) {
        int temp = 0;
        for (int j=(i-1); j>1; j--) {
            if (i%j==0){
                temp++;
            }
        }
        if (temp==0) {
            count++;
            // cout<<i<<endl;
        }
    }
    cout<<"Total number of prime numbers are "<<count<<endl;

    return 0;
}