/*
Andrew Sinha
Pizza Shop Program
11/25/24
Extra: using sales tax + setprecision
*/

#include <iostream>
#include <iomanip>

using namespace std;

//create the methods

double priceIt(string size, int toppingCount);
void billIt(double price, string size, int toppingCount);

string sizes;
int toppingCount;


int main(){

//get size, toppings, and call methods
std::cout << "Welcome to  The 3.14zzeria! What size pizza would you like?" << std::endl;
std::cin >> sizes;
std::cout << "How many toppings?" << std::endl;
std::cin >> toppingCount;

double price = priceIt(sizes, toppingCount);

billIt(price, sizes, toppingCount);
return 0;
}


//define the methods
double priceIt(string size, int toppingCount){
    double price = 0;
    if(size == "Large" || size == "large"){
        price = (14.07 + (toppingCount * 2));
    }

    else if(size == "Small" || size == "small"){
        price = (12.95 + (toppingCount* 2));
    }

    else{
        std::cout << "Invalid size." << std::endl;
    }

    return price;
}


void billIt(double price, string size, int toppingCount){
    std::cout << "Thank you for shopping today." << endl;
    std::cout << "You ordered a " << size << " pizza with " << toppingCount << " toppings." << endl;
    std::cout << "That comes out to total $" << price << " without the New Jersey Sales Tax." <<  endl;
    std::cout << "With tax, it comes out to be $" << setprecision(4) << (price + (price * 0.06625)) << ". Thank you!" << endl;
}

//the end