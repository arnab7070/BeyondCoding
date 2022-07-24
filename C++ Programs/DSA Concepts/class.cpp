#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    string gender;

    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
    ~student(){
        cout<<"Destructor called"<<endl; //This is a function to destruct something
    }
};

int main()
{
    int n;
    cout << "Enter how many students are there in your class?" << endl;
    cin >> n;
    student array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Name = ";
        cin >> array[i].name;
        cout << "Age = ";
        cin >> array[i].age;
        cout << "Gender = ";
        cin >> array[i].gender;
    }
    for (int i = 0; i < n; i++)
    {
        array[i].printInfo();
    }
    return 0;
}
