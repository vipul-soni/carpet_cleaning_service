#include <iostream>

using namespace std;

int main()
{
    cout<<"================================="<<endl<<"-----Carpet Cleaning Service-----"<<"\n"<<"Charges $30 per room"<<"\n"<<"Sales tax rate is 6%"<<"\n"<<"================================="<<endl;
    const int charges{30};
    int nor;
    cout<<"Enter no.s of rooms : ";
    cin>>nor;
    cout<<endl<<"Price per room : $"<<charges<<endl;
    long tp=charges*nor;
    cout<<"Cost : $"<<tp<<endl;
    double tax=tp*0.06;
    cout<<"Tax : $"<<tax<<endl;
    double total=tp+tax;
    cout<<"=============================="<<endl;
    cout<<"Total Estimate : $"<<total<<endl;

    return 0;
}
