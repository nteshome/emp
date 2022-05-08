#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;
char choose; // user input choose
char Job_choose; // for choose availabel job
char apply;
ofstream output;  // it's used to save all user input

    // Structer
     struct employ_address{ // Employe Address Info
         string sup_city;
         string city;
         char wereda[4];
         int house_num;
      };

     struct employ_info{ // Employe Estat Info
          string married;
          int babys;
          string Teyaz;
          int Teyaz_num;
          string tey_subcity;
          string tey_city;
          string tey_woreda;
          int tey_housenum;
      };

     struct employ{ // Employe Info
         string fname,mname,lname,email,gender,uName,Pass;
         string login_uname, login_pass;
         string Store_uname, Store_pass;
         int Mobile_num,age;
           employ_address add;
           employ_info info;
       }user;
    void form();
    void driver();
    void mechanics();
    void CellCenter();
    void Apply(){
        system("cls");
        system("Color F0");
        output.open("User_Register_record.txt");// it's used to save all user input

         cout << endl << endl;
         cout << "\t----------- WE Need More Info About You ----------- "<< endl << endl;
         int checkout;
         cout << "\tTo Exit Press -> (0)" << endl;
         cout << "\tTO Continue Press -> (1)" << endl;
         cout << "\t\t>: ";cin >> checkout;
         if(checkout == 0)
            form();

         cout << endl << endl;

         cout << "\t\t~~~| Enter Your Address |~~~" << endl;
         cout << "\t\t\tSub_CIty: ";
         cin >> user.add.sup_city;
         cout << "\t\t\tCity: ";
         cin >> user.add.city;
         cout << "\t\t\tHouse Number: ";
         cin >> user.add.house_num;
         cout << "\t\t\tWoreda: ";
         cin >> user.add.wereda;
         cout << endl;
         cout << "\t\t~~~| Enter Your Staties |~~~" << endl;
         cout << "\t\tAre Your Married: ";
         cin >> user.info.married;
         cout << "\t\tHow many Babies have YOu: ";
         cin >> user.info.babys;
         cout << endl;
         cout << "\t\t~~~| Enter Your Teyaz |~~~" << endl;
         cout << "\t\tEnter Your Teyaz Name: ";
         cin >> user.info.Teyaz;
         cout << "\t\tTeyaz Sub City: ";
         cin >> user.info.tey_subcity;
         cout << "\t\tTeyaz City: ";
         cin >> user.info.tey_city;
         cout << "\t\tTeyaz House Number: ";
         cin >> user.info.tey_housenum;
         cout << "\t\tTeyaz Woreda: ";
         cin >> user.info.tey_woreda;
         cout << "\t\tEnter Your Teyaz Phone: ";
         cin >> user.info.Teyaz_num;
         cout << endl;
         cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\t  Thank Your For Applying Check Your INfo "<< endl;
        cout << "      =======================================================";

        cout << endl << endl;
        output<<"UseName: "<<user.uName<<endl<<"Pass :"<<user.Pass<<endl<<"First Name: "<<user.fname<<endl<<"Middle Name: "<<user.mname<<endl<<"Last Name: "<<user.lname<<endl<<
        "Email: "<<user.email<<endl<<"Gender: "<<user.gender<<endl<<"Mobile: "<<user.Mobile_num<<endl<<"Sub City:"<<user.add.sup_city<<endl<<"City: "<<user.add.city<<endl<<"Woreda :"<<user.add.wereda<<endl<<
        "Marred: "<<user.info.married<<endl<<"Babys: "<<user.info.babys<<endl<<"Teyaz: "<<user.info.Teyaz<<"Teyaz Phone: "<<user.info.Teyaz_num<<endl;
        output.close();
        system("pause");
        system("cls");
        system("Color B0");
        cout << endl << endl;
        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~                           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        cout << "\t\t#######                         YOUR INFO                                 #######"<< endl;
        cout << "\t\t||\t FIRST NAME: "<< user.fname                                        << "\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t MIDDLE NAME: "<< user.mname                                          <<"\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t LAST NAME: "<< user.lname                                            <<"\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t EMAIL ADDRESS: "<< user.email                                   << "\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t USER NAME: "<< user.uName                                       << "\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t PASSWORD: "<< user.Pass                                              <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t PHONE NUMBER: "<< user.Mobile_num                              << "\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t GANDER: "<< user.gender                                              <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t AGE: "<< user.age                                                    <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t SUB-CITY: "<< user.add.sup_city                                      <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t CITY: "<< user.add.city                                              <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t WEREDA: "<< user.add.wereda                                          <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t MARRIED: "<< user.info.married                                       <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t BABYS: "<< user.info.babys                                           <<"\t\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t TEYAZ NAME: "<< user.info.Teyaz                                      <<"\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t TEYAZ PHONE: "<< user.info.Teyaz_num                                 <<"\t\t\t\t\t\t\t||"<< endl;

        cout << "\t\t||\t TEYAZ SUB-CITY: "<< user.info.tey_subcity                                           <<"\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t TEYAZ CITY: "<< user.info.tey_city                                      <<"\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t TEYAZ HOUSE NUMBER: "<< user.info.tey_housenum                                 <<"\t\t\t\t\t\t||"<< endl;
        cout << "\t\t||\t TEYAZ WOREDA: "<< user.info.tey_woreda                                 <<"\t\t\t\t\t\t\t||"<< endl;
        cout << "\t\t#######                                                                   #######"<< endl;
        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~                       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        system("pause");

      }

            // Functions For Jobs
         void driver(){
             system("cls");
             system("Color c0");
             cout << endl << endl;
             cout << "\t-------------------| Driving Job |-------------------\n\n";
             cout << "\t\t\+++ before to apply this job You Need To" << endl;
             cout << "\t\t\tsee the requirment +++\n" << endl;
               cout << "\t\t|   * 1 Year Experance            |" << endl;
               cout << "\t\t|   * NO Drinking Alchol          |" << endl;
               cout << "\t\t|   * Driving Licinec uptodate    |" << endl << endl;

               cout << "\t ::: If you fill the requirment Apply know :::" << endl;
                       cout << "\t\tTo Apply press -> (1)" << endl;
                       cout << "\t\tTo Exit press  -> (0)" << endl;
                       cout << "\t\tTo HOme Main   -> (00)" << endl;
                       cout << "\t\t\t-:";cin >> apply;

               if(apply == '1'){
                Apply();
               }
              else if(apply == '0'){
                form();
               }

               else{
                cout << "\t----------# Enter Valid NUmber #---------------\n";
                system("pause");
                driver();
               }
            }
        void mechanics(){
            system("cls");
            system("Color c0");
            cout << endl << endl;
             cout << "\t-------------------| Mechanics Job |-------------------\n\n";
             cout << "\t\t+++ before to apply this job You Need To" << endl;
             cout << "\t\t\tsee the requirment +++\n" << endl;
               cout << "\t\t|   * 2 Year Experance            |" << endl;
               cout << "\t\t|   * NO Drinking Alchol          |" << endl;
               cout << "\t\t|   * Graduate Paper              |" << endl<<endl;

               cout << "\t :::If you fill the requirment Apply know :::" << endl;
                     cout << "\t\tTo Apply press -> (1)" << endl;
                     cout << "\t\tTo Exit press  -> (0)" << endl;
                     cout << "\t\tTo HOme Main   -> (00)" << endl;
                     cout << "\t\t\t-:";cin >> apply;

               if(apply == '1'){
                Apply();
                 }
               else if(apply == '0'){
                form();
               }
               else{
                cout << "\t----------# Enter Valid NUmber #---------------\n";
                system("pause");
                mechanics();

               }
            }
        void CellCenter(){
            system("cls");
            system("Color c0");
             cout << endl << endl;
             cout << "\t-------------------| Cell Center Job |-------------------\n\n";
             cout << "\t\t+++ before to apply this job You Need To" << endl;
             cout << "\t\t\tsee the requirment +++\n" << endl;
               cout << "\t\t|   * NO Experance            |" << endl;
               cout << "\t\t|   * Speak , Write , List    |" << endl;
               cout << "\t\t|* Amharic , English Perfectly|" << endl;

               cout << "\t :::If you fill the requirment Apply know :::" << endl;
                      cout << "\t\tTo Apply press -> (1)" << endl;
                      cout << "\t\tTo Exit press  -> (0)" << endl;
                      cout << "\t\tTo HOme Main   -> (00)" << endl;
                      cout << "\t\t\t-:"; cin >> apply;

               if(apply == '1'){
                Apply();
                 }
               else if(apply == '0'){
                form();
               }
               else{
                cout << "\t----------# Enter Correct NUmber #---------------\n";
                system("pause");
                CellCenter();
               }
        }
  void form(){
           system("cls");
           system("Color 0C");
           cout << endl << endl;
             cout << "\t>>> We Have 3 JObs Avaiable, Pick what you went <<<\n";
             cout << "\t\t|> For Driver Enter -> (1) " << endl;
             cout << "\t\t|> For Mechanic Enter -> (2) " << endl;
             cout << "\t\t|> For Cell Center Enter -> (3) " << endl;
             cout << "\t\t|> To exit Press -> (0) <<<" <<endl;
             cout << "\t\t-:";cin >> Job_choose;
             switch(Job_choose){
             case '1':
             driver();
             break;
             case '2':
             mechanics();
             break;
             case '3':
             CellCenter();


             default:
                cout << "----------------# Enter Correct Number #----------------\n\n";

             }
     }

