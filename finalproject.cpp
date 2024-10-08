#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<unistd.h>
using namespace std;
class student{
        string name[20],f_name[20],add[20],dob[20],course[20],phone[20];
        int admission[20], roll[20];  
        int total=0;
        public:
        void input();
        void show();
        void search();
        void update();
       void  remove();

};
void student ::input(){
        system("cls");
        int choice;
        cout<<"\t  ___________________________"<<endl;
        cout<<"\t |                           |"<<endl;
        cout<<"\t |**** STUDENT SECTION ******|"<<endl;
        cout<<"\t |___________________________|"<<endl;
        cout<<"How Many Student You Want To Register : ";
        cin>>choice;
        if (total==0) 
        {
        total=total+choice;
        for (int i=0;i<choice;i++)
        {
        cout<<"\n ENTER DATA OF STUDENTS:"<<i+1<<endl;
        cout<<"Enter Name :";
        fflush(stdin);
         getline(cin,name[i]);
        cout<<" Father Name :";
        fflush(stdin);
         getline(cin,f_name[i]);
        cout<<"Enter roll no :";
        cin>>roll[i];
        fflush(stdin);
        cout<<"address :";
         getline(cin,add[i]);
        cout<<"Date Of Birth :";
        fflush(stdin);
        cin>>dob[i];
        cout<<"Enter Course :";
         fflush(stdin);
        getline(cin,course[i]);
        cout<<"Phone no:";
        fflush(stdin);
        cin>>phone[i];
        cout<<"Enter Addmition Year :";
        cin>>admission[i];
        ofstream write("student.txt",ios::app);
        write<<name[i]<<"\t"<<f_name[i]<<"\t"<<roll[i]<<"\t"<<add[i]<<"\t"<<dob[i]<<"\t"<<course[i]<<"\t"<<phone[i]<<"\t"<<admission[i]<<endl;
        write.close();
        cout<<" "<<endl;
    }
    }
    else{
        for (int i=total ;i<total+choice;i++)
    {
        cout<<"\n Enter Data Of Student:"<<i+1<<endl;
        cout<<"Enter Name :";
        fflush(stdin);
        getline(cin,name[i]);
        cout<<"Enter Father Name :";
        fflush(stdin);
        getline(cin,f_name[i]);
        cout<<"Enter Roll no :";
        cin>>roll[i];
        cout<<"Address :";
        fflush(stdin);
        getline(cin,add[i]);
        cout<<"Date Of Birth :";
        fflush(stdin);
        getline(cin,dob[i]);
        cout<<"Enter Course :";
        fflush(stdin);
        getline(cin,course[i]);
        cout<<"Phone no:";
        cin>>phone[i];
        cout<<"Enter Addmition Year :";
        cin>>admission[i];
        ofstream write("student.txt",ios::app);
        write<<name[i]<<"\t"<<f_name[i]<<"\t"<<roll[i]<<"\t"<<add[i]<<"\t"<<dob[i]<<"\t"<<course<<"\t"<<phone[i]<<"\t"<<admission[i]<<endl;
        write.close();
         cout<<" "<<endl;
    }
    total=total + choice;
    }
}
void student::search(){
                    system("cls");
    int rollno;
    cout<<"enter the roll no :";
    cin>>rollno;
    for (int i = 0; i <total; i++)
    {
    if (rollno == roll[i])
    {
       cout<<"data of student :"<<i+1<<endl;
        cout<<"name :"<<name[i]<<endl;
        cout<<"father name :"<<f_name[i]<<endl;
        cout<<"roll no :"<<roll[i]<<endl;
        cout<<"address :"<<add[i]<<endl;
        cout<<"date of birth :"<<dob[i]<<endl;
        cout<<"course :"<<course[i]<<endl;
        cout<<"phone no :"<<phone[i]<<endl;
        cout<<"addimition year :"<<admission[i]<<endl;
    }
    }
    // cout<<"Not found !";
    cout<<endl;
    system("pause");
}
void student::show(){
      system("cls");
    for (int i = 0; i<total; i++)
    {
        cout<<"data of student :"<<i+1<<endl;
        cout<<"Name :"<<name[i]<<endl;
        cout<<"Father Name :"<<f_name[i]<<endl;
        cout<<"Roll no :"<<roll[i]<<endl;
        cout<<"Address :"<<add[i]<<endl;
        cout<<"Date of birth :"<<dob[i]<<endl;
        cout<<"Course :"<<course[i]<<endl;
        cout<<"Phone no :"<<phone[i]<<endl;
        cout<<"Addimition year :"<<admission[i]<<endl;
        
    }
      
    cout<<endl;
    system("pause");
    
}
void student::remove()
{
    int a;
    int rollno;
    cout<<" \t 1. Delete all records. "<<endl;
    cout<<" \t 2. Enter roll number to delete ."<<endl;
    cout<<" \t 3. EXIT."<<endl;
    cout<<"\t enter your choice !:";
    while(a!=3){
          cin>>a;
        switch(a){
        case 1:
        total=0;
        cout<<"All recored is deleted"<<endl;
        break;
        case 2 :
        cout<<"enter the roll no :";
        cin>>rollno;
      for (int i = 0; i <total; i++)
           {
           if (rollno == roll[i]) {
           for(int j=i;j<total;j++)
           {
           name[j]=name[j+1];
           f_name[j]=f_name[j+1];
           roll[j]=roll[j+1];
           add[j]=add[j+1];
           dob[j]=dob[j+1];
           course[j]=course[j+1];
           phone[j]=phone[j+1];
           admission[j]=admission[j+1];
            }
         total--;
        cout<<"your recquired recorde is deleted";
        system("pause");
       
          } 
          
     }
        break;
        case 3:
        exit(0);
          }
          break;
    }
     
}
void student::update(){
    system("cls");
    int rollno;
    cout<<"enter the roll no :";
    cin>>rollno;
    for (int i = 0; i <total; i++)
    {
    if (rollno == roll[i])
    {
        cout<<"Enter The Update Data"<<endl;
        cout<<"Enter Name :"<<endl;
        fflush(stdin);
        getline(cin,name[i]);
        cout<<"enter father name :"<<endl;
        fflush(stdin);
        getline(cin,f_name[i]);
        cout<<"Enter roll no :"<<endl;
        cin>>roll[i];
        cout<<"Address :"<<endl;
        fflush(stdin);
        getline(cin,add[i]);
        cout<<"Date of birth :"<<endl;
        cin>>dob[i];
        cout<<"Enter course :"<<endl;
        fflush(stdin);
        getline(cin,course[i]);
        cout<<"Phone no:"<<endl;
        cin>>phone[i];
        cout<<"enter Addmition Year :"<<endl;
        cin>>admission[i];
        cout<<endl;
        cout<<"Data updated successfully !"<<endl;
    }
    sleep(3);
}
}
class admin:public student{
    public:
  void signup();
  void login();
  void forget();
  void smenu();
    admin(){
        system("cls");
    cout<<"\t \t   ______________________________________________________________________________________ "<<endl;
    cout<<"\t \t  |                                                                                      |"<<endl;
    cout<<"\t \t  |======================================================================================|"<<endl;
    cout<<"\t \t  |==========        WELCOME TO STUDENT MANAGEMENT SYSTEM !!                 ============|"<<endl;
    cout<<"\t \t  |==========                                                                ============|"<<endl;
    cout<<"\t \t  |==========       *  GGI *                                                 ============|"<<endl;
    cout<<"\t \t  |==========                           GULZAR GROUP OF INSTITUTION          ============|"<<endl;
    cout<<"\t \t  |==========                                GT ROAD LIBRA KHANNA            ============|"<<endl;
    cout<<"\t \t  |==========                               LUDHIANA PUNJAB INDIA            ============|"<<endl;
    cout<<"\t \t  |==========                                                                ============|"<<endl;
    cout<<"\t \t  |======================================================================================|"<<endl;
    cout<<"\t \t  |______________________________________________________________________________________|"<<endl;
    cout<<"\t"<<endl;
    cout<<"\t"<<endl;
    int choice;
    cout<<"\t \t  _____________________"<<endl;
    cout<<"\t \t |                     |"<<endl;
    cout<<"\t \t |*********************|"<<endl;
    cout<<"\t \t |***                **|"<<endl;
    cout<<"\t \t |***  Admin Section **|"<<endl;
    cout<<"\t \t |***                **|"<<endl;
    cout<<"\t \t |*********************|"<<endl;
    cout<<"\t \t |_____________________|"<<endl;
    cout<<"\t \t 1. signup "<<endl;
    cout<<"\t \t 2. login "<<endl;
    cout<<"\t \t 3. forgot "<<endl;
    cout<<"\t \t 4. EXIT ! "<<endl;
    cout<<"\t \t enter your choice ::";
    cin>>choice;
    switch(choice){
        case 1:
            signup();
            break;
        case 2:
            login();
            break;
        case 3:
            forget();
            break;
        case 4:
            exit;
            default:
            cout<<"invalid choice !!"<<endl;    
    }
}
    };
