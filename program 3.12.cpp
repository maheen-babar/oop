//Program 3.12//

#include<iostream>
#include<string>
using namespace std;
class Date{
	private:
		int month;
		int day;
		int year;
		public:
		Date(int a, int b, int c){ 
			month=a;
			day=b;
			year=c;
		}
		
		int getmonth(){
			return month;
		}
		
		void setmonth(int a){ 
			if(month<=12){ 
				month=a;
			}
			else{
				month=1; 
			}
			
		}
		int getday(){ 
			return day;
		}
		void setday(int b){
			day=b;
		}
		int getyear(){
			return year;
		}
		void setyear(int c){
			year=c;
		}
		DisplayDate(){ 
			cout<<getmonth()<<" / "<<getday()<<" / "<<getyear()<<endl; 
		}
};

int main(){ 
	Date detail(4,18,2019); 
	cout<<detail.DisplayDate(); 
}
