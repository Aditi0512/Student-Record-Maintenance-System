#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>
#include<cctype>
using namespace std;
class Record
{
private:
    string f_name,l_name, uniroll_no,f_fname,f_lname,m_fname,m_lname,dob, course,semester, address, email_id,contact_no;
public:
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};
void Record::menu()
{
    int choice;
    char ch,st;

   do
   {
    system("cls");
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| STUDENT RECORD MAINTENANCE SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t 1. Enter New  Student Record" << endl;
    cout << "\t\t\t 2. Display  Student Record" << endl;
    cout << "\t\t\t 3. Modify Student Record" << endl;
    cout << "\t\t\t 4. Search Student Record" << endl;
    cout << "\t\t\t 5. Delete Student Record" << endl;
    cout << "\t\t\t 6. Exit" << endl;

    cout << "\t\t\t---------------------------" << endl;
    cout << "\t\t\tChoose Option:[1 or 2 or 3 or 4 or 5 or 6]" << endl;
    cout << "\t\t\t---------------------------" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        do
        {
            insert();
            cout << "\n\t\t\t Add Another Student Record (Y or y,N): ";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
        break;
    case 2:
        display();
        break;
    case 3:
        modify();
        break;
    case 4:
        search();
        break;
    case 5:
        deleted();
        break;
    case 6:
        exit(0);
    default:
        cout << "\n\t\t\t Invalid Choice Please Try Again...";
    }
    cout<<endl;
  cout<<" do you again want to do any other operation:(Y or y ,N)"<<endl;
  cin>>st;
 }while(st == 'y'||st =='Y');
}


void Record::insert() // add student details
{
    system("cls");
    fstream f;
    int c, l,len,fe,me,fa,m,co,s,con;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Add Student Information:---------------------------------------------" << endl;

fname:
    cout << "\t\t\tEnter Student's First Name: ";
   cin>>f_name;
    l=0;
    for(int i=0;i<f_name.length();i++)
       {
        if((isalpha(f_name[i])!=0))
        l++;

        }
    if(l!=f_name.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto fname;
       }

lname:

    cout << "\t\t\tEnter Student's Last  Name: ";
    cin.ignore();
    getline(cin,l_name);

     len=0;
    for(int i=0;i<l_name.length();i++)
      {
        if((isalpha(l_name[i])!=0)||(isspace(l_name[i])!=0))

        len++;

      }
    if(len!=l_name.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto lname;
       }

uni:
    cout << "\t\t\tEnter university Roll No: ";
    cin>> uniroll_no;
    c=0;
    for(int i=0;i<uniroll_no.length();i++)
     {
        if(isdigit(uniroll_no[i])!=0)

        c++;

    }
    if(c!=uniroll_no.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
        goto uni;
       }


fff:
    cout<<"\t\t\tEnter Father's  First  Name: ";
    cin>>f_fname;
    fe=0;
    for(int i=0;i<f_fname.length();i++)
      {
        if((isalpha(f_fname[i])!=0))

        fe++;

      }
    if(fe!=f_fname.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto fff;
       }


flf:
    cout<<"\t\t\tEnter Father's  Last Name: ";
    cin.ignore();
    getline(cin,f_lname);
    fa=0;
    for(int i=0;i<f_lname.length();i++)
      {
        if((isalpha(f_lname[i])!=0)||(isspace(f_lname[i])!=0))

        fa++;

      }
    if(fa!=f_lname.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto flf;
       }


mfm:
    cout<<"\t\t\tEnter Mother's  First  Name: ";
    cin>>m_fname;
    me=0;
    for(int i=0;i<m_fname.length();i++)
      {
        if((isalpha(m_fname[i])!=0))

        me++;

      }
    if(me!=m_fname.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto mfm;
       }


mlm:
    cout<<"\t\t\tEnter Mother's  Last Name: ";
    cin.ignore();
    getline(cin,m_lname);
     m=0;
    for(int i=0;i<m_lname.length();i++)
      {
        if((isalpha(m_lname[i])!=0)||(isspace(m_lname[i])!=0))

        m++;

      }
    if(m!=m_lname.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto mlm;
       }
  date:
   cout<<"\t\t\tEnter Date Of Birth: ";
   cin>>dob;
    int d=0;
    for(int i=0;i<dob.length();i++)
      {
        if((isalnum(dob[i])!=0)||(isspace(dob[i])!=0)||(ispunct(dob[i])!=0))

        d++;

      }
    if(d!=dob.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto date;
       }

course:
    cout << "\t\t\tEnter Course: ";
    cin.ignore();
    getline(cin,course);
    co=0;
    for(int i=0;i<course.length();i++)
      {
        if((isalpha(course[i])!=0)|(isspace(course[i])!=0))

        co++;

      }
    if(co!=course.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
       goto course;
       }

semes:
    cout << "\t\t\tEnter Semester: ";
    cin >> semester;
     s=0;
    for(int i=0;i<semester.length();i++)
     {

     if(isdigit(semester[i])!=0)
     s++;
    }
    if(s!=semester.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
        goto semes;
       }


cout << "\t\t\tEnter Email Id: ";
cin >> email_id;

conta:
    cout << "\t\t\tEnter Contact No: ";
    cin>> contact_no;
     con=0;
    for(int i=0;i<contact_no.length();i++)
     {

     if((isdigit(contact_no[i])!=0)||(ispunct(contact_no[i])!=0))
     con++;
    }
    if(con!=contact_no.length())
       {
           cout<<"incorrect format,try again!!!"<<endl;
        goto conta;
       }
     if(contact_no.length()!=10)
        {
            cout<<"invalid number contact number should contain 10 digits!!";
            goto conta;
          }

cout << "\t\t\tEnter Address: ";
cin.ignore();
getline(cin,address);

    f.open("studentrecords.txt", ios::app | ios::out);
    f  <<f_name<<endl<<l_name<<endl<<uniroll_no<<endl<<f_fname<<endl<<f_lname<<endl<<m_fname<<endl<<m_lname<<endl<<dob<<endl<<course<<endl<<semester<<endl<<email_id <<endl<< contact_no<<endl<<address<<endl;
    f.close();
}

