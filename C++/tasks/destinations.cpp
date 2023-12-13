#include <iostream>

// Including i/o operations library

using namespace std;
// using std library

// Creating a class named Destination
class Destination{

    // Access modifier set to public for public access
    public:
    // Creating empty required variables
    char signin;
    string username;
    string email;
    string password;
    string confPassword;
    
    // Declaring Constructor to cout some info
    Destination(){
        cout<<"=====Popular Destinations=====\n";
        cout<<"\t1) Ahmedadbad\n";
        cout<<"\t2) Rajkot\n";
        cout<<"\t3) Surat\n";
        cout<<"\t4) Bhavnagar\n";
        cout<<"\t5) Jamnagar\n";
        cout<<"\n\nDo you want to signup in our app [y/n]: ";
        cin>>signin;
        cout<<"\n\n\n";
        registration();
    }
    // Login method
    void login(){
        cout<<"============User Login============\n";
        cout<<"welcome to login\n\n";

    }
    // registration method 
    void registration(){
        // run this method only if the sign in is equal to y or Y 
        if(signin == 'y' || signin == 'Y'){
            cout<<"\n==========Registration Process==========\n";
            
            cout<<"Enter name: ";
            cin>>username;
            fflush(stdin);

            
            cout<<"Enter email: ";
            cin>>email;
            fflush(stdin);

                        
            cout<<"Enter Password: ";
            cin>>password;
            fflush(stdin);

                        
            cout<<"Enter Password: ";
            cin>>confPassword;
            fflush(stdin);

            // if the password and confirm password mathches then execute login method
            if(password.compare(confPassword)==0){
                login();
            }
            // Otherwise repeate the registration process
            else{
                cout<<"\nPassword and Confirm Password doesn't match ";
                registration();
            }
        }

    }
    // Destructor, it will say thank you
    ~Destination(){
        cout<<"\nThank you!\n";
    }
};


int main(void){
    // Creating object of the class.
    Destination d1;
}