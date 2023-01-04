#include <iostream>
#include <fstream>


using namespace std;

void sabt_nam(){
    string username=NULL;
    long int password=NULL;
    ofstream outputFile("output.dat", ios::out);
    //check for file opening
     if ( !outputFile)
     {
     cerr << "some thing wrong during opening file!" << endl;
     exit(1);
     }

     cout <<"Please enter your username :"<<endl;
     cin >>username;

     cout <<"Enter your password :"<<endl;
     cin>>password;

     outputFile << "Username: " << username << endl << "Password: " << password<<endl;


}


void vorood(){
    string username;
    long int password;


    ifstream inputFile("output.dat", ios::in);
    if (!inputFile)
     {
     cerr << "some thing wrong during opening file!" << endl;
     exit(1);
     }
    inputFile >> username >> password;

    //if (username==NULL){
        cout <<""<<endl;
        cout <<"1.";
     //   sabt_nam();
    //}


    cout<<"Please enter your username :"<<endl;
    cin>> username;
    cout <<"Enter your password :"<<endl;
    cin >>password;




}

void mehman(){

}

void scores(){

}

void setting(){

    //



}



int main()
{
    cout <<"Welcome budy!!"<<endl<<endl;
    cout <<"_______________Table Of Numbers_______________"<<endl<<endl;
    cout <<"      *Choose one of the options in menu*   "<<endl<<endl;

    cout <<"Menu :"<<endl<<endl;
    cout <<"1.Log In"<<endl<<"2.Play The Game"<<endl<<"3.Play As A Guest"<<endl;
    cout <<"4.Table Of Scores"<<endl<<"5.Settings  (only for admins)"<<endl<<endl;
    int n;
    cin>>n;
    while( true){
        if (n<1 || n>5){
            cout <<"Invalid option!"<<endl<<"Plese enter again!"<<endl;
            cin >>n;
        }
        else
            break;
    }
    switch (n) {
    case 1: sabt_nam(); break;
    case 2: vorood(); break;
    case 3: mehman(); break;
    case 4: scores(); break;
    case 5: setting(); break;

    }





    string s;
    return 0;
}

