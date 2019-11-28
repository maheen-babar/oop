#include<iostream>
#include<string>
using namespace std;
class Account{
	private:
	int account_number;
		string first_name;
		string last_name;
		double balance;
		
		public:
			Account()
			{
				account_number= balance = 0;
				first_name = " ";
				last_name = " ";
				
			}
			Account(int a,string b, string c,  double d) : account_number(a),first_name(b), last_name(c),balance(d)
			{
				
			}
			
				//Account number//
				
				int getaccount_number(){
					return account_number;	
				}
				void set(int a, string b, string c, double d)
				{
					account_number = a;
					first_name = b;
					last_name = c;
					balance = d;
				}
				int setaccount_number(){
					int a;
					label:
					cin >> a;
					if(a >9999 &&  a < 100000)
					account_number=a;
					else
					{
						cout << "Invalid balance Enter again\n";
					goto label;
					}
					return account_number;
				}
			//First name//
			string getfirst_name(){
					return first_name;
				}
				void setfirst_name(string b){
		
					first_name=b;
					
				}
				
				//last name//
				string getlast_name(){
					return last_name;
				}
				void setlast_name(string c){
					
					
					last_name=c;
				
				}
				
			
				
				//Balance//
					double getbalance(){
					return balance;
				}
				void setbalance(double d){
					if(d>=0){
						balance=d;	
					}
				
					
				
				
				}
};

int main(){
	int z;
	string x,y;
	double d;
	Account acc;
	cout<<"Please Enter Your Account Number: \n";
	z = acc.setaccount_number();
	cout<<"Please Enter Your First Name: \n";
	cin>>x;
	cout<<"Please Enter Your Last Name: \n";
	cin>>y;
	cout<<"Please Enter Your Balance: \n";
	cin>>d;
	
	 acc.set(z,x,y,d);
	cout<<"Your Account Number Is: "<<acc.getaccount_number()<<endl;
	cout<<"Your First Name Is: "<<acc.getfirst_name()<<endl;
	cout<<"Your Last Name Is: "<<acc.getlast_name()<<endl;
	cout<<"Your Account Balance Is: "<<acc.getbalance()<<endl;
	
	char choice=' ';
	cout<<"Do you want to run again? Y/y \n";
	cin>>choice;
	if(choice=='Y'|| choice=='y'){
		int main();
	}
	return 0;
}
