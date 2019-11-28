#include<iostream>
#include<string>
using namespace std;

class heartrate{
	private:
	string firstname;
	string lastname;
	int day,month,year;
	int Age;
	int maxh;
	float fifty,seventy;
	public:
	heartrate(string a,string b,int d,int m,int y){
	firstname=a;
	lastname=b;
	day=d;
	month=m;
	year=y;	
	}
	//Func first name
		getfirstname(){
		cout<<"Your first name is:"<<firstname<<"\n";
	}
	setfirstname(string a){
		firstname=a;
	}
	// fun last name
	
		getlastname(){
		cout<<"Your last name is:"<<lastname<<"\n";
	}
	setlastname(string b){
		lastname=b;
	}
	//fun date of birth
	
		getDOB(){
		cout<<"Your DOB is:"<<day<<"\\"<<month<<"\\"<<year<<"\n";
	}
	setDOB(int d,int m,int y){	
	    day=d;
	    month=m;
	    year=y;
	}
	
	//fun age
	age(){
		Age = 2019-year;
		cout<<"Age in years ="<<Age<<"\n";
	}
	
	//fun max heart 
	maxheartrate(){
		maxh=220-Age;
		cout<<"Maximum heart rate is"<<maxh<<"\n";
	}
	
	//func target heart
	targetheartrate(){
		fifty = maxh*0.5;
		seventy = maxh*0.7;
		cout<<"target heart rate is 50 to 70% \n"<<fifty<<" to "<<seventy<<"\n";
	}
	print(){
	getfirstname();
	getlastname();
	age();
	maxheartrate();
	targetheartrate();
	}
};



int main(){
	
	heartrate Heart_r("Maheen","Babar",06,06,1999);
	Heart_r.print();
	cout<<"\n";

}
