#include <iostream>

using namespace std;

//class declaration
class basicClass{
    public:
    string str1;
    private:
    string str2;
    protected:
    string str3;
    public:
    void set(void){
        str1 = "i am public data";
        str2 = "i am private data";
        str3 = "i am protected data";
    }
    void getprivate(void){
        cout<<str2<<endl;
    }
    void getprotected(void){
        cout<<str3<<endl;
    }
    
};

int main(void){

    cout << "In Main"<<endl;
    
    basicClass obj; //object creation;
    obj.set();      //function call through obj
    cout<<obj.str1<<endl;;  //access data memeber through obj
    obj.getprotected(); //get function call through obj
    obj.getprivate();
    

    return 0;
}