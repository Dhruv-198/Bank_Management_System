// BANK MENAGEMENT SYSTEM...

#include<iostream>
#include<string>
using namespace std;
int Bank_Balance=15000;
long  long Account_No,Mobile_No;
string F_Name,L_Name,Address;

void Bank();

//Open Account.....

void OpenAccount(){
	
	cout<<"Welcome To Our Bank(BOB) :- "<<endl;
	cout<<"Enter Your First Name : ";
	cin>>F_Name;
	cout<<"Enter Your Last Name : ";
	cin>>L_Name;
	cout<<"Enter Your Account Number : ";
	cin>>Account_No;
	cout<<"Enter Your Mobile Number : ";
	cin>>Mobile_No;
	cout<<"Enter Your Current Address : ";
	cin>>Address;
	cout<<endl;
	
	cout<<"Your First Name is : "<<F_Name<<endl;
	cout<<"Your First Name is : "<<L_Name<<endl;
	cout<<"Your Account Number is : "<<Account_No<<endl;
	cout<<"Your Mobile Number is : "<<Mobile_No<<endl;
	cout<<"Your Current Address is : "<<Address<<endl;
	cout<<endl;
	
	cout<<"Congratulation, Your Account In Our Bank(BOB) Was Successfully Opened."<<endl;
	cout<<"Thank You, For Join Our Bank(BOB)."<<endl;
}

//Bank Balance..... 

void Balance(){
	cout<<"Your Account Bank Balance is = "<<Bank_Balance<<endl;
}

//Deposite..... 

void Deposite(){
	int Deposite;
	cout<<"Enter The Deposite Amount : ";
	cin>>Deposite;
	Bank_Balance=Bank_Balance+Deposite;
	cout<<"After Deposite Total Balance is : "<<Bank_Balance<<endl;
}

//Withdrawal....

void Withdrawal(){
	int Amt_Withdrawal;
	cout<<"Enter The Withdrawal Amount : ";
	cin>>Amt_Withdrawal;
	
	if(Amt_Withdrawal>0 && Amt_Withdrawal<=Bank_Balance){
		Bank_Balance=Bank_Balance-Amt_Withdrawal;
		cout<<"After Withdrawal Total Balance is : "<<Bank_Balance<<endl;
	}
	else{
		cout<<"Not Enogh Moneny or Invalide Amount."<<endl;
		cout<<"Please Enter Valide Amout."<<endl;
	}
}

//Transaction.....

void Transaction(){
	int deposite_1,deposite_2,Amt_Withdrawal_1,Amt_Withdrawal_2,Account_No;
	cout<<"Your Account : "<<Account_No <<" Bank Balance is = "<<Bank_Balance<<endl;
	cout<<"Enter Deposite Ammount : ";
	cin>>deposite_1;
	if(deposite_1>0){
		deposite_2=Bank_Balance+deposite_1;
		cout<<"Transaction History Of Deposite Ammount is : "<<deposite_1 <<endl;
		cout<<"After deposite Bank Balance Is : "<<deposite_2<<endl;	
	}
	else{
		cout<<"Transaction is None."<<endl;
	}
	cout<<"Enter Withdrawal Ammount : ";
	cin>>Amt_Withdrawal_1;
	
	if(Amt_Withdrawal_1>0){
		Amt_Withdrawal_2=deposite_2-Amt_Withdrawal_1;
		cout<<"Transaction History Of Withdrawal Ammount is : "<<Amt_Withdrawal_1 <<endl;
		cout<<"After Withdrawal Bank Balance Is : "<<Amt_Withdrawal_2<<endl;	
	}
	else{
		cout<<"Transaction is None."<<endl;
	}
}

//Modified Account.....

void Modified(){
	int M_choice;
	while(M_choice<4)
				{
					cout<<"1. First Name"<<endl;
					cout<<"2. Last Name"<<endl;
					cout<<"3. Mobile Number"<<endl;
					cout<<"4. Address"<<endl;
					cout<<"5. Exit"<<endl;
					
					cout<<"Enter your choice you want to modify (1-5) : ";
					cin>>M_choice;
					
					switch(M_choice){
						case 1:
							cout<<"Current Account Holder's First Name : "<<F_Name<<endl;
							
							cout<<"Enter Your New First Name : ";
							cin>>F_Name;
							cout<<"Modified First Name is : "<<F_Name<<endl;
							break;
							
						case 2:
							cout<<"Current Account Holder's Last Name : "<<L_Name<<endl;	
							
							cout<<"Enter Your New Last Name : ";
							cin>>L_Name;
								cout<<"Modified Last Name is : "<<L_Name<<endl;
							break;
						case 3:
							cout<<"Current Account Holder's Mobile Number : "<<Mobile_No<<endl;
							
							cout<<"Enter Your New Mobile Number : ";
							cin>>Mobile_No;
								cout<<"Modified Mobile Number is : "<<Mobile_No<<endl;
							break;	
						case 4:
							cout<<"Current Account Holder's Mobile Number : "<<Address<<endl;
							
							cout<<"Enter Your New Address : ";
							cin>>Address;
							cout<<"Modified Address  is : "<<Address<<endl;
							break;
						case 5:
							cout<<"Your Accout is Successfully Modified"<<endl;
							break;
						default:
							cout<<"invalid Choice :"<<endl;		
					}	 
				}    
			}   
					
//Switch Case..... 

void details_choice(int choice){
	
	switch(choice){
		case 1:
			OpenAccount();
			break;
		case 2:
			Balance();
			break;
		case 3:
			Deposite();
			break;
		case 4:
			Withdrawal();
			break;	
		case 5:
			Transaction();
			break;
		case 6:
			Modified();
			break;
		default :
			break;	
	}

//Repeat.....

char repeat;

	cout<<"\n Do You Want Any Thing Modified In Your Account?(y or yes || n or no) :";
	cin>>repeat;
	
	if(repeat=='y' || repeat=='Y'){
		cout<<endl;
		Bank();
	}
	else{
		cout<<"Thank You For Visiting our Bank(BOB)."<<endl;
	}
}
void Bank(){
	int choice;
	cout<<"***     BANK OF BARODA     ***"<<endl;
	
	cout<<"1 : Open Account:- "<<endl;
	cout<<"2 : Balance:- "<<endl;
	cout<<"3 : Deposite:- "<<endl;
	cout<<"4 : Withdrawal:- "<<endl;
	cout<<"5 : Transactions:- "<<endl;
	cout<<"6 : Modified Account:- "<<endl;
	cout<<"7 : Exit:- "<<endl;
	cout<<"Enter Your Choice :- ";
	cin>>choice;
	
	details_choice(choice);
}
int main(){
	Bank();
}
