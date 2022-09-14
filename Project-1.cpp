///************************** HOTEL MANAGEMENT SYSTEM ********************************/// 

#include<bits/stdc++.h>
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"
using namespace std;

int main(){
cout<<"                         HOTEL MANAGEMENT SYSTEM                                "<<endl;
    int quant;
    int choice;

    int Qrooms=0;                                                                              //stores the quantity of the rooms
    int Qpasta=0 , Qburger=0 , Qnoodles=0 , Qshake=0 , Qchicken=0;                             //food items at hotel
    
    int Sroom=0;                                                                               // stores the room sold
    int Spasta=0 , Sburger=0 , Snoodles=0 , Sshake=0 , Schicken=0;                             // stores sold items

    int Total_rooms=0;                                                                         //stores total price of room
    int Total_pasta=0 , Total_burger=0 , Total_noodles=0 , Total_shake=0 , Total_chicken=0;    //stores total cost of food items


    cout<<UNDERLINE<<"\n\t\t\t QUANTITY OF ITEM WE HAVE :--"<<CLOSEUNDERLINE;
    cout<<endl;
    
    cout<<"\n Rooms Available: ";
    cin>>Qrooms;

    cout<<"\n Quantity of pasta available: ";
    cin>>Qpasta;

    cout<<"\n Quantity of burger available: ";
    cin>>Qburger;

    cout<<"\n Quantity of noodles available: ";
    cin>>Qnoodles;

    cout<<"\n Quantity of shake available: ";
    cin>>Qshake;

    cout<<"\n Quantity of chicken available: ";
    cin>>Qchicken;

    m:
    cout<<UNDERLINE<<"\n\t\t\t PLEASE SELECT FROM THE MENU" <<CLOSEUNDERLINE;
    cout<<"\n\n1) ROOMS ";
    cout<<"\n2) PASTA";
    cout<<"\n3) BURGER";
    cout<<"\n4) NOODLES";
    cout<<"\n5) SHAKE";
    cout<<"\n6) CHICKEN";
    cout<<"\n7) Informaion regarding sales and collection ";                                                    //only for the owner
    cout<<"\n8) EXIT";

    cout<<"\n Please enter your choice:  ";
    cin>>choice;
    
    switch(choice){
        case 1:                                                                                                 //ROOMS
            cout<<"\n\t\t YOU HAVE SELECTED ""ROOMS"" ";
            cout<<"\n\t Enter the number of rooms you want to book : ";
            cin>>quant;

            if(Qrooms-Sroom >= quant){                                                       
                Sroom=Sroom+quant;
                Total_rooms=Total_rooms+quant*2000;
                cout<<quant<<" room/rooms have been booked ";
            }
            else
                cout<<"\n\t Only "<<Qrooms-Sroom<<" are left! ";                                               // rooms left
                break;



        case 2:                                                                                              //PASTA
            cout<<"\n\t\t YOU HAVE SELECTED ""PASTA"" ";
            cout<<"\n\t Enter the quantity of pasta you want to order: ";
            cin>>quant;

            if(Qpasta-Spasta >= quant){                                                       
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*120;
                cout<<quant<<"pasta have been ordered ";
            }
            else
                cout<<"\n\t Only "<<Qpasta-Spasta<<" are left! ";                                           // pasta left
                break;



        case 3:                                                                                           //BURGER
            cout<<"\n\t\t YOU HAVE SELECTED ""BURGER"" ";
            cout<<"\n\t Enter the quantity of burgers you want to order: ";
            cin>>quant;

            if(Qburger-Sburger >= quant){                                                       
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*110;
                cout<<quant<<"Burger/Burgers have been ordered  ";
            }
            else
                cout<<"\n\t Only "<<Qburger-Sburger<<" are left! ";                                      // burger left
                break;


 
        case 4:                                                                                       //NOODLES
            cout<<"\n\t\t YOU HAVE SELECTED ""NOODLES"" ";
            cout<<"\n\t Enter the quantity of noodles you want to order: ";
            cin>>quant;

            if(Qnoodles-Snoodles >= quant){                                                       
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*100;
                cout<<quant<<"noodle/noodles have been ordered ";
            }
            else
                cout<<"\n\t Only "<<Qnoodles-Snoodles<<" are left! ";                                 // noodles left
                break;



        case 5:                                                                                      //SHAKE
            cout<<"\n\t\t YOU HAVE SELECTED ""SHAKE"" ";
            cout<<"\n\t Enter the quantity of shake you want to order: ";
            cin>>quant;

            if(Qshake-Sshake >= quant){                                                       
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*90;
                cout<<quant<<"shake/shakes have been ordered ";
            }
            else
                cout<<"\n\t Only "<<Qshake-Sshake<<" are left! ";                                     // shakes left
                break;



        case 6:                                                                                     //CHICKEN
            cout<<"\n\t\t YOU HAVE SELECTED ""CHICKEN"" ";
            cout<<"\n\t Enter the quantity of chicken you want to order: ";
            cin>>quant;

            if(Qchicken-Schicken >= quant){                                                       
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150;
                cout<<quant<<"chicken/chickens have been ordered ";
            }
            else
                cout<<"\n\t Only "<<Qchicken-Schicken<<" are left! ";                               // chickens left
                break;
    

        case 7:
            cout<<"\n\t YOU HAVE SELECTED ""INFORMATION AND COLLECTION  DETAILS""";

            cout<<"\n Total number of rooms we have: "<<Qrooms;                                    //ROOM INFORMATION
            cout<<"\n Rooms booked: "<<Sroom;
            cout<<"\n Room Left: "<<Qrooms-Sroom;
            cout<<"\n Total Collection made from rooms: "<<Total_rooms;


            cout<<"\n Total number of Pasta we have: "<<Qpasta;                                   //PASTA INFORMATION
            cout<<"\n Pasta ordered: "<<Spasta;
            cout<<"\n Pasta Remaining: "<<Qpasta-Spasta;
            cout<<"\n Total Collection made from Pasta: "<<Total_pasta;      


            cout<<"\n Total number of Burger we have: "<<Qburger;                                 //BURGER INFORMATION
            cout<<"\n Burgers ordered: "<<Sburger;
            cout<<"\n Burgers Remaining: "<<Qburger-Sburger;
            cout<<"\n Total Collection made from Burgers: "<<Total_burger; 


            cout<<"\n Total number of Noodles we have: "<<Qnoodles;                               //NOODLES INFORMATION
            cout<<"\n Noodles ordered: "<<Snoodles;
            cout<<"\n Noodles Remaining: "<<Qnoodles-Snoodles;
            cout<<"\n Total Collection made from Noodles: "<<Total_noodles;


            cout<<"\n Total number of Shake we have: "<<Qshake;                                    //SHAKE INFORMATION
            cout<<"\n Shakes ordered: "<<Sshake;
            cout<<"\n Shakes Remaining: "<<Qshake-Sshake;
            cout<<"\n Total Collection made from Shakes: "<<Total_shake;


            cout<<"\n Total number of Chicken we have: "<<Qchicken;                                //CHICKEN INFORMATION
            cout<<"\n Chicken ordered: "<<Schicken;
            cout<<"\n Chicken Remaining: "<<Qchicken-Schicken;
            cout<<"\n Total Collection made from Chicken: "<<Total_chicken;                       

            cout<<"\n\n Total Collection of the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
            break;

    case 8:
        exit(0);


    default:
        cout<<"\n Please select the number from above listing only ";
    }

goto m;                                             //It is a jump statement through which the user will go again to menu starting 

    







    return 0;
}