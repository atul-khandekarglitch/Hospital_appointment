#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;
//defining the class
class patient{

    protected:
    string name;
    int disease;
    string mobileno;
    string time;
    int token;

    public:
    //get data of patient:
    patient(){
        cout<<"--WELCOME TO MAI MANGESHKAR HOSPITAL-----"<<endl;
        cout<<"Enter the name of patient : ";
        getline(cin,name);
        cout<<"Enter the mobile number : ";
        cin>>mobileno;
        cout<<"enter 1 for heart disease \nenter 2 for kidney disease "<<endl;
        cin>>disease;
    }
    void savetofile();
   
};

class doctor: public patient{
    protected:
    int choice1,choice2,choice3;
   public:
   doctor(){
            if(disease==1){
            cout<<"\nFor heart dieases DR.Anil is available on monday, wednesday and friday"<<endl;
            cout<<"Enter 1 for monday\nEnter 2 wednesday\nEnter 3 for friday"<<endl;
            cin>>choice1;
            }
        
        
            else{
            cout<<"\nFor kidney dieases DR.Anil is available on tuesday, thursday and saturday"<<endl;
            cout<<"Enter 1 for tuesday\nEnter 2 thursday\nEnter 3 for saturday"<<endl;
            cin>>choice2;
            }
            
        
        
    
           cout<<"\nchoose time for appointment"<<endl;
           cout<<"1. 10:00 am\n2. 12:00 pm\n3. 2:00 pm"<<endl;
           cin>>choice3;
        
    

    
        cout<<"\n*DETAILS OF PATIENTS*\n";
        cout<<"NAME OF PATIENT :"<<name<<endl;
        cout<<"MOBILE NUMBER:"<<mobileno<<endl;
        if(disease==1){
            cout<<"DISEASE/PROBLEM: HEART DISEASE"<<endl;
            cout<<"DOCTOR APPOINTED: DR.ANIL HEART SPEACIALIST"<<endl;
            if(choice1==1){
                cout<<"Day : Monday"<<endl;
                if(choice3==1){
                    cout<<"Time : 10.00 am"<<endl;
                }
                else if(choice3==2){
                    cout<<"Time : 12.00 pm"<<endl;
                }
                else{
                    cout<<"Time : 2.00 pm"<<endl;
                }
            }
            else if(choice1==2){
                cout<<"Day : wednesday"<<endl;
                if(choice3==1){
                    cout<<"Time : 10.00 am"<<endl;
                }
                else if(choice3==2){
                    cout<<"Time : 12.00 pm"<<endl;
                }
                else{
                    cout<<"Time : 2.00 pm"<<endl;
                }
            }
            else{
                cout<<"Day : Friday"<<endl;
                if(choice3==1){
                    cout<<"Time : 10.00 am"<<endl;
                }
                else if(choice3==2){
                    cout<<"Time : 12.00 pm"<<endl;
                }
                else{
                    cout<<"Time : 2.00 pm"<<endl;
                }
            }

        }
        else{
            cout<<"DISEASE/PROBLEM: KIDNEY DISEASE"<<endl;
            cout<<"DOCTOR APPOINTED: DR.AJAY KIDNEY SPEACIALIST"<<endl;
             if(choice2==1){
                cout<<"Day : tuesday"<<endl;
                if(choice3==1){
                    cout<<"Time : 10.00 am"<<endl;
                }
                else if(choice3==2){
                    cout<<"Time : 12.00 pm"<<endl;
                }
                else{
                    cout<<"Time : 2.00 pm"<<endl;
                }

            }
            else if(choice2==2){
                cout<<"Day : thursday"<<endl;
                if(choice3==1){
                    cout<<"Time : 10.00 am"<<endl;
                }
                else if(choice3==2){
                    cout<<"Time : 12.00 pm"<<endl;
                }
                else{
                    cout<<"Time : 2.00 pm"<<endl;
                }
            }
            else{
                cout<<"Day : saturday"<<endl;
                if(choice3==1){
                    cout<<"Time : 10.00 am"<<endl;
                }
                else if(choice3==2){
                    cout<<"Time : 12.00 pm"<<endl;
                }
                else{
                    cout<<"Time : 2.00 pm"<<endl;
                }
            }
        }
    }



    void savetofile() {
    // Open the file in Append mode
    ofstream myfile("hospital_records.txt", ios::app); 

    if (myfile.is_open()) {
        myfile << "--- APPOINTMENT RECORD ---" << endl;
        myfile << "Patient Name : " << name << endl;
        myfile << "Mobile No    : " << mobileno << endl;
        
        if (disease == 1) {
            myfile << "Department   : Heart Doctor(DR. Anil)" << endl;
        } else {
            myfile << "Department   : Kidney Doctor(DR. Ajay)" << endl;
        }
        if(choice3==1){
            myfile << "Time Slot    :" << "10" << endl;
        }
        else if(choice3==2){
            myfile << "Time Slot    :" << "12" << endl;
        }
        else{
            myfile << "Time Slot    :Choice " << "2" << endl;
        }
        myfile << "--------------------------" << endl << endl;

        myfile.close();
        cout << "Record saved to hospital_records.txt" << endl;
    } 
    else {
        cout << "erroe Could not open file!" << endl;
    }
}
    
};


int main(){
    doctor d1;
    d1.savetofile();


    return 0;
}