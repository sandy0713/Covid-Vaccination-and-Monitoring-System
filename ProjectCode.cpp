#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <fstream>
#include <stdio.h>
using namespace std;

struct vaccination
{
    char patient_name[30];
    int patient_age;
    char patient_mobile[12];
    char patient_address[20];
    char patient_vaccine[20];
};


class patient
{
public:
    char name[25];
    int age;
    char gender[2];
    long long contactNumber;
    char address[25];
    int score = 0, ans = 0;
    
    patient()
    {
        cout<<"******** Provide the patient details ********"<<endl;
        cout<<"\n";
        cout<<" [1] Enter the name of the patient"<<endl;
        cin>>name;
        cout<<"\n";
        cout<<" [2] Enter the age of the patient"<<endl;
        cin>>age;
        cout<<"\n";
        cout<<" [3] Enter contact number of the patient"<<endl;
        cin>>contactNumber;
        cout<<"\n";
        cout<<" [4] Enter address of the patient"<<endl;
        cin>>address;
        //Collection of Patient details completed
        
        
        //Symptom Assessment
        cout<<"******** Check the symptoms the patient is suffering from ********"<<endl;
        cout<<"\n";
        cout<<"          Enter 1 for YES        Enter 0 for NO                 "<<endl;
        cout<<"\n";
        cout<<"  [1] Is the patient experiencing loss of taste and smell?"<<endl;
        cin>>ans;
        if(ans==0)
        {
            score = score + 0;
        }
        else if(ans==1)
        {
            score = score + 2;
        }
        cout<<"  [2] Is the patient suffering from cold?"<<endl;
        cin>>ans;
        if(ans==0)
        {
            score = score + 0;
        }
        else if(ans==1)
        {
            score = score + 4;
        }
        cout<<"  [3] Is the patient suffering from fever?"<<endl;
        cin>>ans;
        if(ans==0)
        {
            score = score + 0;
        }
        else if(ans==1)
        {
            score = score + 6;
        }
        cout<<"  [4] Is the patient suffering from cough?"<<endl;
        cin>>ans;
        if(ans==0)
        {
            score = score + 0;
        }
        else if(ans==1)
        {
            score = score + 13;
        }
        cout<<"  [5] Is the patient suffering from breathlessness?"<<endl;
        cin>>ans;
        if(ans==0)
        {
            score = score + 0;
        }
        else if(ans==1)
        {
            score = score + 14;
        }
    }
    
};

class prescription : public patient
{
public:
    prescription()
    {
        if(score==0)
        {
            cout<<"    a) No need of hospitalization"<<endl;
            cout<<"\n";
            cout<<"    b) Vaccination can be followed up"<<endl;
            cout<<"\n";
        }
        else if(score<=6 && score!=0)
        {
            cout<<"    The prescribed treatment for the patient is "<<endl;
            cout<<"\n";
            cout<<"   a) Home Isolation"<<endl;
            cout<<"\n";
            cout<<"   b) Use Covid Medicine kit"<<endl;
            cout<<"\n";
            cout<<"   c) Breathing exercises"<<endl;
            cout<<"\n";
        }
        else if(score>6 && score<=12)
        {
            cout<<"    The prescribed treatment for the patient is "<<endl;
            cout<<"\n";
            cout<<"   a) Hospitalization"<<endl;
            cout<<"\n";
            cout<<"   b) Use doctor prescribed medicines"<<endl;
            cout<<"\n";
            cout<<"   c) Breathing exercises"<<endl;
            cout<<"\n";
        }
        else
        {
            cout<<"    The prescribed treatment for the patient is "<<endl;
            cout<<"\n";
            cout<<"    a) Immediate Hospitalization"<<endl;
            cout<<"\n";
            cout<<"    b) Use of Oxygen Cylinder"<<endl;
            cout<<"\n";
            cout<<"    c) Dosing of Remdesivir"<<endl;
            cout<<"\n";
            cout<<"    d) If breathlessness or cough persists, ventilator may be used"<<endl;
            cout<<"\n";
        }
        
    }
    
};

