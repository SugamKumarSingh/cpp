#include <iostream>
using namespace std;

class matrix{
    //  private matrix of 2x2 type
    int a[2][2];

    public:
    // void function to get input of matrix
    void get() {
        cout<<"Input 2x2 matrix:"<<endl;
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                cin>>a[i][j];
            }
        }
    }

    // void function to print matrix
    void put() {
        cout<<"\n2x2 matrix is:"<<endl;
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    
    // Overloading operator == to compare matrices with return type bool
    bool operator ==(matrix m1) {
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                if ((a[i][j])==(m1.a[i][j])) {
                    continue;
                }
                else {
                    cout<<"Not equal"<<endl;
                    return false;
                }
            }
            cout<<"Equal"<<endl;
            return true;
        }
    }

    // Overloading operator + to add two matrices which return another object of class matrix
    matrix operator +(matrix m1) {
        matrix rtn;
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                rtn.a[i][j] = a[i][j] + m1.a[i][j];
            }
        }
        return rtn;
    }
};

int main()
{
    // Creating three instances of class Matrix
    matrix m1, m2, m3;
    
    // Taking input of m1 and m2 matrix from user
    m1.get();
    m2.get();
    // storing sum of m1 and m2 in m3
    m3 = m1+m2;

    // printing matrix m1 and m2
    m1.put();
    m2.put();
    // Comparing metrix m1 and m2
    if (m1==m2)
    {
        cout<<"m1 and m2 are equal and verified"<<endl;
    }
    else {
        cout<<"m1 and m2 are not equal"<<endl;
    }

    // printing m3 and comparing matrix m2 and m3
    m3.put();
    if (m2==m3)
    {
        cout<<"m2 and m3 are equal and verified"<<endl;
    }
    else {
        cout<<"m2 and m3 are not equal"<<endl;
    }
    return 0;
}