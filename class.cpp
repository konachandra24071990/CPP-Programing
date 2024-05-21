#include <iostream>

using namespace std;

class C{
    private:    //private members can access only using public memthods of same class

    int i;
    public:     //public members can access from out side
    int j;
    void set(void){
        i = 10;
        j = 20;
    }
    void get(void){
        cout<<"i = "<<i<<endl;
        cout<<"j = "<<j<<endl;
    }
};

int main(void){
    cout<<"Hello World C++"<<endl;

    C obj;
    obj.set();
    obj.get();
}