int main(){
    do{
          system("cls");
          system("Color 0A");
        cout <<"\t                                                        "<<endl;
        cout <<"\t    ______     __    __     ____ ___      ______        "<<endl;
        cout <<"\t   /  ____|   |  |  |  |   |       /     /      \\      "<<endl;
        cout <<"\t  |  |  __    |  |  |  |   `---   /     |  |  |  |      "<<endl;
        cout <<"\t  |  | |_ |   |  |  |  |      /  /      |  |  |  |      "<<endl;
        cout <<"\t  |  |__| |   |  `--'  |     /  /----.  |  `--'  |      "<<endl;
        cout <<"\t   \\______|    \\______/     /________|   \\______/    "<<endl;
        cout <<"\t                                                        "<<endl;
        cout <<"\t                                                        "<<endl;


    cout<<"\t\t\t   __________         ___       ___           "<<endl;
    cout<<"\t\t\t  /  ______   \\       |  |     |  |          "<<endl;
    cout<<"\t\t\t |__|      |  |       |  |     |  |          "<<endl;
    cout<<"\t\t\t           |  |       |  |     |  |          "<<endl;
    cout<<"\t\t\t           |  |___    |  |_____|  |          "<<endl;
    cout<<"\t\t\t           |  |___|   |   _____   |          "<<endl;
    cout<<"\t\t\t           |  |       |  |     |  |          "<<endl;
    cout<<"\t\t\t           |  |       |  |     |__|          "<<endl;
    cout<<"\t\t\t           |  |       |  |                   "<<endl;
    cout<<"\t\t\t           |__|       |__|                   "<<endl;
    cout<<"\t\t\t                                             "<<endl;
    cout<<"                                                   "<<endl;
    cout <<"\t----------| "<< "WELCOME TO GUZO TRANSPORTATION" <<" |----------\n\n"<<endl;



    cout<<"\t----------------# Enter Your choice #----------------"<<endl<<endl;
    cout<<"\t\t\t-> 1. Register"<<endl;
    cout<<"\t\t\t-> 2. Login"<<endl;
    cout<<"\t\t\t-> 0. Exit"<<endl;

    cout << "\t\t\t-: ";cin>>choose; // Get input from user
    cout <<"\t----------------------------------------------------\n";
    if (choose=='1') {
        output.open("User_Register_record.txt"); // output.open("User_Register_record.txt") -> create User_Register_record.txt and store in that
        system("cls");
        cout << "\n\n\n\t\t\t\t REGISTER\n\n";
        cout <<"\t\tEnter Your First Name: ";
         cin >> user.fname;
        cout <<"\t\tEnter Your Middle Name: ";
         cin >> user.mname;
        cout <<"\t\tEnter Your Last Name: ";
         cin >> user.lname;
        cout <<"\t\tEnter Your age: ";
         cin >> user.age;
        cout<<"\t\tEnter User Name: ";
         cin>>user.uName;
        cout<<"\t\tEnter Password *|* Use Letter: ";
         cin>>user.Pass;
        cout<<"\t\tEnter Email: ";
         cin>>user.email;
        cout<<"\t\tEnter gender: ";
         cin>>user.gender;
        cout<<"\t\tEnter phone number: ";
         cin>>user.Mobile_num;
         cout << "\n\t\t\t You Can Log IN";
         cout << endl << endl;

        output<<user.uName<<"     "<<user.Pass<<"      "<<user.fname<<"      "<<user.mname<<"      "<<user.lname<<"      "<<user.email<<"      "<<user.gender<<"     "<<user.Mobile_num<<endl;
        output<<"Username |"<<" Pass   |"<<" Fname   |"<<" Mname   |"<<" Lname   |"<<" Email                       |"<<" Gender   |"<<" Mobile ";
        output<<"---------------------------------------------------------------------------------------------------";
        output.close();
        cout<<"\t----------------# Registration complete #----------------"<<endl << endl;
         system("pause");
    }

    // LOG IN
    else if(choose=='2'){

        system("cls");
        ifstream input("User_Register_record.txt");

        if(!input){cout<<"\t\t\tYou are Not Register, Please Register!";}
        cout << endl << endl;
        cout << "\t\t\t\tLOG IN\n\n";
        cout<<"\t\tEnter UserName:> ";
        cin>>user.login_uname;
        cout<<"\t\tEnter password:> ";
        cin>>user.login_pass;

         cout <<"\t----------------------------------------------------\n";

        if (input >> user.uName && input >> user.Pass &&
        user.uName == user.login_uname && user.Pass == user.login_pass) {
          form();
        }

        else {cout<<"\n\t  ---: Your Username or Password Incorrcet :---\n\t\t  ---: or You are No't Register :---\n\t\t   ---: Please Try Again :---\n"<<endl;
        input.close();
        system("pause");
       if(choose == '2'){
        system("cls");
        ifstream input("User_Register_record.txt");

        if(!input){cout<<"Error creating file!";}
        cout << endl << endl;
        cout << "\t\t\t\tLOG IN\n\n";
        cout << "\t\t\tYou Have one Chance\n";
        cout<<"\t\tEnter UserName:> ";
        cin>>user.login_uname;
        cout<<"\t\tEnter password:> ";
        cin>>user.login_pass;
         cout <<"\t----------------------------------------------------\n";

        if (input >> user.uName && input >> user.Pass &&
        user.uName == user.login_uname && user.Pass == user.login_pass) {
          form();
        }

        else {cout<<"\n\t  ---: Your Username or Password Incorrcet :---\n\t\t  ---: or You are No't Register :---\n\t\t   ---: Please Try Again :---\n"<<endl;}
        input.close();

       }
    }

    }

    else {cout<<"To exit Press Enter Key!"<<endl;}


}while(choose!='0');
}
