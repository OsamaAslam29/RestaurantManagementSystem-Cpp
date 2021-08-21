#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int menu(){

    int menuSelector;
    int subMenuSelector;
    int price = 0;
    system("CLS");
    cout<<"-------- Bully Shah Restaurant --------"<<endl<<endl;
    cout<<"--------            Menu         --------"<<endl<<endl;
    cout<<"--------  No.1:  Chicken Karahi   --------"<<endl;
    cout<<"--------  No.2:  Chicken Biryani  --------"<<endl;
    cout<<"--------  No.3:  Chicken Fried    --------"<<endl;
    cout<<"--------  No.4:    Burger         --------"<<endl;
    cout<<"--------  No.5:  Cold Drink       --------"<<endl<<endl<<endl;
    cout<<"----- Select Your Order From Menu  -------- : ";
             cin>>menuSelector;


   if (menuSelector == 1)
   {
       system("CLS");
       cout<<" \n\n ******  your orde is :     Chicken  Karahi ****** "<<endl<<endl;
       cout<<"--------  No.1:  Full Chicken Karahi   --------Rs:1000 "<<endl;
       cout<<"--------  No.2:  Half Chicken Karahi   --------Rs: 500"<<endl<<endl;
       cout<<"--------  Select your order from menu  -------- : ";
          cin>>subMenuSelector;
          if (subMenuSelector == 1 )
          {
              cout<<"--------    Full Chicken Karahi   --------Rs:1000 "<<endl;
              price += 1000;
          }
          else if (subMenuSelector == 2)
          {
           cout<<"--------    Half Chicken Karahi   --------Rs: 500"<<endl;
           price += 500;   
          }
          else{
              cout<<"--------  You entered an invalid choice  --------"<<endl;
          }
   }
            

      else if (menuSelector == 2)
   {
       system("CLS");
       cout<<" ******  your orde is :     Chicken  Biryani ****** "<<endl<<endl;
       cout<<"--------  No.1:  Full Chicken Karahi   --------Rs: 500 "<<endl;
       cout<<"--------  No.2:  Half Chicken Karahi   --------Rs: 300"<<endl<<endl<<endl;
         cout<<"----- Select Your Order From Menu  -------- : ";
          cin>>subMenuSelector;
          if (subMenuSelector == 1 )
          {
              cout<<"--------    Full Chicken Biryani   --------Rs: 500 "<<endl;
              price += 500;
          }
          else if (subMenuSelector == 2)
          {
           cout<<"--------       Half Chicken Biryani   --------Rs: 300"<<endl;
           price += 300;   
          }
          else{
              cout<<"--------  You entered an invalid choice  --------"<<endl;
          }
   }
              
// order no. 3:
else if (menuSelector == 3)
   { 
       system("CLS");
       cout<<" ******  your orde is :     Chicken  Fried ****** "<<endl;
       cout<<"--------  No.1:  Full Chicken Fried   --------Rs:800 "<<endl;
       cout<<"--------  No.2:  Half Chicken fried   --------Rs: 500"<<endl<<endl<<endl;
          cout<<"----- Select Your Order From Menu  -------- : ";
          cin>>subMenuSelector;
          if (subMenuSelector == 1 )
          {
              cout<<"--------    Full Chicken Fried   --------Rs:800 "<<endl;
              price += 800;
          }
          else if (subMenuSelector == 2)
          {
             cout<<"--------     Half Chicken Fried   --------Rs: 500"<<endl;
           price += 500;   
          }
          else{
              cout<<"--------  You entered an invalid choice  --------"<<endl;
          }
   }
       
// no. 4:
else if (menuSelector == 4)
   {
       system("CLS");
       cout<<" ******  your orde is :     Burger    ****** "<<endl;
       cout<<"--------  No.1:  Zinger Burger   --------Rs:300 "<<endl;
       cout<<"--------  No.2:  Chicken Burger  --------Rs: 200"<<endl<<endl<<endl;
          cout<<"----- Select Your Order From Menu  -------- : ";
          cin>>subMenuSelector;
          if (subMenuSelector == 1 )
          {
              cout<<"--------    Zinger Burger   --------Rs: 300 "<<endl;
              price += 300;
          }
          else if (subMenuSelector == 2)
          {
           cout<<"--------      Chicken Burger   --------Rs: 200"<<endl;
           price += 500;   
          }
          else{
              cout<<"--------  You entered an invalid choice  --------"<<endl;
          }
   }
    //    no.5
    else if (menuSelector == 5)
   {
       system("CLS");
       cout<<" ******  your orde is :    Cold Drink  ****** "<<endl;
       cout<<"--------  No.1:  Coca cola ( only 1.5L )  --------Rs:100 "<<endl;
       cout<<"--------  No.2:  Sprite    ( only 1.5L )   --------Rs: 100"<<endl<<endl<<endl;
         cout<<"----- Select Your Order From Menu  -------- : ";
          cin>>subMenuSelector;
          if (subMenuSelector == 1 )
          {
              cout<<"--------    Coca cola ( only 1.5L )  --------Rs:100 "<<endl <<endl;
              price += 100;
          }
          else if (subMenuSelector == 2)
          {
              cout<<"--------    Sprite ( only 1.5L )  --------Rs:100 "<<endl;       
            price += 100;   
          }
          else{
              cout<<"--------  You entered an invalid choice  --------"<<endl;
          }
   }
       
   else{
       system("CLS");
       cout<<" *************   Out Of Order   ************ "<<endl;

   }

    return price ;
    
    
    }


int main(){
    system("CLS");
    int commingPrice = 0;

    commingPrice += menu();
    
    for (int i = 0; i < 1; i)
    {

        if (commingPrice == 0)
        {
            cout << "\n\n     !-!-!-!-! PLZ CHOOSE AGAIN !-!-!-!-!" << endl;
            Sleep(2000);
            commingPrice += menu();
        }
        else
        {
            system("CLS");
            char ch;
            cout << "\n     ------ your  bill is :  ------ " ;
            cout << commingPrice<< endl;
 
            cout << "\n     ------ ARE YOU WANT TO ORDER MORE ? ------ " << endl;
            cout << "       ------ IF ORDER MORE THEN PRESS 'y' OTHER-WISE PRESS 'n' TO SHOW TOTAL BILL ------ " << endl;
            cout << "\n     ------ ENTER YOUR CHOISE = ";
            cin >> ch;

            if (ch == 'y')
            {
                commingPrice += menu();
            }
            else
            {
                system("CLS");
                cout << "\n\n ------>>>>>     YOUR BILL   =====  " << commingPrice << endl
                     << endl
                     << endl;
                Sleep(2000);
                cout << "\n\n **********     THANK YOU , YOUR ORDER WILL BE READY WITHIN FEW MUNITES     **********" << endl;
                cout << "\t                \v All Rights Reserved \xa9PowerProduction"<<endl
                     << endl;
                Sleep(3000);
                break;
            }
        }
    }

    return 0;
}