void admin::signup(){
        system("cls");
        string ruserid,rpassword,rid,rpass;
        cout<<"enter the username : ";
        fflush(stdin);
        getline(cin,ruserid);
        cout<<endl;
        cout<<"enter password :";
        fflush(stdin);
        getline(cin,rpassword);
        cout<<endl;
        ofstream outfile;
        outfile.open("database.txt",ios::app);
        outfile<<ruserid<<" \t"<<rpassword<<endl;
        outfile.close();
        cout<<"* Registration successful ! *"<<endl;
        sleep(3);
        admin();
    }
 void admin:: login(){
        int count;
        string username,password,id,pass;
        cout<<"Enter the username : ";
        fflush(stdin);
        getline(cin,username);
        cout<<endl;
        cout<<"Enter new password :";
        fflush(stdin);
        getline(cin,password);
        cout<<endl;
        ifstream infile("database.txt");
        while(infile>>id>>pass){
            if(id==username && pass==password){
                count=1;
                system("cls");
            }
           
        }
         infile.close();
         if(count==1){
            cout<<"login successful !"<<endl;
            cout<<"please wait for 3 sec :"<<endl;
            sleep(3);
            //ADD CODE HER TO ADD STUDENT;
            smenu();
            system("cls");
            admin();
         }else{
            cout<<"not register!!"<<endl;
            sleep(3);
            admin();
         }
        }
