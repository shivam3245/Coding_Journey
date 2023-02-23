#include<iostream>
using namespace std;
 class student{
    public:
    string name;
    int age;
    bool gender;
    void printinfo()
    {   
    cout<<"Here is the final output "<<endl;
    cout<<"Name = ";
    cout<<name<<endl;
    cout<<"Age ";
    cout<<age<<endl;
    cout<<"gender = ";
    cout<<gender<<endl;
    }
};
int main()
{ 
    int i;
    student arr[2];
    for(int i=0;i<2;i++)
    {
    cout<<"Enter the name of student ";
    cin>>arr[i].name;
    cout<<"Age ";
    cin>>arr[i].age;
    cout<<"Enter the gender ";
    cin>>arr[i].gender;
    }
    for(int i=0;i<2;i++)
    {
    arr[i].printinfo();
    }
    return 0; 
}
    
