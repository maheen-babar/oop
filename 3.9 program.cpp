
//Program 3.9//

 #include<iostream>
#include<string>
using namespace std;
class account{
	private:
		string name;
		string password;
		int balance;
		
		public:
			account(string a, string b, int c){
					name=a;
			password=b;
			balance=c;
			cout<<"Constructor\n";
			}
		
			
			
			int getbal(){
				//cout<<"Your account balance is:"<<balance<<"\n";
				return balance;
			}
			
				addbalance(int a){
				balance=balance+a;
					cout<<"You added amount "<<a<<" in your account\n";
			}
			
			
			withdraw(int a){
				if(a>balance){
					cout<<"Withdrawl amount exceeded account balance\n";
				}
				else{
							balance=balance-a;
				cout<<"You withdraw amount "<<a<<" from your account\n";
				}
			
		
			}
			string GetName()
			{
				return name;
			}
	
};

#include<iostream>
#include<string>
#include "oop_assign1_ch3.cpp"
int main(){
	account acc("Maheen", "12345", 20000);
cout<< "Coustomer name: " <<acc.GetName() << "\n Balance: " <<acc.getbal();
cout<< "\n Enter Ammount for withdraw ";
int WD;
cin>>WD;
acc.withdraw(WD);
cout << "Ammount after withdraw " <<acc.getbal();
	
	return 0;
}
