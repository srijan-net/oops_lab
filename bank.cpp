#include<iostream>
#include<string>
using namespace std;
class bank
{	private:
    string acc_holder;
	int acc_no;
	float balance;
	string depo_name;	
	string acc_type;	
	public:
    void display_all()
    {
        cout<<"name\taccount no:\n";
        cout<<acc_holder<<"\t"<<acc_no<<"\n";
    }
    void display_balance()
	{	
        cout<<"balance for acc no. --> "<<acc_no<<" of "<<acc_holder<<" is "<<balance;
	}
    void deposit(int depo_amt,string deponame)
    {
        this->balance+=depo_amt;
        this->depo_name=deponame;
    }
    void IntDeposit(int ac_no,int depo_amt,string deponame)
    {
        this->acc_no=ac_no;
        this->balance+=depo_amt;
        this->depo_name=deponame;
        int a;
        cout<<"\n account type..?\n1.savings\n2.current\n3.default->savings\n";
        cin>>a;
        if(a==2)
        {
            this->acc_type="current";
        }
        else
        {
            this->acc_type="savings";
        }

    }
    void withdraw(int amount)
    {
        if(amount>balance)
        {
            cout<<"short on balance\n";
        }
        else
            this->balance-=amount;
    }
};

int main()
{
    int n;
    int acc_no;
    float balance;
    string acc_holder_namee;
    string depositor;
    cout<<"enter number of coustmer--> ";
    cin>>n;
	bank b[n];
    for(int i=0;i<n;i++)
    {       
        cout<<"enter the name of acc holder "<<i+1<<" ";
	    cin>>acc_holder_namee;
        cout<<"enter the acc_no for coustmer no. "<<i+1<<" ";
	    cin>>acc_no;
        cout<<"enter the initial deposit for coustmer no. "<<i+1<<" ";
	    cin>>balance;
        b[i].IntDeposit(acc_no,balance,acc_holder_namee);
        cout<<"\n";
    }
    while(true)
    {
        int c;
        cout<<"enter your choice-->";
        cout<<"\n1.deposit\n2.withdrwal\n3.display\n4.exit\n--> ";
        cin>>c;
        if(c==1)
        {
            int x;
            string depo_name;
            int depo_amt;
            cout<<"press corresponding acc number-> \n";
            for(int i=0;i<n;i++)
            {
                b[i].display_all();
                cout<<"->"<<i<<"\n";
            }
            cin>>x;
            cout<<"enter depositor name-> ";
            cin>>depo_name;
            cout<<"\nenter deposit amount-> ";
            cin>>depo_amt;
            b[x].deposit(depo_amt,depo_name);
        }
        if(c==2)
        {
            int amut;
            int x;
            cout<<"press corresponding acc number-> \n";
            for(int i=0;i<n;i++)
            {
                b[i].display_all();
                cout<<"->"<<i<<"\n";
            }
            cin>>x;
            cout<<"enter amount-> ";
            cin>>amut;
            b[x].withdraw(amut);
        }
        if(c==3)
        {
            cout<<"press corresponding acc number-> \n";
             for(int i=0;i<n;i++)
            {
                
                b[i].display_balance();
                cout<<"->"<<i<<"\n";
            }

        }
        if(c==4)
        {
            break;
        }
    }
	return 0;
}