/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class constructor{
    
    int x;
    string str;
    public:
    constructor(){
        cout<<"default constructor"<<endl;
        x = 10;
        str = "initialized at default constructor";
    }
    ~constructor(){
        cout<<"distructor"<<endl;
    }
};

int main()
{
    cout<<"Hello World"<<endl;
    
    constructor obj;

    return 0;
}