void admin::forget(){
        int option;
        system("cls");
        cout<<"\t 1. go back to menu :"<<endl;
        cout<<"\t 2.search by  username:"<<endl;
        cout<<"\t   enter your choice :";
        cin>>option;
        switch(option){
            case 1:
            admin();
            break;
            case 2:
            int count=0;
            string searchuser,searchid,searchpassword;
            cout<<"enter username :";
            fflush(stdin);
            getline(cin,searchuser);
            cout<<endl;
            ifstream f("database.txt");
            while(f>>searchid>>searchpassword){
                if(searchid==searchuser){
                    count=1;
                    
                }
            }
            f.close();
            if(count==1){
                cout<<"your account is found : "<<searchuser<<endl;
                cout<<"your password is : "<<searchpassword<<endl;
                system("pause");
                admin();
            }else{
                cout<<"sorry !! Not Found !! "<<endl;
                sleep(3);
                admin();
            }
            
            
        }
}
void admin::smenu(){
    system("cls");
        int value;
    while (value!=7)
                {
    cout<<"\t \t  ____________________________________ "<<endl;              
    cout<<"\t \t |                                    |"<<endl;
    cout<<"\t \t |--------- STUDENT SECTION ----------|"<<endl;
    cout<<"\t \t |____________________________________|"<<endl;
    cout<<"\t 1. Add student "<<endl;
    cout<<"\t 2. show student details "<<endl;
    cout<<"\t 3. Search student "<<endl;
    cout<<"\t 4. Update student "<<endl;
    cout<<"\t 5. Admin section "<<endl;
    cout<<"\t 6. Delete student "<<endl;
    cout<<"\t 7. EXIT "<<endl;
    cout<<"\t    Enter your choice :";
    cin>>value;
            switch (value)
            {
            case 1:
                input();
                break;
                case 2:
                show();
                break;
                case 3:
                search();
                break;
                case 4:
                update ();
                break;
                case 5:
                admin();
                break;
                case 6:
                remove();
                break;
                case 7:
                exit(0);
                break;
            default:
                cout<<" Thanks for visiting !";
                break;
            }
            }
}
int main(){
    admin A1;
   

}