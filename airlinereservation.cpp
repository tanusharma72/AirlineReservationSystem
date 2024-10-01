#include <iostream>  
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
	public:
		Management(){
			mainMenu();
		}
};

class Details{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int c_id;
		char arr[100];
		
		void information(){
			
			cout<<"\n Enter the Cutomer ID : ";
			
			cin>>c_id;
			
			cout<<"\n Enter the Name : ";
			
			cin>>name;
			
			cout<<"\n Enter the Age : ";
			
			cin>>age;
			
			cout<<"\n Enter the Address : ";
			
			cin>>add;
			
			cout<<"\n Gender : ";
			
			cin>>gender;
			
			cout<<" Your details are saved with us \n "<<endl;
		}
};

int Details::c_id;
string Details::name;
string Details::gender;

class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		void flights(){
			string flightN[]={"Dubai","Canada","UK","India","USA","Austrailia","Europe"};
			
			for(int a=0; a<7; a++){
				cout<<(a+1)<<".flight to" <<flightN[a]<<endl;
			}
			
			cout<<"\n Welcome to the Airlines ! "<<endl;
			
			cout<<"Press the number of the country of which you want to book the flight : ";
			
			cin>>choice;
			switch(choice)
				{
					case 1:
						{
							cout<<"___________Welcome to Dubai Emirates_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. DUB - D0101"<<endl;
							
							cout<<"\t 08-10-2024  9:00 AM  10 hrs fligth  rs. 12000 "<<endl;
							
							cout<<"2. DUB - D0502"<<endl;
							
							cout<<"\t 09-10-2024  8:00 AM  10 hrs fligth  rs. 11000 "<<endl;
							
							cout<<"3. DUB - D0611"<<endl;
							
							cout<<"\t 09-10-2024  5:00 PM  10 hrs fligth  rs. 8000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							cin>>choice1;
							
							if(choice1==1){
								charges=12000;
								
								cout<<"\n You have successfully booked the flight DUB - D0101"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==2){
								charges=11000;
								
								cout<<"\n You have successfully booked the flight DUB - D0502"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==3){
								charges=8000;
								
								cout<<"\n You have successfully booked the flight DUB - D0611"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							cin>>back;
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}
					case 2:
					{
							cout<<"___________Welcome to Canadian Airlines_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. CAN - C5431"<<endl;
							
							cout<<"\t 12-10-2024  11:00 AM  9 hrs fligth  rs. 15000 "<<endl;
							
							cout<<"2. CAN - C6321"<<endl;
							
							cout<<"\t 13-10-2024  5:00 AM  9.5 hrs fligth  rs. 14500 "<<endl;
							
							cout<<"3. CAN - C7634"<<endl;
							
							cout<<"\t 13-10-2024  4:00 PM  10 hrs fligth  rs. 16000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							
							cin>>choice1;
							
							if(choice1==1){
								charges=15000;
								
								cout<<"\n You have successfully booked the flight CAN - C5431"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==2){
								
								charges=14500;
								
								cout<<"\n You have successfully booked the flight CAN - C6321"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==3){
								charges=16000;
								
								cout<<"\n You have successfully booked the flight CAN - C7634"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							cin>>back;
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}
					case 3:
						{
							cout<<"___________Welcome to UK Airways_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. UK - U00101"<<endl;
							
							cout<<"\t 16-11-2024  10:00 AM  20 hrs fligth  rs. 25000 "<<endl;
							
							cout<<"2. UK - U00105"<<endl;
							
							cout<<"\t 18-11-2024  5:00 AM  21 hrs fligth  rs. 23500 "<<endl;
							
							cout<<"3. UK - U00109"<<endl;
							
							cout<<"\t 15-11-2024  4:00 PM  19 hrs fligth  rs. 28000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							
							cin>>choice1;
							
							if(choice1==1){
								charges=25000;
								
								cout<<"\n You have successfully booked the flight UK - U00101"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==2){
								charges=23500;
								
								cout<<"\n You have successfully booked the flight UK - U00105"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==3){
								charges=28000;
								
								cout<<"\n You have successfully booked the flight UK - U00109"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							
							cin>>back;
							
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}
						case 4:
						{
							cout<<"___________Welcome to dil se INDIA Airlines_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. IND - IND101"<<endl;
							
							cout<<"\t 12-11-2024  11:00 AM  18 hrs fligth  rs. 15000 "<<endl;
							
							cout<<"2. IND - IND105"<<endl;
							
							cout<<"\t 13-11-2024  6:00 AM  15 hrs fligth  rs. 23000 "<<endl;
							
							cout<<"3. IND - IND109"<<endl;
							
							cout<<"\t 13-11-2024  3:00 PM  16 hrs fligth  rs. 20000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							cin>>choice1;
							
							if(choice1==1){
								charges=15000;
								
								cout<<"\n You have successfully booked the flight IND - IND101"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==2){
								charges=23000;
								
								cout<<"\n You have successfully booked the flight IND - IND105"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==3){
								charges=20000;
								
								cout<<"\n You have successfully booked the flight IND - IND109"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							
							cin>>back;
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}
						case 5:
						{
							cout<<"___________Welcome to USA Airlines_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. USA - USA102"<<endl;
							
							cout<<"\t 13-11-2024  11:00 AM  18 hrs fligth  rs. 10000 "<<endl;
							
							cout<<"2. USA - USA106"<<endl;
							
							cout<<"\t 13-11-2024  6:00 PM  15 hrs fligth  rs. 23000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							
							cin>>choice1;
							
							if(choice1==1){
								
								charges=10000;
								
								cout<<"\n You have successfully booked the flight USA - USA102"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==2){
								
								charges=23000;
								
								cout<<"\n You have successfully booked the flight USA - USA106"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							cin>>back;
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}
					case 6:
						{
							cout<<"___________Welcome to Autralian Airlines_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. AUS - AUS111"<<endl;
							
							cout<<"\t 15-11-2024  11:00 AM  21 hrs fligth  rs. 35000 "<<endl;
							
							cout<<"2. AUS - AUS112"<<endl;
							
							cout<<"\t 16-11-2024  6:00 AM  19 hrs fligth  rs. 30000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							cin>>choice1;
							
							if(choice1==1){
								charges=35000;
								cout<<"\n You have successfully booked the flight AUS - AUS111"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else if(choice1==2){
								
								charges=30000;
								
								cout<<"\n You have successfully booked the flight AUS - AUS112"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							
							cin>>back;
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}
						case 7:
						{
							cout<<"___________Welcome to Autralia Airways_____________\n"<<endl;
							
							cout<<"Your comfort is are priority...Enjoy the journey!"<<endl;
							
							cout<<"Following are the flights \n"<<endl;
							
							cout<<"1. EUR - EUR201"<<endl;
							
							cout<<"\t 17-11-2024  12:00 PM  25 hrs flight  rs. 40000 "<<endl;
							
							cout<<"\n Select the flight you want to book : ";
							cin>>choice1;
							
							if(choice1==1){
								
								charges=40000;
								
								cout<<"\n You have successfully booked the flight EUR - EUR201"<<endl;
								
								cout<<"You can go back to menu and take the ticket"<<endl;
							}
							else{
								cout<<"Invalid input , Shifted to the previous menu"<<endl;
								flights();
							}
							cout<<"Press any key to go back to the main menu : "<<endl;
							
							cin>>back;
							if(back==1){
								mainMenu();
							}
							else{
								mainMenu();
							}
						}	
						default:
							{
								cout<<"Invalid Input , Shifting to the main menu !..."<<endl;
								
								mainMenu();
								break;	
							}
				}
		}
};

float registration::charges;
int registration::choice;
class ticket : public registration,Details
{
	public:
		void Bill(){
			string destination=" ";
			ofstream outf("records.txt");
			{
				outf<<"__________XYZ Airlines__________"<<endl;
				
				outf<<"_____________Ticket_____________"<<endl;
				
				outf<<"________________________________"<<endl;
				
				outf<<"Customer ID "<<Details::c_id<<endl;
				
				outf<<"Customer Name "<<Details::name<<endl;
				
				outf<<"Customer gender \n"<<Details::gender<<endl;
				
				outf<<"\t Description "<<endl<<endl;
				
				
				if (registration::choice == 1)
				{
    				destination = "Dubai";
				}
		 		else if (registration::choice == 2)
				{
    				destination = "Canada";
				}
				else if (registration::choice == 3) 
				{
    				destination = "UK";
				}
				else if (registration::choice == 4) 
				{
    				destination = "India";
				}
				else if (registration::choice == 5) {
    				destination = "USA";
				}
				else if (registration::choice == 6) 
				{
    				destination = "Australia";
				}
				else if (registration::choice == 7) 
				{
    				destination = "Europe";
				}

				outf<<"Destination :\t\t"<<destination<<endl;
				
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		void dispBill(){
			ifstream ifs("records.txt");
			{
				if(!ifs){
					cout<<"File Error ! "<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
				
			}
			ifs.close();
		}
};


void mainMenu(){
	int lchoice, schoice,back;
	cout<<"\t              XYZ Airlines \n "<<endl;
	
	cout<<"\t______________Main Menu____________"<<endl;
	
	cout<<"\t___________________________________"<<endl;
	
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to Add the Customer Details     \t"<<endl; 
	
	cout<<"\t|\t Press 2 For Flight Registration         \t"<<endl; 
	
	cout<<"\t|\t Press 3 For Ticket and charges          \t"<<endl; 
	
	cout<<"\t|\t Press 4 to Exit                         \t"<<endl; 
	
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t___________________________________"<<endl;
	
	cout<<"Enter the Choice "<<endl;
	
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	switch(lchoice){
		case 1:
			{
				cout<<"____________Customers_____________\n"<<endl;
				
				d.information();
				cout<<"Press any key to go back to the Main Menu ";
				cin>>back;
				
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
				break;
			}
		case 2:
			{
				cout<<"___________Book a Flight using this System_____________\n"<<endl;
				r.flights();
				break;
			}
		case 3:
			{
				cout<<"_________GET YOUR TICKET_________\n"<<endl;
				t.Bill();
				cout<<"Your ticket is printed ,you can collected it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				cin>>back;
				if(back==1){
					t.dispBill();
					cout<<"Press any key to go back to Main Menu ";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
				}
				else{
					mainMenu();
				}
				break;
			}
		case 4:
			{
				cout<<"\n\n\t________THANK YOU_________"<<endl;
				break;
			}
		default:
			{
				cout<<"Invalid input , Please try again ! \n"<<endl;
				mainMenu();
				break;
			}
	}
}

int main(){
	Management Mobj;
	return 0;
}


