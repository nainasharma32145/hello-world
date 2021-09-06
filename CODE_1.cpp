#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct doctor1
{
    int id;
    char name[20],Q[20],age[20],exp[20],city[20],special[20];
};


using namespace std;
class doctor;

class hospital
{
    public:
   // int id=0,id1=0,
    int counter=0;
};

class doctor:public hospital
{
    public:
    int docid=0;
    struct doctor1 arr[10];

   void add_doc_info()
    {
        int i,en;
        cout<<"How Many Entries you want to add :";
        cin>>en;
        for(i=1;i<=en;i++)
        {
        cout<<"Enter Doctor's ID                :";
        cin>>arr[docid].id;
        cout<<"Enter Doctor's Name              :";
        cin>>arr[docid].name;
        cout<<"Enter Doctor's Age               :";
        cin>>arr[docid].age;
        cout<<"Enter Doctor's Qualification     :";
        cin>>arr[docid].Q;
        cout<<"Enter Doctor's Specialization    :";
        cin>>arr[docid].special;
        cout<<"Enter Doctor's Experience        :";
        cin>>arr[docid].exp;
        cout<<"Enter Doctor's city              :";
        cin>>arr[docid].city;
        docid++;
         counter++;
         cout<<"\n";
        cout<<"You filled all Entries of "<<i<<" doctor successfully"<<"\n";
        cout<<"enter value for "<<" "<<i+1<<" "<<"doctor"<<"\n";
        }
    }
    void doctor_spec()
    {
         string a[5]={"neurologist","cardiologist","gynecologist","dentist","ENT"};
                     map<int,string>m;
                     for(int i=0;i<5;i++)
                     {
                        m[i+1]=a[i];
                     }
                     for(auto i=m.begin();i!=m.end();i++)
                     {
                     cout<<i->first<<"."<<i->second<<endl;
                     }

    }
    void Display()
    {
        system("cls");
        int n,i;
        cout<<"\n Enter the doctor's ID  to display Record :";
        cin>>n;
        if(n==0)
        {
            cout<<"\n\n                      OOPS!!!!             "<<"\n\n";
            cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
        }
        else
        {
            int status=0;
            for(i=0;i<docid;i++)
            {
                if(arr[i].id==n)
                {
                    status=1;
                    break;
                }
            }
            if(status)
            {
                cout<<"\n\n";
                cout<<"1.Doctor's ID                 :"<<arr[i].id<<"\n";
                cout<<"2.Doctor's Name               :"<<arr[i].name<<"\n";
                cout<<"3.Doctor's Age                :"<<arr[i].age<<"\n";
                cout<<"4.Doctor's Qualification      :"<<arr[i].Q<<"\n";
                cout<<"5.Doctor's Specialization     :"<<arr[i].special<<"\n";
                cout<<"6.Doctor's Experience         :"<<arr[i].exp<<"\n";
                cout<<"8.Doctor's city               :"<<arr[i].city<<"\n";
                cout<<" \n Press Any KEY To choose another Option.... ";
            }
            else
            {
                cout<<" \n\n No such ID in database "<<endl;
                cout<<" \n Press Any KEY To choose another Option.... ";
            }
        }
         getch();
    }


    void doctor_detail()
    {
        int i;
        if(docid==0)
        {
            cout<<" \n\n\n                                  OOPS!!!!             "<<"\n\n";
           cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
        }
        else{
                cout<<"********************************************************************************"<<"\n";
        cout<<"\t \t \t  Details Of All The Doctors In The Hospital \n";
        cout<<"********************************************************************************"<<"\n \n";

        cout<<"ID"<<"\t \t"<<"specialization"<<"\t \t"<<"Qualification"<<"\t \t"<<"Age";
        cout<<"\n \n";

        for(i=0;i<docid;i++)
         {
        cout<<arr[i].id<<"\t \t"<<arr[i].special<<"\t \t \t"<<arr[i].Q<<"\t  \t \t"<<arr[i].age<<"\n";
         }
         cout<<" \n Press Any Button To choose another Option.... ";
        }
        getch();
    }
    void tot_no_of_doc()
    {
        system("cls");
        int i=counter;
        cout<<"Total Doctor's in Hospital : "<<i<<"\n";
        cout<<" \n Press Any Button To choose another Option.... ";
        getch();
    }
};






int main()
{


    bool repeat= true;
    int ch1,ch2,ch3,ch4;
    doctor d;

     xyz:
     system("cls");
    cout<<"\n\n";
    cout<<"            *** Welcome to the Hospital Management System ***    "<<"\n\n\n";
    cout<<"                   1. Menu :   "<<"\n\n";;
    cout<<"                   2. Exit :   "<<"\n\n\n\n";
    cout<<"Enter Your Choice  :";
    cin>>ch1;
    cout<<"\n\n\n";

    if(ch1==1)
    {
         xyz2:
         system("cls");
         cout<<"\n\n";
         cout<<"   1.   Enter  into Doctor's    DataBase   "<<endl;
         cout<<"   2.   Enter  into Patient's   DataBase   "<<endl;
         cout<<"   3.   Generate    Patient's   Report     "<<endl;
         cout<<"   4.   Generate    Patient's   Bill       "<<endl;
         cout<<"   5.   EXIT                               "<<"\n";
         cout<<"Please  Enter Your choice  :"<<" ";
         cin>>ch2;
         while(repeat==true)
          {
           system("cls");
           switch(ch2)
           case 1:
            {
               cout<<"\n\n";
               cout<<"             *** Welcome To Doctor's DataBase ***    "<<"\n \n \n\n";

               cout<<   "  \t       1. Add New Doctor's Information              "<<endl;
               cout<<   "  \t       2. Display Doctor's Information              "<<endl;
               cout<<   "   \t      3. Display Doctor's Specialization           "<<endl;
               cout<<   "  \t       4. Detail OF ALL The Doctors In The Hospital "<<endl;
               cout<<   "  \t       5. Total Number of Doctor's  in Hospital     "<<endl;
               cout<<   "  \t       6. EXIT                                      "<<"\n";

               cout<<"Please Enter your choice :"<<" ";
               cin>>ch3;
               switch(ch3)
               {
                  case 1:
                   system("cls");
                   d.add_doc_info();
                   break;
                   case 2:
                       d.Display();
                       cout<<"\n";
                    break;

                   case 3:
                       system("cls");
                       d.doctor_spec();
                       break;

                   case 4:
                       d.tot_no_of_doc();
                    break;

                    case 5:
                        goto xyz2;
                        break;

                   default:
                    cout<<"invalid";
                }
                break;

 }
          }
}
 else if(ch1==2)
 {
     return 0;
 }
 else
 {
     cout<<"Wrong Input"<<endl;
 }
 return 0;
}
