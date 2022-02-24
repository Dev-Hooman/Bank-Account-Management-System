#include<iostream>
#include<cstring>
#include<windows.h>
#include<conio.h>
#include<limits>
using namespace std;

class BankAccount{
	
	private:
		char user_name[50];
		int user_pin;
		char AccountType[50];
		long Balance;
		int alter_pin;
		long ammount;
	public:
		char option,repeat;
		
		BankAccount(){
		}
		
		BankAccount(char u_n[50], char a_t[50], int u_p, long Bal)
		{
			strcpy(user_name, u_n);
			strcpy(AccountType, a_t);
			user_pin = u_p;
			Balance = Bal;
		}
		int deposit(){
			
        	cout<<"\t\t\t\tHow much Ammount You want to Enter? "<<endl<<endl;
			cout<<"\t\t\t\tAmmount = Rs";
			cin>>ammount;
			Balance=Balance+ammount;
			cout<<endl<<"\t\t\t\t"<<"Deposit Successfull "<<char(251)<<endl<<endl;
			
			cout<<"\t\t\t\tYour Total Balance is Rs"<<Balance<<endl;
		}
		int Withdraw()
		{
			
			cout<<"\t\t\tEnter Ammount to Withdraw: "<<"\t\tCurrent Balance = Rs"<<Balance<<endl;
			cout<<"\t\t\t\t";
			cin >> ammount;
        	if (ammount <= Balance){
        		
        		Balance = Balance - ammount;
        		cout<<endl<<"\t\t\t"<<"Withdraw Successfull "<<char(251)<<endl<<endl;
        		cout<< "\t\t\tTotal Balance = Rs"<<Balance<< endl;
				}
            
        	else{
        		cout<<"\t\t\t\tInsufficient Balance... "<< "Total Balance = Rs"<<Balance<<endl;
        	}
		}
		
		int openAccount()
		{
			cout<<"\t\t\t\tMy Account Details:"<<endl<<endl;
			cout<<"\t\t\t\tUser Name: "<<user_name<<endl<<endl;
			cout<<"\t\t\t\tUser Account Pin: "<<user_pin<<endl<<endl;
			cout<<"\t\t\t\tAccount Type: "<<AccountType<<endl<<endl;
			cout<<"\t\t\t\tBalance Rs:"<<Balance<<endl<<endl;
		}
		
		
		int manage();
		int SavingLoading();	//loading Functions
		int PleaseWaitLoading();
		int WelcomeLoading();
		int GoodByeLoading();
		~BankAccount()
		{
		}
};
int BankAccount::manage()
{
	int attempts = 0;
	while(attempts<5){
		mainMenu:
	cout<<endl<<"\nEnter Your Pin To access: ";
	
	cin>>alter_pin;
	
	if(alter_pin==user_pin){
		do{
		cout<<"\t\t\t\t\t";
		system("CLS");
		cout<<"\t\t\t\t####################################"<<endl;
		cout<<"\t\t\t\t\t";
		WelcomeLoading();
		cout<<"\n\t\t\t\t####################################"<<endl;
		cout<<endl<<endl;
		cout<<"\t\t\t"<<"[A] Deposit ";
		cout<<"\t\t\t\t";
		cout<<"User = "<<user_name<<endl;
		cout<<"\t\t\t"<<"[B] Withdraw";
		cout<<"\t\t\t\t";
		cout<<"Balance = "<<Balance<<endl;
		cout<<"\t\t\t"<<"[C] Account Details"<<endl;
		cout<<"\t\t\t"<<"[L]    Log out   "<<endl;
		cout<<"\t\t\t ";
		cin>>option;
		switch(BankAccount::option){
			
			case 'A':
			case 'a':
				{
					deposit();
					
					cout<<"\n\t\t\t\t\tPress Y to Go back"<<endl;
					cin>>repeat;
				}
			break;

			case 'b':
			case 'B':
				{
					Withdraw();
					cout<<"\n\t\t\t\t\tPress Y to Go back"<<endl;
					cin>>repeat;
				}
			break;
			
			case 'C':
			case 'c':
				{
					openAccount();
					cout<<"\n\t\t\t\t\tPress Y to Go back"<<endl;
					cin>>repeat;
				}
			break;
			
			case 'L':
			case 'l':
				{	
					system("CLS");
					cout<<"\n\t\t\t\t\t";
					GoodByeLoading();
					BankAccount();
					cout<<endl<<"\n\t\t\t\t\t";
					system("Pause");
					system("CLS");
					goto mainMenu;
				}
			break;
			
			default:{
				break;
			}
		}
		
	}while(repeat=='Y'||'y');
	}
	

	else{
		system("CLS");
		cout<<"\n\t\t\t\t\tError 404, Wrong Pin Code Please Try Again"<<"    Attempts: "<<attempts<<"\\4"<<endl;
		attempts++;
	}
}
	if(attempts==5){                                                          // login System limit
    	cout<<"\n\t\t\t\t\tToo many login attempts... Program Will terminate now!!! ";
    	return 0;
	}

}


