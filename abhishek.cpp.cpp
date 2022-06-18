#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
int s,k,t,n;

class show
{
	public:
		
		char name[15],mail[20];
		long long int ph;
		void display();
};

void show::display()
    {
		cout<<"------------------Online movie ticket booking system------------"<<endl;
		cout<<"\n\n*******************  Avaliable Shows Are ********************\n";
	  
	  ofstream o;
	  o.open("Abhishek movie.txt");
	
		cout<<"Enter Movie Number\n 1 For Kesari\n";
		cout<<" 2 for Shazam\n";
		cout<<" 3 for Majili\n";
		cout<<" 4 for R.A.W \n";
		cin>>k;
		o<<"1-Keshari, 2-Shazam, 3-Majili, 4-Raw > movie-->>"<<k<<endl;
		
	cout<<"Enter Number of Timing do you want -----\n 1 for 9:30 a.m.";
	cout<<"\n 2 for 12:15 p.m.";
	cout<<"\n 3 for 2:30 p.m.";
	cout<<"\n 4 for 8:00 p.m.\n";
	cin>>t;
	o<<"1-9:30am, 2-12:15pm, 3-2:30pm, 4-8:00pm > timing-->>"<<t<<endl;
	
	cout<<"*******************  3 types of seat  ****************************";
		cout<<" \n 1. for Gold Rs450";
		cout<<"\n 2. for silver Rs250";
		cout<<"\n 3. for premium Rs180";
		cin>>s;
		o<<"1-Gold, 2-Silver, 3-Premium > seat type-->>"<<s<<endl;
		
		cout<<"\n Number of Seats do you want ----- ";
		cin>>n;
	    o<<"number of seats-->>"<<n<<endl;
	    
	    cout<<"enter your name -----";
		cin>>name;
		o<<"name-->>"<<name<<endl;
		
		cout<<"enter your no.-----";
		cin>>ph;
		o<<"mobile-->>"<<ph<<endl;
		
		cout<<"enter your mail-id-----";
		cin>>mail;
		o<<"mail id-->>"<<mail<<endl;
	
	}

class modify
{
	public:
		int t,x,s;
		modify()
		{
		cout<<"******************You can change time and seat-type******************";
		cout<<"Enter \n 1 for time \n 2 for seat-type";
		cin>>x;
		if(x==1)
		{
			cout<<"Enter\n 1 for 9:30 a.m.";
			cout<<"\n 2 for 12:15 p.m.";
			cout<<"\n 3 for 2:30 p.m.";
			cout<<"\n 4 for 8:00 p.m.";
			cin>>t;
		}
		else if(x==2)
		{
			cout<<"Enter\n 1. for Gold Rs450";
			cout<<"\n 2. for silver Rs250";
			cout<<"\n 3. for premium Rs180";
			cin>>s;
		  
		}
		}

};
class bill
{
	public:
		
		bill()
		{
	cout<<"Your  bill is ------ ";
	if(s==1)
	{
		cout<<450*n;
	}
	else if(s==2)
	{
		cout<<250*n;
	}
	else if(s==3)
	{
		cout<<180*n;
	}

}

};
class payment
{
	public:
	int n9,ca2,cvv;
	payment(){
	
	cout<<"\nchoose method of payment \n";
	cout<<"1.card\n 2. paytm";
	cin>>n9;
	if(n9==1)
	{
		cout<<"\nenter your card number \n";
		cin>>ca2;
		cout<<"enter your cvv number \n";
		cin>>cvv;
			}
			else if(n9==2)
			{
				cout<<"pay on 9898256455 \n";
			}
	cout<<"*******************PAYMENT SUCCESSFUL*****************";
	
}
};

int main()
{
	show a;
	
	a.display();
	
	
	int l;

	cout<<"Do you wanna modify it??\nEnter\n 1 for no \n 2 for yes";
	cin>>l;
	if(l==2)
	{
		modify q;
	}
	bill r;
	payment obj;
}
