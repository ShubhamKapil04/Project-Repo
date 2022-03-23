#include<iostream>

using namespace std;

void MainMenue()
{
    cout <<"**********MAIN MENUE**********"<<endl;
    cout <<" 1. Check Balance " << endl;
    cout <<" 2. Deposite Money " << endl;
    cout <<" 3. Withdrow Money " << endl;
    cout <<" 4. Exit " << endl;
    cout <<"******************************"<<endl;
}


int main()
{
    // Deposite Money, Check Balance, Withdraw Money, Exit
    int option;
    double balance = 200;

    do{

     MainMenue();
     cout << " Option :" ;
     cin >> option;

     system("cls");

       switch (option){
       case 1:cout << "Balance is " << balance << " $ " << endl; 
        break;

       case 2:cout << " Enter the Amount you want to Deposite : " ;
       double depositeAmount;
       cin >> depositeAmount;
       balance += depositeAmount;
       break;

       case 3:cout << "Withdraw Money" ;
       double withdrawmoney;
       cin >> withdrawmoney;
            if(withdrawmoney <= balance)
                balance -= withdrawmoney;
            else
                cout << "Your Broke" << endl;
        break;
       }

    } while (option!=4);
    
    
    system("pause>0");
}