int main()
{
    int x = 1;
    while(x==1)
    {
    int a, m = 0, b= 0, i = 1;
    cout<<"                                ********************************************************"<<endl;
    cout<<"                                ***Welcome to Covid Vaccination and Monitoring System***"<<endl;
    cout<<"                                ********************************************************"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"                                                  [1] Vaccination "<<endl;
    cout<<"                                                  [2] Hospitalization "<<endl;
    cout<<"                                                  [3] Exit"<<endl;
    cout<<"\n\n";
    cout<<" Enter your option.... ";
    cin>>a;
    if(a==1)
    {
            cout<<"\n\n";
            cout<<"How many patients need to be vaccinated?"<<endl;
            cin>>m;
            struct vaccination vac[m];
            char vaccine[30], name[30], contact[20];
        while(i!=m+6)
        {
            cout<<"\n\n";
            cout<<"                         **************** WELCOME TO COVID VACCINATION ************"<<endl;
                cout<<"\n\n1. Add patient infor"
                       "mation\n\n2. Display "
                       "patient information\n"<<endl;
               cout<<"3. Search Patient details\n"<<endl;
               
                    cout<<"4. List the count of patients"<<endl;
                    cout<<"\n";
                   cout<<"5. Exit"<<endl;
          
                cout<<"\n\nEnter one of "
                       "the above: "<<endl;
                cin>>b;
        switch (b) {
                case 1:
                    cout<<"Enter the name of the patient = "<<endl;
                    cin>>vac[i].patient_name;
          
                    cout<<"Enter the age of the patient = "<<endl;
                    cin>>vac[i].patient_age;
          
                    cout<<"Enter the mobile number of patient = "<<endl;
                    cin>>vac[i].patient_mobile;
          
                    cout<<"Enter patient's address = "<<endl;
                    cin>>vac[i].patient_address;
                
                    cout<<"Enter patient's vaccine choice = "<<endl;
                    cin>>vac[i].patient_vaccine;
                cout<<"Patient "<<i<<" details have been registered successfully"<<endl;
                    i++;
                break;
                
                case 2:
                cout<<"Patient's data entered till now is the following "<<endl;
                        for (int j =1; j <i; j++)
                        {
                            cout<<" ****************************"<<endl;
                            cout<<"  Patient "<<j<<" details :"<<endl;;
              
                            cout<<"  Patient Name = "<<vac[j].patient_name<<endl;
              
                            cout<<"  Patient Age = "<<vac[j].patient_age<<endl;
              
                            cout<<"  Patient Contact Number = "<<vac[j].patient_mobile;
                            
                            cout<<"  Patient Address = "<<vac[j].patient_address<<endl;
                            
                            cout<<"  Patient Inoculated with = "<<vac[j].patient_vaccine<<endl;
                            cout<<"\n";
                        }
                        break;
                case 3:
                int t;
                cout<<"        Search By :    "<<endl;
                cout<<"\n";
                cout<<"                [1] Vaccine             [2] Name          [3] Contact Number"<<endl;
                cout<<"\n";
                cin>>t;
                if(t==1)
                {
                    cout<<"Enter Vaccine Name : "<<endl;
                        cin>>vaccine;
                        for (int j = 0; j < i; j++)
                        {
                            if (strcmp(vaccine,vac[j].patient_vaccine)== 0)
                            {
                            cout<<"Name : "<<vac[j].patient_name<<endl;
                            cout<<"Age  : "<<vac[j].patient_age<<endl;
                            cout<<"Mobile No : "<<vac[j].patient_mobile<<endl;
                            cout<<"Address : "<<vac[j].patient_address<<endl;
                            cout<<"\n";
                            cout<<"\n";
                            }
                        }
                }
                else if(t==2)
                {
                cout<<"Enter Name : "<<endl;
                        cin>>name;
                        for (int j = 0; j < i; j++)
                        {
                            if (strcmp(name,vac[j].patient_name)== 0)
                            {
                            cout<<"Name : "<<vac[j].patient_name<<endl;
                            cout<<"Age  : "<<vac[j].patient_age<<endl;
                            cout<<"Mobile No : "<<vac[j].patient_mobile<<endl;
                            cout<<"Address : "<<vac[j].patient_address<<endl;
                            cout<<"\n";
                            cout<<"\n";
                            }
                        }
                }
                else if(t==3)
                {
                    cout<<"Enter Contact number : "<<endl;
                        cin>>contact;
                        for (int j = 0; j < i; j++)
                        {
                            if (strcmp(contact,vac[j].patient_mobile)== 0)
                            {
                            cout<<"Name : "<<vac[j].patient_name<<endl;
                            cout<<"Age  : "<<vac[j].patient_age<<endl;
                            cout<<"Mobile No : "<<vac[j].patient_mobile<<endl;
                            cout<<"Address : "<<vac[j].patient_address<<endl;
                            cout<<"\n";
                            cout<<"\n";
                            }
                        }
                }
                        break;
                
            case 4:
                cout<<"Number of patients inoculated till now is"<<endl;
                cout<<i-1<<endl;
                break;
                
            case 5:
                i = m+6;
                break;
           
            break;
          }
            
    }
    }
    else if(a==2)
    {
        prescription P1;
    }
    else if(a==3)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"Thank You"<<endl;
        x=2;
    }
    
}
}
