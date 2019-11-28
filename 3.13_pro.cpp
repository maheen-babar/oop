#include <iostream>
#include <string>
using namespace std;
class Account {
private:

   string name;
   int balance=0 ;
public:

   Account( string a, int initial_balance )
       {
name=a;
      if ( initial_balance > 0 )
         balance = initial_balance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }

 

   int getbalance() const {
      return balance;
   }

   void setname( string a ) {
      name = a;
   }

   string getname() const {
      return name;
   }


};


void displayAccount( Account accountToDisplay ) {
   cout << accountToDisplay.getname() << " balance is $"
      << accountToDisplay.getbalance() << endl;
}

int main() {

   Account account1("Jane Green", 50);
   Account account2( "John Blue", -7) ;

   cout << "account 1: ";
    displayAccount( account1 );
   cout << "account 2: ";
    displayAccount( account2 );

   int deposit;

   cout << "\nEnter deposit amount for account1: ";
   cin >> deposit;

   cout << "adding " << deposit << " to account1 balance\n\n";
   account1.deposit( deposit );

   cout << "account 1: "; displayAccount( account1 );
   cout << "account 2: "; displayAccount( account2 );

   cout << "\nEnter deposit amount for account2: ";
   cin >> deposit;

   cout << "adding " << deposit << " to account2 balance\n\n";
   account2.deposit( deposit );

   cout << "account 1: "; displayAccount( account1 );
   cout << "account 2: "; displayAccount( account2 );
}
