//# Sample
//MyFirst trial.
#include<iostream>
#include <string>
using namespace std;

class BankAccount
{
    string Ownername;
    double balance;
 public:
      BankAccount(string name)
        {
           Ownername = name;
            balance = 00.00;
        }

 void Menu()
    {
        cout << "<<<<<<<<MENU>>>>>>>>" << endl ;
        cout  << "Welcome " << Ownername << endl ;
        cout << "Your current balance is #" << balance << endl ;
        cout << "Click an option to perform an operation" << endl ;
        cout << "1- Withdraw" << endl ;
        cout << "2- Deposit " << endl ;
        cout << "3- Transfer " << endl ;
        cout << "4- Recharge" << endl ;
        cout << "5- Exit" << endl ;
     }

 void Option()
    {
     int opt;
    do {
        cout << "Your option " << endl ;
        cin >> opt;
        switch (opt)
        {
            case 1:
            double amount ;
            cout << "Enter amount to withdraw" << endl ;
            cin>> amount ;
          if ( amount < balance && amount < 20000) 
              {
                  balance -= amount ;
                  cout << "Withdrawal successful " << endl ;
              } 
            else 
              {
                  if(amount > balance )
                    {
                     cout << "Please fund your account and Try again." << endl ;
                    }
                  if(amount > 20000)
                    {
                     cout << "Try lesser amount." << endl ;
                    } 
              }
              
            cout<< "Your current balance is : #" << balance << endl ;
            break;

            case 2: 
            cout << "Enter amount to deposit" << endl ;
            cin >> amount ;
            balance += amount ;
            cout << "You've successfully deposited #" << amount << endl ;
            cout<< "Your current balance is : #" << balance << endl ;
            break;

            case 3: 
                cout << "Not available😣" << endl ;
                break;

            case 4: 
                cout << "Not available😣" << endl ;
                break;

            }
        }

      while(opt != 5);
  } 

    void exit ()
        {
          cout << "Thank you for banking with us" << endl ;
          cout<< "Your leaving balance is : #" << balance << endl ;
        }
};

int main()
{
    string O_name;
    cout << "Enter Username. " << endl ;
    cin>> O_name;
    BankAccount user(O_name);
    user.Menu();
    user.Option();
    user.exit();
    return 0;
} 

            
     
            
            
            
              
            


   



           

