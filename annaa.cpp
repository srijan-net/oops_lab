#include<iostream>
#include<string>
using namespace std;
class student
{	private:
	string name;	
	int roll_no;
	int score[5];
    public:
    void Inp(string n,int roll)
	{	this->name=n;
        this->roll_no=roll;
		for(int i=0;i<5;i++)
        {
            int x;
            cout<<"enter marks -> ";
            cin>>x;
            this->score[i]=x;
        }
	}

	int calculateTotalScore()
	{
        int sum;
        for(int i=0;i<5;i++)
        {
            sum+=score[i];
        }
        return sum;
        
	}
};

int main()
{
    int n;
	int roll;
	string namee;
    cout<<"enter number of students--> ";
    cin>>n;
	student s[n];
    for(int i=0;i<n;i++)
    {       
        cout<<"enter the student name ->  ";
	    cin>>namee;
	    cout<<"enter student roll name ";
	    cin>>roll;
        Inp(namee,roll);
    }
	return 0;
}