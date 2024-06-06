#include <iostream>

using namespace std;

class opoverload{
    private:
    int a,b;
    string str1,str2;
    public:
    opoverload();
    opoverload(int a, int b);
    opoverload(int a, int b, string str1, string str2);
    void sum(void);
    void disp(void);
    void dispint(void);
    opoverload operator+(opoverload const& obj);
    opoverload operator-(opoverload const& obj);
    opoverload operator*(opoverload const& obj);
    opoverload operator/(opoverload const& obj);
    opoverload operator%(opoverload const& obj);
    void operator+(void);
    void operator-(void);
    void operator++(void);
    void operator--(void);
    void operator!(void);
    void operator~(void);
    bool operator==(opoverload const& obj);
    bool operator!=(opoverload const& obj);
    bool operator>=(opoverload const& obj);
    bool operator<=(opoverload const& obj);
    bool operator<(opoverload const& obj);
    bool operator>(opoverload const& obj);
};
opoverload opoverload::operator%(opoverload const& obj){
    opoverload sum;
    if(a > obj.a){
        sum.a = a%obj.a;
    }
    if(b > obj.b){
        sum.b = b%obj.b;
    }
    if(a < obj.a){
        sum.a = obj.a%a;
    }
    if(b < obj.b){
        sum.b = obj.b%b;
    }
    return sum;
}
opoverload opoverload::operator/(opoverload const& obj){
    opoverload sum;
    if(a > obj.a){
        sum.a = a/obj.a;
    }
    if(b > obj.b){
        sum.b = b/obj.b;
    }
    if(a < obj.a){
        sum.a = obj.a/a;
    }
    if(b < obj.b){
        sum.b = obj.b/b;
    }
    return sum;
}
opoverload opoverload::operator*(opoverload const& obj){
    opoverload sum;
    sum.a = a * obj.a;
    sum.b = b * obj.b;
    return sum;
}
opoverload opoverload::operator-(opoverload const& obj){
    opoverload sum;
    sum.a = a - obj.a;
    sum.b = b - obj.b;
    return sum;
}
opoverload opoverload::operator+(opoverload const& obj){
    opoverload sum;
    sum.a = a + obj.a;
    sum.b = b + obj.b;
    sum.str1 = str1 + obj.str1;
    sum.str2 = str2 + obj.str2;
    return sum;
}
void opoverload::operator+(void){
    if(a < 0){
        a = -a;
    }
    if(b < 0){
        b = -b;
    }
    if(a > 0){
        a = +a;
    }
    if(b > 0){
        b = +b;
    }
}
void opoverload::operator-(void){
    if(a < 0){
        a = a;
    }
    if(b < 0){
        b = b;
    }
    if(a > 0){
        a = -a;
    }
    if(b > 0){
        b = -b;
    }
}
void opoverload::operator++(void){
    ++a;
    ++b;
}
void opoverload::operator--(void){
    --a;
    --b;
}
void opoverload::operator!(void){
    a = !a;
    b = !b;
}
void opoverload::operator~(void){
    a = !a;
    b = !b;
}
opoverload::opoverload(){
    a = 10;
    b = 20;
    str1 = "string one";
    str2 = " string two";
}
opoverload::opoverload(int a, int b){
    this->a = a;
    this->b = b;
}

opoverload::opoverload(int a, int b, string str1, string str2){
    this->a = a;
    this->b = b;
    this->str1 = str1;
    this->str2 = str2;
}
void opoverload::disp(void){
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"str1 = "<<str1<<", str2 = "<<str2<<endl;
}
void opoverload::dispint(void){
    cout<<"a = "<<a<<", b = "<<b<<endl;
}
void opoverload::sum(void){
    cout<<"sum = a+b =  "<<a+b<<endl;
    cout<<"string concat =  "<<str1+str2<<endl;
}
bool opoverload::operator==(opoverload const& obj){
    if((a == obj.a)&&(b == obj.b)){
        return true;
    }
    return false;
}
bool opoverload::operator!=(opoverload const& obj){
    if((a != obj.a)&&(b != obj.b)){
        return true;
    }
    return false;
}
bool opoverload::operator<=(opoverload const& obj){
    if((a <= obj.a)&&(b <= obj.b)){
        return true;
    }
    return false;
}
bool opoverload::operator>=(opoverload const& obj){
    if((a >= obj.a)&&(b >= obj.b)){
        return true;
    }
    return false;
}
bool opoverload::operator<(opoverload const& obj){
    if((a < obj.a)&&(b < obj.b)){
        return true;
    }
    return false;
}
bool opoverload::operator>(opoverload const& obj){
    if((a > obj.a)&&(b > obj.b)){
        return true;
    }
    return false;
}

int main(void){
    cout<<"Hello world CPP concepts"<<endl;
    cout<<"Operators overloading "<<endl;
    // cout<<"arthematic operators overloading "<<endl;
    // opoverload obj;
    // obj.dispint();
    // opoverload obj1(200,100);
    // obj1.dispint();
    // opoverload obj2 = obj + obj1;
    // obj2.dispint();
    // obj2 = obj - obj1;
    // obj2.dispint();
    // obj2 = obj * obj1;
    // obj2.dispint();
    // obj2 = obj / obj1;
    // obj2.dispint();
    // obj2 =  obj1 / obj;
    // obj2.dispint();
    // obj2 = obj % obj1;
    // obj2.dispint();
    // obj2 =  obj1 % obj;
    // obj2.dispint();
    // cout<<"unary operators overloading "<<endl;
    // cout<<"unary + operators overloading "<<endl;
    // opoverload obj3(-200,-100);
    // +obj3;
    // obj3.dispint();
    // opoverload obj4(200,100);
    // +obj4;
    // obj4.dispint();
    // cout<<"unary - operators overloading "<<endl;
    // opoverload obj5(-200,-100);
    // -obj5;
    // obj5.dispint();
    // opoverload obj6(200,100);
    // -obj6;
    // obj6.dispint();
    // cout<<"unary ++ operators overloading "<<endl;
    // ++obj4;
    // obj4.dispint();
    // cout<<"unary -- operators overloading "<<endl;
    // --obj4;
    // obj4.dispint();
    // cout<<"unary ! operators overloading "<<endl;
    ////!obj4;
    // obj4.dispint();
    // cout<<"unary ~ operators overloading "<<endl;
    // !obj4;
    // obj4.dispint();
    cout<<"comparision operators overloading "<<endl;
    opoverload objl(100,200);
    opoverload objr(1001,2001);
    // if(objl == objr){
    //     cout<<"Both are equal"<<endl;
    // }else{
    //     cout<<"Not equal"<<endl;
    // }
    // if(objl != objr){
    //     cout<<"Not equal"<<endl;
    // }else{
    //     cout<<"Both are equal"<<endl;
    // }
    // if(objl <= objr){
    //     cout<<"less than or equal"<<endl;
    // }else{
    //     cout<<"greater than"<<endl;
    // } 
    // if(objr > objl){
    //     cout<<"greater than"<<endl;
    // }else{
    //     cout<<"less than"<<endl;
    // }     
    // if(objl > objr){
    //     cout<<"greater than"<<endl;
    // }else{
    //     cout<<"less than"<<endl;
    // }
    return 0;
}