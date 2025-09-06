#include<iostream>
using namespace std;
int main(){
	int seat_no[5]={0},i=0;
	
	//Displaying sitting plan
	cout<<"The seats available:\n";
	cout<<"\tC1\tC2\tC3\tC4\tC5"<<endl;	
	cout<<"In R1:"<<"\t"<<1<<"\t"<<2<<"\t"<<3<<"\t"<<4<<"\t"<<5<<endl;
	cout<<"In R2:"<<"\t"<<6<<"\t"<<7<<"\t"<<8<<"\t"<<9<<"\t"<<10<<endl;
	cout<<"In R3:"<<"\t"<<11<<"\t"<<12<<"\t"<<13<<"\t"<<14<<"\t"<<15<<endl;
	cout<<"In R4:"<<"\t"<<16<<"\t"<<17<<"\t"<<18<<"\t"<<19<<"\t"<<20<<endl;
	cout<<"In R5:"<<"\t"<<21<<"\t"<<22<<"\t"<<23<<"\t"<<24<<"\t"<<25<<endl;
	
	cout<<"\n--------------------------------------------------\n";
	
	//displaying Price list
	int r1,r2,r3,r4,r5;
	r1=40;
	r2=35;
	r3=30;
	r4=30;
	r5=25;
	cout<<"Price List:"<<endl;
	cout<<"FOR R1:"<<r1<<"$\n";
	cout<<"FOR R2:"<<r2<<"$\n";
	cout<<"FOR R3:"<<r3<<"$\n";
	cout<<"FOR R4:"<<r4<<"$\n";
	cout<<"FOR R5:"<<r5<<"$\n";
	
	
	//Storing seat numbers for reservation
	char choice;
	do
	{
		cout<<"Enter a seat number you want to reserve:\n";
		cin>>seat_no[i];
		
		//It will thorugh error if seat number exceed 25
		if(seat_no[i]>25 ){
			cout<<"Theater seats are between 1-25 :(\nKindly enter a valid seat no. :)\n";
			continue;
		}
		
		//It will continue the loop agian if two same seats are booked
		if(seat_no[0]==seat_no[1] || seat_no[0]==seat_no[2]){
			cout<<"Same seat can not be booked twice:(\n ";
			continue;
	}		
			
		i++; //incremnet operator
		
		//it will tell user that the user is allow to book only 5 seats
		if (i==5){
			cout<<"No more than 5 seats are allowed to Choose at once :)\n";
			break;
		}
		
		//it will ask user if he wants to book another seat
		cout<<"DO you want to reserve another seat y/n:\n";
		cin>>choice;
		
		
		// it will validate user choice
		if (choice=='y' || choice=='Y'){
			continue;
		}
		else{
			break;
		}
		
		
		
	}while(i<=5);
	
	
	
   // int booked_seats[30];
    
	//This loop will display the seats booked by user
	cout<<"Your booked seats are:";		 
	for(int x=0; x<i;x++){
		if(seat_no[x]!=0){
			
			cout<<"\t"<<seat_no[x];
			
		}
		else{
			break;
		}
	}
	cout<<"\n";
	int bill=0;
	
	
	//this will display invoice to user according to price list;
	for(int p=0;p<i;p++){
		if(seat_no[p]<=5){
			cout<<"seat No."<<seat_no[p]<<"="<<40<<"$\n";
			bill=bill+40;
			
		}
		else if(seat_no[p]<=10){
			cout<<"seat No."<<seat_no[p]<<"="<<35<<"$\n";
			bill=bill+35;
		}
		
		else if(seat_no[p]<=15){
			cout<<"Seat No."<<seat_no[p]<<"="<<30<<"$\n";
			bill=bill+30;
		}
		
		else if(seat_no[p]<=20){
			cout<<"Seat No."<<seat_no[p]<<"="<<30<<"$\n";
			bill=bill+30;
		}
		
		else if(seat_no[p]<=25){
			cout<<"Seat No."<<seat_no[p]<<"="<<25<<"$\n";
			bill=bill+25;
		}
	}
	cout<<"\nYou have to pay:"<<bill<<"$\nThanks For choosing us :)";
}
	

	

