#include <iostream>
using namespace std;

int main(){
    int totalSwipes;
    int jumpers = 0;
    int halfFares = 0;
    int fullFares = 0;
    double totalRevenue = 0.0;

    cout << "Enter total number of swipes: " << endl;
    cin >> totalSwipes;

    for(int swipe = 1; swipe <= totalSwipes; swipe++){
        if(swipe % 3 == 0){
            jumpers++;
        }
       else if(swipe % 5 == 0){
        halfFares++;
        totalRevenue += 1.45;
    }   
        else{
        fullFares++;
        totalRevenue += 2.90;
    }
    }

    cout << "Total Swipes: " << totalSwipes << endl;
    cout << "Jumper Swipers: " << jumpers << endl;
    cout << "Half Fare Swipes: " << halfFares << endl;
    cout << "Full Fare Swipes: " << fullFares << endl;

    cout << "Total Revenue: $" << totalRevenue << endl;


    return 0;
}
