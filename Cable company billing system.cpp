/* Name: Rana Muneeb Asad
   
*/

#include <iostream>
#include <conio.h>
using namespace std;

//Named constants � residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//named constants � business customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main() {
	int account_Number;
	char customer_Type;
	int numOfPrem_Channels;
	int numOfBasic_ServConn;
	char customerType;
	double amount_Due;
	


	cout << "Enter account number: ";
	cin >> account_Number;
	cout<<endl;

	cout << "Enter customer type: "<< "R or r (Residential), "<< "B or b (Business): ";
	cin >> customerType;
	cout << endl;

	switch(customerType)

	{
		case 'r':
		case 'R':
			cout<<"Enter the number of Premium Channels: ";
			cin>>numOfPrem_Channels;
			cout<<endl;

			amount_Due = RES_BILL_PROC_FEES+ RES_BASIC_SERV_COST+ numOfPrem_Channels *RES_COST_PREM_CHANNEL;

			cout << "Account number : "<< account_Number << endl;
			cout << "Amount due: "<< amount_Due << endl;


			break;

		case 'b':
		case 'B':

			cout << "Enter the number of basic "<< "service connections: ";
			cin >> numOfBasic_ServConn;
			cout << endl;
			cout << "Enter the number"<< " of premium ch annels: ";
			cin >> numOfPrem_Channels;
			cout << endl;

			if (numOfBasic_ServConn<= 10)

				amount_Due = BUS_BILL_PROC_FEES+ BUS_BASIC_SERV_COST+ numOfPrem_Channels *BUS_COST_PREM_CHANNEL;

			else

				amount_Due = BUS_BILL_PROC_FEES+ BUS_BASIC_SERV_COST+ (numOfBasic_ServConn - 10) *BUS_BASIC_CONN_COST+ numOfPrem_Channels *BUS_COST_PREM_CHANNEL;

			cout << "Account number: "<< account_Number << endl;
			cout << "Amount due: " << amount_Due<< endl;


			break ;

		default:
			cout << "Invalid customer type." << endl;
	}

	system("pause");
	getch();
}
