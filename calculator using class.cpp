#include<iostream>
using namespace std;
class ABC{
    private:
    int num1,num2;
    public:
    void XYZ(){
    cout<<"enter any number:";
    cin>>num1;
    cout<<"enter any number:";
    cin>>num2;
    cout<<"addition of two numbers is:"<<num1+num2<<endl;
    cout<<"substraction of two numbers is:"<<num1-num2<<endl;
    cout<<"multiplication of two numbers is:"<<num1*num2<<endl;
    cout<<"division of two numbers is:"<<num1/num2<<endl;
    }
};
int main()
{
    ABC obj;
    obj.XYZ();
    return 0;
}