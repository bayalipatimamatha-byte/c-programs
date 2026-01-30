#include <iostream>
using namespace std;
class BankAccount
{
	int AvailableBalance;
	int AmountWithdraw;
	public:
           BankAccount()
		{
			cout<<"welcome"<<endl;
			cout<<" enter Available Balance= "<<endl;
			cin>>AvailableBalance;
			cout<<" enter Amount Withdraw= "<<endl;
			cin>>AmountWithdraw;
			}
			void checkbalance(){
				cout<<"Available Balance="<<AvailableBalance<<endl;
				cout<<"Amount Withdraw="<<AmountWithdraw<<endl;
				AvailableBalance=AvailableBalance-AmountWithdraw;
				cout<<"total amount available="<<AvailableBalance<<endl;
				}
				~BankAccount(){
				cout<<"transaction completed"<<endl;}
};
int main(){
	BankAccount a;
	a.checkbalance();
	return 0;
}