int BankAccount::SavingLoading(){
	cout<<"S";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"v";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"n";
	Sleep(100);
	cout<<"g";
	Sleep(100);
	cout<<".";
	Sleep(100);
	cout<<".";
	Sleep(100);
	cout<<".";
	Sleep(100);
}
int BankAccount::PleaseWaitLoading(){
	cout<<"P";
	Sleep(100);
	cout<<"l";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"s";
	Sleep(100);
	cout<<"e ";
	Sleep(100);
	cout<<"W";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"t";
	Sleep(100);
	cout<<".";
	Sleep(100);
	cout<<".";
	Sleep(100);
	cout<<".";
	Sleep(100);
}
int BankAccount::WelcomeLoading(){
	cout<<"-";
	Sleep(100);
	cout<<"-";
	Sleep(100);
	cout<<"-";
	Sleep(100);
	cout<<"-";
	Sleep(100);
	cout<<"W ";
	Sleep(100);
	cout<<"E ";
	Sleep(100);
	cout<<"L ";
	Sleep(100);
	cout<<"C ";
	Sleep(100);
	cout<<"O ";
	Sleep(100);
	cout<<"M ";
	Sleep(100);
	cout<<"E ";
	Sleep(100);
	cout<<"-";
	Sleep(100);
	cout<<"-";
	Sleep(100);
	cout<<"-";
	Sleep(100);
	cout<<"-";

}
int BankAccount::GoodByeLoading(){
	int sml = 1;
	char ch = sml;
	cout<<"-";
	Sleep(110);
	cout<<"G ";
	Sleep(110);
	cout<<"o ";
	Sleep(110);
	cout<<"o ";
	Sleep(110);
	cout<<"d ";
	Sleep(110);
	cout<<"  ";
	Sleep(110);
	cout<<"B ";
	Sleep(110);
	cout<<"y ";
	Sleep(110);
	cout<<"e ";
	Sleep(110);
	cout<<"!";
	Sleep(110);
	cout<<"! ";
	Sleep(110);
	cout<<" "<<ch;
	Sleep(110);
	cout<<" "<<ch;
	Sleep(110);
}

int main()
{
	
	char option;
	BankAccount Random;
	char user[50], atype[50];
	int pin, ca;
	long bl;
	char repeat;
	
	do{
	cout<<"\t\t\t\t[1] Create Bank Account"<<endl;
	cout<<"\t\t\t\t[2] Login "<<endl;
	cout<<"\t\t\t\t[3] Exit "<<endl;
	cout<<"\t\t\t\t";
	cin>>ca;
	if(ca==1){
		
		cout<<"\t\t\t\t---Enter Your Bank Account Details---"<<endl<<endl;
		cout<<"\t\t\t\t\tEnter Name: ";
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cin.get(user,50);
		cout<<endl<<"\t\t\t\t\tEnter Account Type: ";
		cin>>atype;
		cout<<endl<<"\t\t\t\t\tYour Balance : ";
		cin>>bl;
		cout<<endl<<"\t\t\t\t\tEnter Your Pin Code: ";
		cin>>pin;
		cout<<endl;
		BankAccount useracc(user, atype, pin, bl);
	
		cout<<"\t\t\t\t\t     ";
		Random.SavingLoading();
		cout<<endl<<"\n\t\t\t\t\t   ";
		Random.PleaseWaitLoading();
		cout<<endl<<"\n\t\t\t\t\t";
		cout<<"  Save Successful "<<char(251);    //251 Asci Code for Check Mark
		system("cls");
		cout<<endl<<"\n\t\t\t\t\t";
		cout<<"Save Successful "<<char(251);
		
		cout<<"\n\t\t\t\t\tPress Y to Go back"<<endl;
		cin>>repeat;
		
	}
	else if(ca==2){
		BankAccount useracc(user, atype, pin, bl);
		useracc.manage();	
		
		cout<<"\n\t\t\t\t\tPress Y to Go back"<<endl;
		cin>>repeat;
	}
	else if(ca==3)
	{
		return 0;
		
	}
	}while(repeat=='Y'||'y');

}
