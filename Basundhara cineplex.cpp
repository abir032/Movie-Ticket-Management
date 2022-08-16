#include<bits/stdc++.h>
#include<string>
using namespace std;
ofstream outfile;
static int t=0,s;

class manager
{
protected:
    char name[50],address[50],experience[50];
    int tn,id,y,m,d;
    double time;
public:
    void managerinfo()
    {
        cout<<"Manager name: OVI";
        cout<<"\nManager id: 32";
        cout<<"\nContact no: 0174......."<<endl;
    }
    void customerinfo()
    {
        cout<<"Enter customer Name: ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"Enter Date: ";
        cout<<"(D:M:Y) "<<endl;
        cout<<"day: ";
        cin>>d;
        cout<<"Month: ";
        cin>>m;
        cout<<"Year: ";
        cin>>y;
        cout<<endl;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"\nPrevious movie enjoying experience(yes/no): ";
        cin.ignore();
        cin.getline(experience,50);
        cout<<"\nEnter how many ticket do you want to buy?(One person can not buy more than 3 tickets at a time): ";
        cin>>tn;
    }
    void ticket()
    {
        t+=1;
        s=t;
    }

};
class bangla_cinema:public manager
{
protected:
    int prize3=0;
    double c1,x;
    char ch;
public:
    void movie1()
    {
        manager::ticket();
        manager::customerinfo();
        cout<<"If you watch 2 bangla movie in the same day,you can watch another bangla movie free.Do you watch 2 movie in a day?(y,n): ";
        cin>>ch;

    }
    void showinfo()
    {
        if(ch=='y')
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (,,)Bangla movies(,,)                                         "<<endl;
        outfile<<"                       (,,)Bangla movies(,,)                                       "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
        cout<<"Congratulation!! you get 1 ticket free"<<endl;
        outfile<<"Congratulation!! you get 1 ticket free"<<endl;
        outfile.close();
        }
        else if(ch=='n')
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (,,)Bangla movies(,,)                                         "<<endl;
        outfile<<"                       (,,)Bangla movies(,,)                                       "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
            cout<<"Sorry!!You don't get that offer"<<endl;
            outfile<<"Sorry!!You don't get that offer"<<endl;
            outfile.close();
        }
        if(tn==1)
        {
             prize3+=5000;
        cout<<"Prize: "<<prize3<<endl;
        outfile<<"Prize: "<<prize3<<endl;
        prize3=0;
        outfile.close();
        }
        else if(tn==2)
        {
            prize3+=(2*5000);
            cout<<"Congratulation!! you get 100 tk discount of your total amount"<<endl;
            outfile<<"Congratulation!! you get 100 tk discount of your total amount"<<endl;
            c1=prize3-100;
            cout<<"Prize: "<<c1<<endl;
            outfile<<"Prize: "<<c1<<endl;
            prize3=0;
            c1=0;
            outfile.close();

        }
        else if(tn==3)
        {

            cout<<"Congratulation!! you get 100 tk discount of your total amount for 2 tickets"<<endl;
            outfile<<"Congratulation!! you get 100 tk discount of your total amount for 2 tickets"<<endl;
            prize3+=(2*5000);
            x=(prize3-100)+5000;
            cout<<"Prize: "<<x<<endl;
            outfile<<"Prize: "<<x<<endl;
            prize3=0;
            x=0;
            outfile.close();
        }
        else
        {
            cout<<"\nError!!you can not buy more than 3 tickets"<<endl;
            outfile<<"\nError!!you can not buy more than 3 tickets"<<endl;
            outfile.close();
        }

    }

};
class horror_movie:public manager
{
protected:
    int prize1=0;
    double c;
public:
    void movie1()
    {
        manager::customerinfo();
         manager::ticket();
    }
    void showinfo()
    {

        if(tn==1)
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (-)Horror movies(-)                                         "<<endl;
        outfile<<"                       (-)Horror movies(-)                                         "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no: "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
             prize1+=7000;
        cout<<"Prize: "<<prize1<<endl;
        outfile<<"Prize: "<<prize1<<endl;
        prize1=0;
        outfile.close();
        }
        else if(tn==2)
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (-)Horror movies(-)                                         "<<endl;
        outfile<<"                       (-)Horror movies(-)                                         "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no: "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
             prize1+=(7000*2);
        cout<<"Prize: "<<prize1<<endl;
        outfile<<"Prize: "<<prize1<<endl;
        prize1=0;
        outfile.close();
        }
        else if(tn==3)
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (-)Horror movies(-)                                         "<<endl;
        outfile<<"                       (-)Horror movies(-)                                         "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no: "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
            prize1=7000;
            cout<<"Congratulation!! you get 15% off And you get 1 ticket free."<<endl;
            outfile<<"Congratulation!! you get 15% off And you get 1 ticket free."<<endl;
            cout<<"Prize after discount"<<endl;
            c=((prize1*3)*15)/100;
            cout<<"Prize: "<<c<<endl;
            outfile<<"Prize: "<<c<<endl;
            outfile.close();

            c=0;
        }
        else
        {
            cout<<"\nError!!you can not buy more than 3 tickets"<<endl;
            outfile<<"\nError!!you can not buy more than 3 tickets"<<endl;
            outfile.close();
        }

    }
};
class hindi_movie:public manager
{
protected:
    int prize2=0;
public:
    void movie1()
    {
        manager::customerinfo();
        manager::ticket();
    }
    void showinfo()
    {
       if(tn==1)
        {
        outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (..)Hindi movies(..)                                        "<<endl;
        outfile<<"                       (..)Hindi movies(..)                                         "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no: "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
        prize2+=6000;
        cout<<"Prize: "<<prize2<<endl;
        outfile<<"Prize: "<<prize2<<endl;
        prize2=0;
        outfile.close();
        }
        else if(tn==2)
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (..)Hindi movies(..)                                        "<<endl;
        outfile<<"                       (..)Hindi movies(..)                                         "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no: "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
          prize2+=(6000*2);
        cout<<"Prize: "<<prize2<<endl;
        outfile<<"Prize: "<<prize2<<endl;
        prize2=0;
        outfile.close();
        }
        else if(tn==3)
        {
            outfile.open("Manager.txt",ios::out|ios::in|ios::app);
        cout<<"                       (..)Hindi movies(..)                                        "<<endl;
        outfile<<"                       (..)Hindi movies(..)                                         "<<endl;
        cout<<"Customer name: "<<name;
        outfile<<"Customer name: "<<name;
        outfile<<endl;
        cout<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        outfile<<"\nDate: "<<d<<":"<<m<<":"<<y<<endl;
        cout<<"Address: "<<address<<endl;
        outfile<<"Address: "<<address<<endl;
        cout<<"Previous Experience: "<<experience<<endl;
        outfile<<"Previous Experience: "<<experience<<endl;
        cout<<"Serial no: "<<t<<endl;
        outfile<<"Serial no: "<<t<<endl;
        cout<<"Total ticket: "<<tn<<endl;
        outfile<<"Total ticket: "<<tn<<endl;
            prize2+=(6000*3);
            cout<<"Congratulation!! you get free snacks"<<endl;
            outfile<<"Congratulation!! you get free snacks"<<endl;
            cout<<"Prize: "<<prize2<<endl;
            outfile<<"Prize: "<<prize2<<endl;
            outfile.close();
            prize2=0;

        }

