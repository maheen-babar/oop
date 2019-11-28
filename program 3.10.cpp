

//Program 3.10//

#include<iostream>
#include<string>
using namespace std;

class Invoice{
	private:
		string part_number;
		string part_description;
		int quantity_item;
		int price_item;
		double value_added_tax;
		double discount;
		
		public:
			Invoice(string a, string b, int c, int d, double e=0.20, double f=0){
				part_number=a;
				part_description=b;
				quantity_item=c;
				price_item=d;
			    value_added_tax=e;
		         discount=f;
		}
			string	getpart_number(){
				return part_number;
			}
			
		void setpart_number(string a){
				part_number=a;
			}
		
			string	getpart_description(){
				 return part_description;
			}
			
		void setpart_description(string b){
				part_description=b;
			}	
		
		
			int	getquantity_item(){
				return quantity_item;
			}
			
		void setquantity_item(int c){
				quantity_item=c;
			}
		
		
			int	getprice_item(){
				return price_item;
			}
			
		void setprice_item(int d){
				price_item=d;
			}
			
				double	getvalue_added_tax(){
				 return value_added_tax;
			}
			
		void setvalue_added_tax(double e){
				value_added_tax=e;
			}
		
				double	getdiscount(){
				return discount;
			}
			
		void setdiscount(double f){
				discount=f;
			}	
			
			 getInvoice_amount(){
				float invoice_amount;
				float tax;
				invoice_amount=quantity_item*price_item;
				tax=(invoice_amount*value_added_tax)/100;
				invoice_amount += tax;
				cout<<"Amount after adding tax: "<<invoice_amount<<"\n"; //tax is 0.20//
				invoice_amount-=this->discount;

				return invoice_amount;
			}
			
};

int main(){

	string x,y;
	cout<<"Enter part Number: \n";
	cin>>x;
	cout<<"Enter part Description: \n";
	cin>>y;
	int u,z;
	cout<<"Enter Quantity of item: \n";
	cin>>u;
	cout<<"Enter price per item: \n";
	cin>>z;
		Invoice inn(x,y,u,z);
		cout<<"Part Number: "<<inn.getpart_number()<<endl;
		cout<<"Part Description: "<<inn.getpart_description()<<endl;
		cout<<"Enter quantity of item: "<<inn.getquantity_item()<<endl;
		cout<<"Enter price per item: "<<inn.getprice_item()<<endl;
		cout<<"Value Added Tax: "<<inn.getvalue_added_tax()<<endl;
		cout<<"Discount: "<<inn.getdiscount()<<endl;
			cout<<"Invoice Amount: "<<inn.getInvoice_amount();
	
	return 0;
}

