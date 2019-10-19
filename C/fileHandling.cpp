#include <iostream>
#include <string>
using namespace std;


    ifstream obj("file1.txt");
    char arr1[100];
    obj.getline(arr1,100);
    cout<<"The file contains: "<<endl<<arr1;
    cout<<"\nFile read operation successful!";










    template <typename U, typename T>
    U add(U x, T y)
    {
        return x+y;
    }

    int main()
    {
        cout<<"integer  :  "<<add<float,int>(3.3,4)<<endl;
        cout<<"double  :  "<<add<double,float>(3.0002,4.5)<<endl;
        cout<<"float  :  "<<add<float,float>(3.0f,4.5f)<<endl;

    return 0;
    */










template <typename T>
class weight
{
    private:
        T kg;

    public:
        void setData(T x)
        {
            kg=x;
        }

        T getData()
        {
            return kg;
        }
};

int main()
{
    weight<int>obj1;
    weight<double>obj2;
    obj1.setData(6);
    obj2.setData(6.232323);
    cout<<obj1.getData()<<endl<<obj2.getData()<<endl;


    return 0;
}
