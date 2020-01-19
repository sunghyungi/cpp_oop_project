#include<iostream>
using namespace std;

class parent{
public:
    void print1() {
        cout << "parent print1" << endl;
    }
    virtual void print2(){
        cout << "parent print2" << endl;
    }
    virtual void print3(){
        cout << "parent print3" << endl;
    }
};

class child : public parent {
    public :
    void print2() {
        cout << "child print2"<< endl;
    }
    void print3(int x){
        cout << "child print3" << endl;
    }
};

int main(){
    parent* p;
    child c;
    p = &c;

    p->print1();
    p->print2();
    p->print3();

    return 0;
}