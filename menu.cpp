#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    double Total_bill = 0 ;
    char Nxt_Order ;
    string name ;
    cout<<"Please Enter Your Name : "<<endl;
    cin >> ws ;
    getline(cin, name);
    cout<<endl<<"Hello "<<name<<" Welcome to our E- Cafe ! "<<endl;
    cout<<"Here is our E-Menu "<<endl;
    cout<<" 1.SNACKS :"<<endl;
    cout<<"     a. SAMOSA --  20 ₹"<<endl;
    cout<<"     b. FRIES ---- 80 ₹"<<endl;
    cout<<"     c. SANDWICH - 60 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<" 2.SOFT DRINKS :"<<endl;
    cout<<"     a. COLA ----- 40 ₹"<<endl;
    cout<<"     b. LEMONADE - 35 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<" 3.MOCKTAILS :"<<endl;
    cout<<"     a. VIRGIN MOJITO ----- 120 ₹"<<endl;
    cout<<"     b. BLUE LAGOON ------- 140 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<" 4.JUICES :"<<endl;
    cout<<"     a. ORANGE --- 60 ₹"<<endl;
    cout<<"     b. MANGO ---- 70 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<" 5.TEA :"<<endl;
    cout<<"     a. MASALA --- 15 ₹"<<endl;
    cout<<"     b. GREEN ---- 25 ₹"<<endl;
    cout<<"     c. GINGER --- 20 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<" 6.COFFEE :"<<endl;
    cout<<"     a. ESPRESSO ----------- 50 ₹"<<endl;
    cout<<"     b. CAPPUCCINO --------- 80 ₹"<<endl;
    cout<<"     c. LATTE -------------- 85 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<" 7.STARTERS :"<<endl;
    cout<<"     a. PANEER TIKKA ------ 150 ₹"<<endl;
    cout<<"     b. VEG CRISPY -------- 120 ₹"<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"Plesae place your order as CHOICE for 1-7 and SUB CHOICE for a-c as per the AVAILABILITY"<<endl;
    do {    
        char sub_choice ;
        int choice ;
        int quantity ;
        cin>>choice;
        cin>>sub_choice;
        cout<<"Enter the quantity ."<<endl;
        cin>>quantity;
             if (quantity < 0)
              {
        cout << "Invalid quantity! Defaulting to 1." << endl;
        quantity = 1;
              }
            switch (choice)
            {
            case 1:
                cout<<"SNACKS\n";
                switch (sub_choice)
                {
                    case 'a' :
                    Total_bill = Total_bill + 20 * quantity ;
                    break ;
                    case 'b' :
                    Total_bill = Total_bill + 80 * quantity ;
                    break ;
                    case 'c' :
                    Total_bill = Total_bill + 60 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;
                }
                break;
            case 2 :
                cout<<"SOFT DRINKS\n";
                switch (sub_choice)
                {
                    case 'a' :
                    Total_bill = Total_bill + 40 * quantity ;
                    break;
                    case 'b' :
                    Total_bill = Total_bill + 35 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;
                }
                break;
            case 3 :
                cout<<"MOCKTAILS\n";
                switch (sub_choice) 
                {
                    case 'a' :
                    Total_bill = Total_bill + 120 * quantity ;
                    break ;
                    case 'b' :
                    Total_bill = Total_bill + 140 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;
                }
                break;
            case 4 :
                cout<<"JUICES\n";
                 switch (sub_choice) 
                 {
                    case 'a' :
                    Total_bill = Total_bill + 60 * quantity ;
                    break ;
                    case 'b' :
                    Total_bill = Total_bill + 70 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;   
                 }
                 break;
            case 5 :
                 cout<<"TEA\n";
                 switch (sub_choice)
                 {
                    case 'a' :
                    Total_bill = Total_bill + 15 * quantity ;
                    break ;
                    case 'b' :
                    Total_bill = Total_bill + 25 * quantity ;
                    break ;
                    case 'c' :
                    Total_bill = Total_bill + 20 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;
                 }
                 break;
            case 6 :
                 cout<<"COFFEE\n";
                 switch(sub_choice)
                 {
                    case 'a' :
                    Total_bill = Total_bill + 50 * quantity ;
                    break ;
                    case 'b' :
                    Total_bill = Total_bill + 80 * quantity ;
                    break ;
                    case 'c' :
                    Total_bill = Total_bill + 85 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;
                 }
                 break ;
            case 7 :
                 cout<<"STARTERS\n";
                 switch (sub_choice)
                 {
                    case 'a' :
                    Total_bill = Total_bill + 150 * quantity ;
                    break ;
                    case 'b' :
                    Total_bill = Total_bill + 120 * quantity ;
                    break ;
                    default :
                    cout<<"INCORRECT INPUT\n";
                    break ;
                 }
                 break ;
                 default :
                 cout<<"INCORRECT INPUT\n";
                 break ;
            }
            cout<<"FOR NEXT OREDER PLEASE ENTRY 'Y' OR ELSE 'N' : "<<endl;
            cin>>Nxt_Order ;

    } while ( Nxt_Order == 'Y' || Nxt_Order == 'y' ) ;
    double SGST_Am = Total_bill * 0.025 ; 
    double CGST_Am = Total_bill * 0.025 ; 
    double Platform_Charges = 0.01 * Total_bill ;

    double Final_Payable = Total_bill + SGST_Am + CGST_Am + Platform_Charges ;

    cout<<endl<<endl<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"--------------------------- THANKS FOR VISITING ----------------------------------"<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"=================================================================================="<<endl;
    cout<<"                         E - CAFE DIGITAL RECEIPT                                 "<<endl;
    cout<<" CUSTOMER NAME : "<<name<<endl;
    cout<<" SUB TOTAL OF BILL : "<<Total_bill<<endl;
    cout<<" CGST and SGST TAX ( 2.5 %) : " <<endl;
    cout<<" CGST : "<<CGST_Am<<endl<<" SGST : "<<SGST_Am<<endl;
    cout<<" STAFF FEES and PLATFORM CHARGES: "<<Platform_Charges<<endl<<endl<<endl;
    cout<<"                        YOUR FINAL BILL IS  : "<<Final_Payable<<endl<<endl<<endl;
    cout<<"              It Was A Great PLeasure For Us To Dine With You.  "<<endl;
    cout<<"                       Have A Wonderful Day Ahead ! "<<endl;

    return 0 ;
}