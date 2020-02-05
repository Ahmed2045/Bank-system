#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int accountn[20];
char name[20][20];
int streetn[20];
char street[20][20];
char neighbour[20][20];
char city[20][20];
int balance[20];
int deposit;
int withdraw;
int y;
int giza=0;
int cairo=0;
int alex=0;


void number(int y){

  for(int i=1;i<=y;i++){
        accountn[i]=i;
  cout<<"the account number of customer is : "<<accountn[i]<<endl;

}
}

 void names(int y){
     for(int i=1;i<=y;i++){
        cout<<"please enter name of customer whose account address \t"<<accountn[i]<<endl;
        h:  cin.getline(name[i], 20 , '.');

        if (name[i][20] ==1||name[i][20] ==2||name[i][20] ==3||name[i][20] ==4||name[i][20] ==5||name[i][20] ==6||name[i][20] ==7||name[i][20] ==8||name[i][20] ==9 ||name[i][20] ==0){

            cout<<"invalid input please enter a valid name\n";
                        goto h;

        }
     }
 }

void address(int y){
for (int i=1;i<=y;i++){
    cout<<"please enter your street number of the account whose number\t"<<accountn[i]<<endl;
    q:  cin>>streetn[i];
    if(streetn[i]<0){
        cout<<" invalid input\n";
        cout<<"please enter your street number\n";
        goto q;
    }else if(!cin) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
        goto q;
}
    cout<<"please enter street name of the account whose number\t"<<accountn[i]<<endl;;
e:cin.getline(street[i], 20 , '.' );

if(street[i][20]==0||street[i][20] ==1||street[i][20] ==2||street[i][20] ==3||street[i][20] ==4||street[i][20] ==5||street[i][20] ==6||street[i][20] ==7||street[i][20] ==8||street[i][20] ==9 ){
    cout<<"invalid input\n";
    cout<<"please enter your street name\n";
    goto e;
}
 cout<<"please enter neighborhood of the account whose number\t"<<accountn[i]<<endl;
 s:cin.getline(neighbour[i], 20 , '.' );

 if(neighbour[i][20]==0||neighbour[i][20] ==1||neighbour[i][20] ==2||neighbour[i][20] ==3||neighbour[i][20] ==4||neighbour[i][20] ==5||neighbour[i][20] ==6||neighbour[i][20] ==7||neighbour[i][20] ==8||neighbour[i][20] ==9){
    cout<<"invalid input\n";
    cout<<"please enter your neighborhood\n";
    goto s;
    }
cout<<"please enter city of the account whose number\t"<<accountn[i]<<endl;
d:cin.getline(city [i], 20  , '.');
if(city[i][20]==0||city [i][20] ==1||city [i][20] ==2||city [i][20] ==3||city [i][20] ==4||city [i][20] ==5||city [i][20] ==6||city [i][20] ==7||city [i][20]==8||city [i][20] ==9){
    cout<<"invalid input\n";
    cout<<"please enter your city";
    goto d;
    }

    cout<<"Address of customer whose account number  "<<accountn[i]<<" is : "<<streetn[i]<<" "<<street[i]<<", "<<neighbour[i]<<", "<<city[i]<<endl;
}
}

void balan(int y){
    cout<<"please enter your account balance\n";
    for(int i=1;i<=y;i++){
       v: cin>>balance[i];
        if(!cin||balance[i]<=0) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput

            goto v;
        }
    }
    }

 void trans(int y){
     int z;string c;
     string b;
     for (int i=1;i<=10;i++){
        cout<<"please enter your account number to make transactions\n";
       k: cin>>z;
        cout<<"your account number is : "<<accountn[z]<<endl<<"hello\t"<<name[z]<<endl<<"do you want to deposit or withdraw\n";
        z:cin>>c;
        if(c=="D"||c=="d"){
        cin>>deposit;
         if(!cin||deposit<=0) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
    goto k;
         }
        balance[z]=balance[z]+deposit;
        }else if(c=="w"||c=="W"){
            p:cin>>withdraw;
             if(!cin||withdraw>balance[z]||withdraw<=0) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinpu
       goto p;      }else{ balance[z]=balance[z]-withdraw;
}
        }

            else{ cout<<"invalid input enter a valid input\n";
                  goto z;
}

cout<<"do you want to make another transactions\n";
 w:cin>>b;
 if(b=="y"||b=="Y"){
    goto k;
 }else if(b=="n"||b=="N"){
     break;
 }else{
     cout<<"invalid input please enter again\n";
     goto w;
 }
     }
     }

    void print(int y){
    for(int i=1;i<=y;i++){
        cout<<name[i]<<"\t"<<balance[i]<<endl;
    }
    }
 void spec(){int v;
     cout<<"please enter account number\t";
     cin>>v;
     cout<<balance[v];

 }
