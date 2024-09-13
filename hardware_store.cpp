#include<iostream>
using namespace std;
class invoice
{
    private:
    string partNumber;
    string partDescrip;
    int quanty;
    double price_per_iteam;
    public:
    // constructure -- idk what ist doing but... sir ne bola h
    invoice(string partNumber,string partDescrip,int quanty,double price_per_iteam)
    {
        this->partNumber=partNumber;
        this->partDescrip=partDescrip;
        this->quanty=quanty;
        this->price_per_iteam=price_per_iteam;

    }
    // set methods
    void SetPartNumber(string n)
    {
        this->partNumber=n;
    }
    void SetPartDescrip(string n)
    {
        this->partDescrip=n;
    }
    void SetQuantity(int n)
    {   if(n<0)
        {

        this->quanty=0;
        }
        else
        {
        this->quanty=n;

        }
    }
    void SetPrice_per_iteam(double n)
    {
        if(n<0)
        {
        this->price_per_iteam=0;
        }
        else
        {
        this->price_per_iteam=n;
        }
    }
    //get methods
    string GetpartNumber()
    {
        return partNumber;
    }
    string GetPartDescrip()
    {
        return partDescrip;
    }
    int GetQuantity()
    {
        return quanty;
    }
    double GetPrice_per_item()
    {
        return price_per_iteam;
    }

 // 
    double getInvoiceAmount()
    {
        double amount=GetQuantity()*GetPrice_per_item();
        // cout<<"invoice amount is => "<<amount<<"\n";
        return amount;
    }
};
int main()
{
    string partnumber;
    string partdescrip;
    int quanty;
    double price_per_iteam;
    cout<<"enter part number-> ";
    cin>>partnumber;
    // i.SetPartNumber(partnumber);
    cout<<"\nenter part description-> ";
    cin>>partdescrip;
    // i.SetPartDescrip(partdescrip);
    cout<<"\nenter price per item-> ";
    cin>>price_per_iteam;
    // i.SetPrice_per_iteam(price_per_iteam);
    cout<<"\nenter quantity-> ";
    cin>>quanty;
    // i.SetQuantity(quanty);
    invoice i(partnumber,partdescrip,quanty,price_per_iteam);

    cout<<"\n the invoice amount is--> "<<i.getInvoiceAmount();
    return 0;
}
