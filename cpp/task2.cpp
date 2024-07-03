#include<iostream>
using namespace std;

int main(){
    int sales_amount = 95000;

    int state_tax = (sales_amount * 4 ) / 100;

    int county_tax = (sales_amount * 2) / 100;

    cout << "State Tax = " << state_tax << endl;

    cout << "County Tax = " << county_tax << endl;
    

    int total_tax = state_tax + county_tax;

    cout << "Total Tax = " << total_tax;
}