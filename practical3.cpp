#include<iostream> 
#include<string>
using namespace std;

class publication{
	string title;
	float price;
	public:
	publication()
	{
		title = "";
		price = 0;
		}
	void getdata()
	{
		cout<<"Enter the data of the product"<<endl;
		cout<<"Enter the title"<<endl;
		getline(cin,title);
		cout<<"Enter the price";
		cin>>price;
		}
	void printdata()
	{
		cout<<"The title is"<<title<<endl;
		cout<<"Price of the product is "<<price<<endl;
	}
};//End of the class publication 
//Deriving the classes book and tape
class book:public publication
{
	int pagecount;
	public:
	void addpagecount()
	{
		cout<<"Enter the pagecount of a book "<<endl;
		cin>>pagecount;
		if(pagecount<1)
		{
			throw pagecount;
		}
	}
	void getcount()
	{
		cout<<"The selected book's page count is"<<pagecount<<endl;
	}
};
class tapes:public publication
{
	float audiotime;
	public:
	void getaudiotime()
	{
		cout<<"Enter the audio time of the casset"<<endl;
		cin>>audiotime;
		if(audiotime<1)
		{
			throw audiotime;
		}
	}
	void printaudiotime()
	{
		cout<<"The selected tapes audio time is"<<audiotime<<endl;
	}
};
int main()
{
	try
	{
	//Creating common objects
	book b1;
	tapes t1;
	//getting the choice of the user 
	int choice,addingchoice;
	do{
	cout<<"Enter the choice"<<endl;
	cout<<"1. for Admin"<<endl;
	cout<<"2. for buyer"<<endl;
	cout<<"0. for exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the type of product for adding"<<endl;
			cout<<"1. For Book"<<endl;
			cout<<"2. for Casset"<<endl;
			cin>>addingchoice;
			if(addingchoice == 1)
			{	
				cin.ignore();
				b1.getdata();
				b1.addpagecount();
			}
			else if(addingchoice == 2)
			{   
				cin.ignore();
				t1.getdata();
				t1.getaudiotime();
			}
			else
			{
				cout<<"Invalid Choice!"<<endl;
			}
			break;
			
		case 2:
			cout<<"Enter the type of product you want to see"<<endl;
			cout<<"1. For Book"<<endl;
			cout<<"2. for Casset"<<endl;
			cin>>addingchoice;
			if(addingchoice == 1)
			{
				cin.ignore();
				b1.printdata();
				b1.getcount();
			}
			else if(addingchoice == 2)
			{
				cin.ignore();
				t1.printdata();
				t1.printaudiotime();
			}
			break;
		default:
			cout<<"You have enterd invalid choice"<<endl;
	}//end of switch
	}while(choice!=0);
	return 0;
	}
	catch(int e)
	{
		cout<<"Exception caught pagecount is invalid!";
	}
	catch(float e)
	{
		cout<<"Exception caught pagecount is invalid!";
	}
	catch(...)
	{
		cout<<"The exception caught !";
	}
	}//End of mainA