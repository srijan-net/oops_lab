#include<iostream>

using namespace std;
class Time
{
    private:
        int day;
        int sec;
        int min;
        int hr;
    public:
        Time()
        {
            this->day=0;
            this->sec=0;
            this->min=0;
            this->hr=0;
        }
        Time(int day,int hr,int min,int sec)
        {
            this->day=day;
            this->sec=sec;
            this->min=min;
            this->hr=hr;
        }
        void add(Time t1,Time t2)
        {
            this->sec=t1.sec+t2.sec;
            this->min=t1.min+t2.min+this->sec/60;
            this->sec%=60;
            this->hr=t1.hr+t2.hr+this->min/60;
            this->min%=60;
            this->day=t1.day+t2.day+this->hr/24;
            this->hr%=24;
            
        }
        void display()
        {
            cout<<"day\thr\tmin\tsec\n";
            cout<<day<<"\t"<<hr<<"\t"<<min<<"\t"<<sec;            
        }

};
int main()
{
    Time t1(0,13,43,62);
    Time t2(0,11,42,63);
    Time t3;
    t3.add(t1,t2);
    t3.display();
    return 0;
}
