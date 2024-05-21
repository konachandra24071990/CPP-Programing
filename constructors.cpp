#include <iostream>

using namespace std;

class constr{
    private:
    int a;
    string s;

    public:
    constr(){
        cout<<"default constructor"<<endl;
        a = 100;
        s = "i am CPP constructor";
    }
    constr(int x, string str){
        cout<<"parameterized constructor"<<endl;
        a = x;
        s = str;
    }
    constr(constr& obj){
        cout<<"copy constructor"<<endl;
        a = obj.a;
        s = obj.s;
    }   
    constr(constr&& obj){
        cout<<"Move constructor"<<endl;
        a = obj.a;
        s = obj.s;
    }
    ~constr(){
        cout<<"Ditsrucotor intiated"<<endl;
    }
    void disp(void);
};
void constr::disp(void){
        cout<<"a = "<<a<<endl;
        cout<<"string s = "<<s<<endl;
    }

int main(void){
    constr objd;
    objd.disp();
    constr objp(200,"i am para constr");
    objp.disp();
    constr objc(objd);
    objc.disp();
    constr objc1 = objp;
    objc1.disp();
    constr objm(move(objd));
    objm.disp();
}