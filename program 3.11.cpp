//Program 3.11//

#include<iostream>
#include<string>
using namespace std;
class MotorVehicle{
	private:
		string make;
		string fuel;
		int year_manufacture;
		string color;
		int engine_capacity;
		
		public:
			MotorVehicle(string a, string b, int c, string d="white", int e=1498){
				make=a;
				fuel=b;
				year_manufacture=c;
				color=d;
				engine_capacity=e;
			}
			
			string getmake(){
				return make;
			}
			
			void setmake(string a){
				make=a;
			}
			
			
				string getfuel(){
				return fuel;
			}
			
			void setfuel(string b){
				fuel=b;
			}
			
				int getyear_manufacture(){
				return year_manufacture;
			}
			
			void setyear_manufacture(int c){
				year_manufacture=c;
			}
			
				string getcolor(){
				return color;
			}
			
			void setcolor(string d){
				color=d;
			}
			
			
				int getengine_capacity(){
				return engine_capacity;
			}
			
			void setengine_capacity(int e){
				engine_capacity=e;
			}
			
			displayCarDetails(){
				cout<<"---Your Car Deatil---\n";
				cout<<"Your car is made by: "<<getmake()<<" \n";
				cout<<"Your car fuel type is: "<<getfuel()<<" \n";
				cout<<"Your car manufacture year is: "<<getyear_manufacture()<<" \n";
				cout<<"Your car color is: "<<getcolor()<<" \n";
				cout<<"Your car engine capacity is: "<<getengine_capacity()<<" \n";
			}
};

int main(){
	MotorVehicle detail("BMW","Diesel",2009,"Red",1234);
cout<<detail.displayCarDetails();
}