void maxb(int y){ int maxa=0;
for(int i=1;i<=y;i++){
    if(balance[i]>maxa){
        maxa=balance[i];
    }
}
}
void change(){int s,m;
    cout<<"please enter customer account number\n";
    cin>>s;
    cout<<"customer's name is:\t"<<name[s]<<"\tcustomer's address is:\t"<<streetn[s]<<" "<<street[s]<<", "<<neighbour[s]<<", "<<city[s]<<"\t"<<"customer's balance is:\t"<<balance[s]<<endl;
    cout<<"choose what you want to change\n1-customer's name\n2-customer's address\n3-customer's transactions\n4-customer's balance\n";
    l:cin>>m;
    switch(m){
        case 1:{
        cout<<"please enter the new name of the customer\n";
        cin>>name[s];
        break;
        }
        case 2:{
            cout<<"please enter new address\n";
            cout<<"please enter your street number of the account whose number\t"<<accountn[s]<<endl;
    q:  cin>>streetn[s];
    if(streetn[s]<0){
        cout<<" invalid input\n";
        cout<<"please enter your street number\n";
        goto q;
    }else if(!cin) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
        goto q;
}
    cout<<"please enter street name of the account whose number\t"<<accountn[s]<<endl;;
e: cin>>street[s];
if(street[s][20]==1||street[s][20]==0||street[s][20]==2||street[s][20]==3||street[s][20]==4||street[s][20]==5||street[s][20]==6||street[s][20]==7||street[s][20]==8||street[s][20]==9)
    cout<<"invalid input\n";
    cout<<"please enter your street name\n";
    goto e;
}
 cout<<"please enter neighborhood of the account whose number\t"<<accountn[s]<<endl;
 s:cin>>neighbour[s];
 if(neighbour[s][20]==1||neighbour[s][20]==0||neighbour[s][20]==2||neighbour[s][20]==3||neighbour[s][20]==4||neighbour[s][20]==5||neighbour[s][20]==6||neighbour[s][20]==7||neighbour[s][20]==8||neighbour[s][20]==9){
    cout<<"invalid input\n";
    cout<<"please enter your neighborhood\n";
    goto s;
    }
cout<<"please enter city of the account whose number\t"<<accountn[s]<<endl;
d:cin>>city[s];
if(city[s][20]==0||city[s][20]==1||city[s][20]==2||city[s][20]==3||city[s][20]==4||city[s][20]==5||city[s][20]==6||city[s][20]==7||city[s][20]==8||city[s][20]==9){
    cout<<"invalid input\n";
    cout<<"please enter your city";
    goto d;
    }
    break;
case 3:{int z;string c;
     string b;
     for (int i=1;i<=10;i++){

        cout<<"do you want to deposit or withdraw\n";
        z:cin>>c;
        if(c=="D"||c=="d"){
       k: cin>>deposit;
         if(!cin||deposit<=0) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
    goto k;
         }
        balance[s]=balance[s]+deposit;
        }else if(c=="w"||c=="W"){
            p:cin>>withdraw;
             if(!cin||withdraw>balance[s]||withdraw<=0) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinpu
       goto p;      }else{ balance[s]=balance[s]-withdraw;
}
        }

            else{ cout<<"invalid input enter a valid input\n";
                  goto z;
}
}   break;
}
  case 4:{
      cout<<"please enter your new balance";
      cin>>balance[s];
      break;

  } default:{cout<<"invalid input please enter a valid input\n";
    goto l;
}
    }
}

int main()
{ int c;
  int x;
 cout<<"please enter number of customers\n";
 r:cin>>x;
if(!cin||x>20) {// or if(cin.fail())

    // user didn't input a number
    cin.clear(); // reset failbit
    cout<<"invalid input please enter a valid input\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    // next, request user reinput
    goto r;
}
 number(x);
 names(x);
 address(x);
 balan(x);
 trans(x);
cout<<"Hello in bank management system please enter your choice\n";
cout<<"1) To print all names and account balances\n2) To print specific customer’s account balance\n3) To edit customer transactions\n4) To show customer with highest balance\n5) To change customer’s name, transactions, balance, or address\n6) To show how many customers in one city\n";
u:cin>>c;
switch(c){
case 1:{

 print(x);
 break;
}
case 2:{
spec();
break;
}
case 3:{

trans(x);
break;
}
case 4:{
    maxb(x);
    break;
case 5:{
change();
break;
}
case 6:{
    cout<<"there are  "<<giza<<" in giza\n"<<"there are "<<cairo<<" in cairo\n"<<"there are "<<alex<<" in Alexandria\n";
     break;

} default:{
    cout<<"invalid input please enter a valid input\n";
    goto u;

}
}

}
goto u;

    return 0;
}


