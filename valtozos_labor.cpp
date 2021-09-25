#include "std_lib_facilities.h"


int main() 
{ 
    cout << "Enter the name of the person you want to write to" << endl;
    string first_name;
    cin >> first_name;
    cout << "Dear," << first_name << "!\n";
    cout << "How are you? I am fine. I miss you.”" << endl;
    string friend_name;
    cout <<"Friend name:" << endl;
    cin >> first_name;
    cout << "Have you seen" <<friend_name << "lately?" << endl;
    cout << "Friend sex?" << endl;
    char friend_sex;
    cin >> friend_sex;
    if(friend_sex == 'm')
    {
        cout << "If you see " << friend_name << "please ask him to call me" << endl;
    }
     if(friend_sex == 'f')
    {
        cout << "If you see " << friend_name << "please ask her to call me" << endl;
    }
    cout << "Enter your age:" << endl;
    int age;
    cin >> age;
    if(age >= 110 || age <= 0)
    {
        simple_error("you're kidding!");
    }
    if(age < 12)
    {
        cout << "Next year you will be "<< age+1 << endl;
    }
     if(age == 17)
    {
        cout << "Next year you will be able to vote."<< endl;
    }
      if(age > 70)
    {
        cout << "I hope you are enjoying retirement"<< endl;
    }
    cout <<"Yours sincerely!"<< endl;
    cout <<""<<endl;
    cout <<""<<endl;
    cout <<"Imre"<<endl;
return 0; 
}
