#include<iostream>
#include<string>
using namespace std;
class hotel
{	private:
	int rno;
	int days;
	float tarrif;
	float price;
	string name;	
	float cla(int day,float tarrif)
	{
		price=(day*tarrif);
		if(price>10000)
		{
			price=price+(1.05*price);
		
		}	
		return price;
	}
    public:
    void chechkIN(string n,float u,int day,int r)
	{	name=n;
		tarrif=u;
		days=day;
		rno=r;
	}
	void checkOut()
	{
        cout<<name<<endl<<days<<endl<<rno<<"\n";
        float x= cla(days,tarrif);
        cout<<"price is--> ";
        cout<<x;
	
	}
};

int main()
{
    int n;
	float tarif;
	float price;
	int day;
	int room_no;
	string namee;
    cout<<"enter number of coustmer--> ";
    cin>>n;
	hotel h[n];
    for(int i=0;i<n;i++)
    {       
        cout<<"enter the days for coustmer no. "<<i;
	    cin>>day;
        cout<<"enter the name for coustmer no. "<<i;
	    cin>>namee;
        cout<<"enter the tarrif for coustmer no. "<<i;
	    cin>>tarif;
        cout<<"enter the room no  for coustmer no. "<<i;
	    cin>>room_no;
        h[i].chechkIN(namee,tarif,day,room_no);
    }
    for(int i=0;i<n;i++)
    {
		cout<<"details are as follows for coust no.  --> "<<i<<"\n";
        h[i].checkOut();
    }
	// h1.chechkIN(namee,tarif,day,room_no);
	return 0;
}jhgsdfhb
