#include <iostream>
#include <vector>

using namespace std;

int main() {

    int memberSize;
    double total = 0;
    double totalBazar = 0;
    double mealsRate = 0;
    double ppmealsRate = 0;
    double takenOrGiven = 0;
    double moneyForOther = 0;
    double allMoney=0;

    cout << "How many member in your mess? "<<endl;
    cin >> memberSize;
    cout<<endl;

    string memberList[memberSize];
    cout << "Input member name: "<<endl<<endl;
    for (int i = 0; i < memberSize; i++) {
        cin >> memberList[i];
    };

    cout<<endl;
    double indMealArray[memberSize];
    cout<<"Input each member total meal"<<endl<<endl;
     for (int i = 0; i < memberSize; i++) {
        cout<<memberList[i]<<"  -------  ";
        cin >> indMealArray[i];
    }

    cout<<endl;

    cout<<"TOTAL MEAL IN WHOLE MESS : "<<endl;
    for (int i = 0; i < memberSize; i++) {
        total = total + indMealArray[i];
    }
    cout<<total<<endl;

    cout<<endl;
    double indBazarArray[memberSize];
    cout<<"Input each member bazar cost "<<endl;
     for (int i = 0; i < memberSize; i++) {
        cout<<memberList[i]<<"  -------  ";
        cin >> indBazarArray[i];
    }

    cout<<endl;
    cout<<"ADD EXTRA TK FOR OTHERS LIKE (RISE-THATS COST BEAR ALL ) IF HAVE"<<endl;
    cin>>moneyForOther;

    cout<<"TOTAL BAZAR COST IN WHOLE MESS"<<endl;
    for (int i = 0; i < memberSize; i++) {
        totalBazar = totalBazar + indBazarArray[i];
    }
    cout<<totalBazar<<endl;

    cout<<endl;

    cout<<"TOTAL BAZAR COST AND OTHERS TK"<<endl;
    allMoney = totalBazar+moneyForOther;
    cout<<allMoney<<endl;

    cout<<"CALCULATE PER MEAL RATE: "<<endl;
    mealsRate = allMoney/total;
    cout<<mealsRate<<endl;

    cout<<endl;

    cout<<"INDIVIDUAL TOTAL MEAL COST AND GIVEN OR TAKEN EXTRA MONEY: "<<endl;
    for (int i = 0; i < memberSize; i++) {
        cout<<memberList[i]<<"  -------  ";
        ppmealsRate = indMealArray[i]*mealsRate;
        takenOrGiven = indBazarArray[i]-ppmealsRate;
        cout<<ppmealsRate<< "  ";
        cout<<takenOrGiven<<endl;
    }

    return 0;
}
