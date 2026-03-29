#include <iostream>
#include <iomanip>
void showbalance(double balance);// declaired
double deposit();
double withdraw(double balance); 

int main()
{   double balance=123.04;
    int choice=0;

    do{
        // double balance ;this will not work have to place variable outside do while
        // int choice=0;
        std::cout<<"**********************\n";
        std::cout<<"enter your choice\n";
        std::cout<<"**********************\n";
        std::cout<<"1.show balance\n";
        std::cout<<"2.deposit money\n";
        std::cout<<"3.withdraw money\n";
        std::cout<<"4.Exit\n";
        
        std::cin>>choice;
        // lets clear the input buffer other wise it will breat=k the program
        std::cin.clear();//function- this function will reset any error flag
        //when the standerd input fails to interpret the input
        fflush(stdin);//this will clear the input buffer it clears new line charecter and stops the progream to go hariwaire
        

        switch (choice){
            case 1:showbalance(balance);
                    break;
            case 2:balance+=deposit();//balance=balance+deposit();
                   showbalance(balance); 
                    break;
            case 3:balance-=withdraw(balance);
                   showbalance(balance);
                    break;
            case 4:std::cout<<"thanks for visiting\n";
                    break;
            default:std::cout<<"invalid case\n";
        }
    }while( choice !=4);

    return 0;
}

void showbalance(double balance){// defenation reciving balance as an argument
    std::cout<<"your balance is : $:"<<std::setprecision(2)<<std::fixed<<balance<<'\n';// return 0;// why this is giving error /is precison is a method 
}
double deposit(){
    double amount=0;

    std::cout<<"enter amount to be deposited: ";
    std::cin>>amount;
// using if statement to limit users input
    if (amount>0){
        return amount;
    }else{
        std::cout<<"thats not avalid ammount";
        return 0;
    }
    // return amount;//without this it will not work
}
double withdraw(double balance){
    // lets add if statements to privint over withdrawing

    double amount=0;

    std::cout << "enter to be withdrawn: \n";
    std::cin >>amount;

    if (amount>balance){
        std::cout<<"insufficient funds\n";
        return 0;
    // }lets make sure the amount is legimet and not -
    }
    else if(amount<0 ) {
        std::cout <<"thats not a valid ammount\n";
        return 0;// why return 0 here
    }
    else{
        return amount;
    }


    // return amount;
} 
//find the bug
