#include <iostream>
using namespace std;
int main()
{
    int initial_b,deposit_a,withdrawal_a,after_b,after_w;
    cout <<"Enter a initial balance in account : ";
    cin>>initial_b ;
    cout<<"Enter a amount that deposit : ";
    cin>>deposit_a;
    cout<<"Enter the withdrawal amount : ";
    cin>>withdrawal_a;
    after_b =initial_b+deposit_a;
    cout<<"The Balance after deposit is : "<<after_b<<endl;
    after_w= after_b -withdrawal_a;
    cout<<"The Balance after withrawal : "<<after_w<<endl;

}