void Record::display() // display students details
{
    system("cls");
    fstream file;
    int total = 1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Record :--------------------------------------------" << endl;
    file.open("studentrecords.txt", ios::in);
    if (!file)
    {
        /* code */
        cout << "\n\t\t\t No such file...";

    }
    else
    {
        file>>f_name;
        file.ignore();
        getline(file,l_name);
        file>>uniroll_no ;
        file>>f_fname;
        file.ignore();
        getline(file,f_lname);
        file>>m_fname;
        file.ignore();
        getline(file,m_lname);
        file>>dob;
        file.ignore();
        getline(file,course);
        file>>semester>> email_id >> contact_no ;
        file.ignore();
        getline(file,address);

        while (!file.eof())
        {
            cout << "\n\n\t\t\t Student No.: " << total++ << endl;
            cout << "\t\t\t Student's First  Name: " <<f_name << endl;
            cout << "\t\t\t Student's Last  Name: " <<l_name << endl;
            cout << "\t\t\t Student university Roll No.: " << uniroll_no << endl;
            cout << "\t\t\t Student Father's  First Name: " << f_fname << endl;
            cout << "\t\t\t Student Father's Last Name: " << f_lname << endl;
            cout << "\t\t\t Student Mother's  First Name: " << m_fname << endl;
             cout << "\t\t\t Student Mother's  Last Name: " << m_lname << endl;
            cout << "\t\t\t Student Date of Birth.: " << dob << endl;
            cout << "\t\t\t Student course: " << course << endl;
            cout << "\t\t\t Student Semester: " << semester << endl;
            cout << "\t\t\t Student Email Id.: " << email_id << endl;
            cout << "\t\t\t Student Contact No.: " << contact_no << endl;
            cout << "\t\t\t Student Address: " << address << endl;

            file>>f_name;
            file.ignore();
            getline(file,l_name);
            file>>uniroll_no;
             file>>f_fname;
             file.ignore();
            getline(file,f_lname);
            file>>m_fname;
             file.ignore();
            getline(file,m_lname);
            file>>dob;
            file.ignore();
            getline(file,course);
            file>>semester>>email_id >> contact_no ;
            file.ignore();
            getline(file,address);
        }


        if (total == 1)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
}


void Record::modify() // Modify Students Details
{
    system("cls");
    fstream file, file1;
    string rollno;
    int c, l,len,fe,me,fa,m,co,s,con;
    int flag = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    file.open("studentrecords.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t No such file..";
    }
    else
    {
        cout << "\nEnter University Roll No. of Student which you want to Modify: ";
        cin >> rollno;
        file1.open("new.txt", ios::app | ios::out);
        file>>f_name;
        file.ignore();
        getline(file,l_name);
        file>>uniroll_no ;
        file>>f_fname;
        file.ignore();
        getline(file,f_lname);
        file>>m_fname;
        file.ignore();
        getline(file,m_lname);
        file>>dob;
        file.ignore();
        getline(file,course);
        file>>semester>> email_id >> contact_no ;
        file.ignore();
        getline(file,address);

        while (!file.eof())
        {
            if (rollno != uniroll_no)

                file1  <<f_name <<endl<<l_name<< endl << uniroll_no << endl<<f_fname<<endl<<f_lname<<endl<<m_fname<<endl<<m_lname<<endl<<dob<<endl<< course <<endl<<semester<<endl<< email_id << endl<< contact_no <<endl<< address << "\n";
            else
            {

              fname:
                   cout << "\t\t\tEnter Student's First Name: ";
                   cin.ignore();
                   cin>>f_name;
                    l=0;
                   for(int i=0;i<f_name.length();i++)
                      {
                         if((isalpha(f_name[i])!=0)||(isspace(f_name[i])!=0))
                          l++;
                       }
                   if(l!=f_name.length())
                    {
                        cout<<"incorrect format,try again!!!"<<endl;
                        goto fname;
                     }

             lname:
                   cout << "\t\t\tEnter Student's Last  Name: ";
                   cin.ignore();
                   getline(cin,l_name);
                   len=0;
                   for(int i=0;i<l_name.length();i++)
                    {
                        if((isalpha(l_name[i])!=0)||(isspace(l_name[i])!=0))
                         len++;
                     }
                   if(len!=l_name.length())
                    {
                      cout<<"incorrect format,try again!!!"<<endl;
                     goto lname;
                    }

            uni:
                cout << "\t\t\tEnter university Roll No: ";
                cin>> uniroll_no;
                 c=0;
                for(int i=0;i<uniroll_no.length();i++)
                    {
                       if(isdigit(uniroll_no[i])!=0)
                          c++;
                    }
                if(c!=uniroll_no.length())
                   {
                      cout<<"incorrect format,try again!!!"<<endl;
                       goto uni;
                    }
             fff:
                cout<<"\t\t\tEnter Father's  First  Name: ";
                cin.ignore();
                cin>>f_fname;
                fe=0;
                for(int i=0;i<f_fname.length();i++)
                   {
                    if((isalpha(f_fname[i])!=0)||(isspace(f_fname[i])!=0))
                        fe++;
                   }
               if(fe!=f_fname.length())
                {
                     cout<<"incorrect format,try again!!!"<<endl;
                      goto fff;
                }
             flf:
                cout<<"\t\t\tEnter Father's  Last Name: ";
                cin.ignore();
                getline(cin,f_lname);
                 fa=0;
                for(int i=0;i<f_lname.length();i++)
                   {
                      if((isalpha(f_lname[i])!=0)||(isspace(f_lname[i])!=0))
                         fa++;
                   }
                if(fa!=f_lname.length())
                    {
                       cout<<"incorrect format,try again!!!"<<endl;
                      goto flf;
                    }
            mfm:
                cout<<"\t\t\tEnter Mother's  First  Name: ";
                 cin.ignore();
                 cin>>m_fname;
                me=0;
                 for(int i=0;i<m_fname.length();i++)
                    {
                        if((isalpha(m_fname[i])!=0)||(isspace(m_fname[i])!=0))
                              me++;
                     }
                  if(me!=m_fname.length())
                     {
                         cout<<"incorrect format,try again!!!"<<endl;
                          goto mfm;
                    }
            mlm:
                 cout<<"\t\t\tEnter Mother's  Last Name: ";
                 cin.ignore();
                 getline(cin,m_lname);
                 m=0;
                for(int i=0;i<m_lname.length();i++)
                    {
                       if((isalpha(m_lname[i])!=0)||(isspace(m_lname[i])!=0))
                        m++;
                    }
                if(m!=m_lname.length())
                  {
                    cout<<"incorrect format,try again!!!"<<endl;
                    goto mlm;
                   }

            date:
                cout<<"\t\t\tEnter Date Of Birth: ";
                cin>>dob;
                 int d=0;
                for(int i=0;i<dob.length();i++)
                    {
                        if((isalnum(dob[i])!=0)||(isspace(dob[i])!=0)||(ispunct(dob[i])!=0))

                              d++;

                     }
                 if(d!=dob.length())
                   {
                      cout<<"incorrect format,try again!!!"<<endl;
                      goto date;
                    }

          course:
                cout << "\t\t\tEnter Course: ";
                cin.ignore();
                getline(cin,course);
                co=0;
               for(int i=0;i<course.length();i++)
                    {
                         if((isalpha(course[i])!=0)||(isspace(course[i])!=0))
                             co++;
                    }
                if(co!=course.length())
                   {
                     cout<<"incorrect format,try again!!!"<<endl;
                     goto course;
                   }
        semes:
             cout << "\t\t\tEnter Semester: ";
             cin >> semester;
             s=0;
             for(int i=0;i<semester.length();i++)
                {

                 if(isdigit(semester[i])!=0)
                    s++;
                 }
            if(s!=semester.length())
                {
                  cout<<"incorrect format,try again!!!"<<endl;
                   goto semes;
                }
       cout << "\t\t\tEnter Email Id: ";
       cin >> email_id;

       conta:
            cout << "\t\t\tEnter Contact No: ";
            cin>> contact_no;
            con=0;
            for(int i=0;i<contact_no.length();i++)
                {

                if((isdigit(contact_no[i])!=0)||(ispunct(contact_no[i])!=0))
                   con++;
                 }
            if(con!=contact_no.length())
                 {
                    cout<<"incorrect format,try again!!!"<<endl;
                    goto conta;
                }
            if(contact_no.length()!=10)
                {
                    cout<<"invalid number contact number should contain 10 digits!!";
                    goto conta;
                }

        cout << "\t\t\tEnter Address: ";
        cin.ignore();
        getline(cin , address);

        file1 <<f_name <<endl<<l_name<< endl << uniroll_no << endl << f_fname<<endl<<f_lname<<endl<<m_fname<<endl<<m_lname<<endl<<dob<<endl<<course <<endl<<semester<<endl << email_id << endl << contact_no <<endl<< address << "\n";
        flag++;

        }
            file>>f_name;
            getline(file,l_name);
            file>>uniroll_no ;
            file>>f_fname;
            getline(file,f_lname);
            file>>m_fname;
             file.ignore();
            getline(file,m_lname);
            file>>dob;
             file.ignore();
            getline(file,course);
            file>>semester>> email_id >> contact_no ;
            file.ignore();
            getline(file,address);

            }
            if (flag == 0)
            {
                cout << "\n\n\t\t\t Student University Roll No. Not Found....";
            }

        file1.close();
        file.close();
        remove("studentrecords.txt");
        rename("new.txt", "studentrecords.txt");
    }
}


void Record::search() // search data of student
{
    system("cls");
    fstream file;
    int flag = 0;
    file.open("studentrecords.txt", ios::in);
    if (!file)
    {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
        cout << "\n\t\t\t No Such file...";
    }
    else
    {
        string rollno;
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
        cout << "\n Enter University Roll No. of Student Which You Want to Search: ";
        cin >> rollno;
        file>>f_name;
         file.ignore();
        getline(file,l_name);
        file>>uniroll_no ;
        file>>f_fname;
         file.ignore();
        getline(file,f_lname);
        file>>m_fname;
         file.ignore();
        getline(file,m_lname);
        file>>dob;
        file.ignore();
        getline(file,course);
        file>>semester>> email_id >> contact_no ;
        file.ignore();
        getline(file,address);
        while (!file.eof())
        {
            if (rollno == uniroll_no)
            {
                cout << "\n\t\t\t Student First  Name: " << f_name << endl;
                cout << "\t\t\t Student Last  Name: " << l_name << endl;
                cout << "\t\t\t Student University Roll No.: " << uniroll_no << endl;
                cout << "\t\t\t Student Father's  First Name: " << f_fname << endl;
                 cout << "\t\t\t Student Father's  Last Name: " << f_lname << endl;
                cout << "\t\t\t Student Mother's First Name: " << m_fname << endl;
                cout << "\t\t\t Student Mother's Last Name: " << m_lname << endl;
                cout << "\t\t\t Student Date of Birth.: " << dob << endl;
                cout << "\t\t\t Student course: " << course << endl;
                cout << "\t\t\t Student Semester: " << semester<< endl;
                cout << "\t\t\t Student Email Id.: " << email_id << endl;
                cout << "\t\t\t Student Address: " << address << endl;
                flag++;
            }
            file>>f_name;
             file.ignore();
            getline(file,l_name);
            file>>uniroll_no ;
            file>>f_fname;
             file.ignore();
            getline(file,f_lname);
            file>>m_fname;
             file.ignore();
            getline(file,m_lname);
            file>>dob;
            file.ignore();
            getline(file,course);
             file>>semester>> email_id >> contact_no ;
             file.ignore();
            getline(file,address);
        }
        if (flag == 0)
        {
            cout << "\n\t\t\tStudent University Roll No.  is Not Found...";
        }
        file.close();
    }
}

void Record::deleted()
{
    system("cls");
    fstream file, file1;
    int flag = 0;
    string roll;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Student Details: ------------------------------------------" << endl;
    file.open("studentrecords.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t No such file..";

    }
    else
    {
        cout << "\nEnter  University Roll No. of Student which you want Delete Data: ";
        cin >> roll;
        file1.open("new.txt", ios::app | ios::out);
        file>>f_name;
         file.ignore();
        getline(file,l_name);
        file>>uniroll_no ;
         file>>f_fname;
         file.ignore();
        getline(file,f_lname);
        file>>m_fname;
         file.ignore();
        getline(file,m_lname);
        file>>dob;
        file.ignore();
        getline(file,course);
        file>>semester>> email_id >> contact_no ;
        file.ignore();
        getline(file,address);
        while (!file.eof())
        {
            if (roll != uniroll_no)
            {
                file1<< f_name<<endl<<l_name << endl << uniroll_no << endl<<f_fname<<endl<<f_lname<<endl<<m_fname<<endl<<m_lname<<endl<<dob<<endl<< course <<endl<<semester<<endl<< email_id <<endl<< contact_no << endl << address << "\n";
            }
            else
            {
                flag++;
                cout << "\n\t\t\t Data is deleted successfully ";
            }
            file>>f_name;
             file.ignore();
            getline(file,l_name);
            file>>uniroll_no ;
            file>>f_fname;
             file.ignore();
            getline(file,f_lname);
            file>>m_fname;
             file.ignore();
            getline(file,m_lname);
            file>>dob;
            file.ignore();
            getline(file,course);
            file>>semester>> email_id >> contact_no ;
            file.ignore();
            getline(file,address);
        }
        if (flag == 0)
        {
            cout << "\n\t\t\t Student University Roll NO.  is Not Found....";
        }
        file1.close();
        file.close();
        remove("studentrecords.txt");
        rename("new.txt", "studentrecords.txt");
    }
}

int main()
{

    Record s;
    cout<<"----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                            STUDENT RECORD MAINTENANCE SYSTEM                                       "<<endl;
    cout<<"----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------"<<endl;

adminCheck:
    string user_name;
    cout << "Enter the Username: ";
    cin >> user_name;
    if (user_name == "aditi") {
        string password;
        cout << "Enter the Password: ";
        cin.ignore();
        getline(cin,password);
        if (password == "2000") {
            s.menu();
        }
        else {
            cout << "\n\n\n\tWrong Password!\n\t\tTry Again.......\n\n" << endl;

            goto adminCheck;
        }
    }
    else {
        cout << "\n\n\n\tWrong Username!\n\t\tTry Again.......\n\n" << endl;

        goto adminCheck;
    }

    return 0;
}