        else
        {
            cout<<"\nError!!you can not buy more than 3 tickets"<<endl;
            outfile<<"\nError!!you can not buy more than 3 tickets"<<endl;
             outfile.close();
        }

    }
};
int main()
{
    manager m;
    bangla_cinema b;
    horror_movie h;
    hindi_movie i;
    int a,a1;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"                  ********** Welcome to Basundhara cineplex **********       "<<endl;
    cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
    while(1)
    {
        cout<<"                              1.Manager info.                                "<<endl;
        cout<<"                              2.select movie type.                           "<<endl;
        cout<<"                              3.Watch total sells.                                          "<<endl;
        cout<<"                              4.Exit cineplex                                               "<<endl;
        cout<<"                              $$$Select option$$$                             "<<endl;
        cin>>a;
        if(a==1)
        {
            cout<<"                            //Manager information\\                                         "<<endl;
            m.managerinfo();
        }
        else if(a==2)
        {
            cout<<"                           1.Horror movies.                   Prize:7000 "<<endl;
            cout<<"                           2.Hindi movies.                    Prize:6000 "<<endl;
            cout<<"                           3.Bengali movies.                  Prize:5000 "<<endl;
            cout<<"                           ##Select option##                                              "<<endl;
            cin>>a1;
            if(a1==1)
            {

                cout<<"                       (-)Horror movies(-)                                         "<<endl;
                h.movie1();
                h.showinfo();
            }
            else if(a1==2)
            {

                cout<<"                       (-)Hindi movies(-)                                         "<<endl;
                i.movie1();
                i.showinfo();
            }
            else if(a1==3)
            {

                cout<<"                       (-)Bangla movies(-)                                         "<<endl;
                b.movie1();
                b.showinfo();
            }
            else
                cout<<"                            Wrong input!!!!!!                                          "<<endl;
        }

        else if(a==3)
        {
            std::ifstream infile("manager.txt");
            std::string line;
            while (std::getline(infile, line))
            {
                std::cout << line << std::endl;
            }


        }
        else if(a==4)
            break;
        else
        {
            cout<<"                            Wrong Input!!!!!!!!!!!!                                    "<<endl;
        }


    }
    return 0;
}


