#include<iostream>
using namespace std;
class room{
    public:
    int length;
    int breadth;
    int height;
    int a,vol;
    public:
    void area()
    {
        a=length*breadth;
        cout<<"the area of the room is:"<<a<<endl;
    }
    void volume()
    {
        vol=length*breadth*height;
        cout<<"the volume of the room is:"<<vol<<endl;
    }
};
int main()
{
    room obj;
    cout<<"the length of the room is:"<<endl;
    cin>>obj.length;
    cout<<"the breadth of the room is:"<<endl;
    cin>>obj.breadth;
    cout<<"the height of the room is:"<<endl;
    cin>>obj.height;
    obj.area();
    obj.volume();
    return 0;
}