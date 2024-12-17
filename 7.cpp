#include <iostream>
#include <map>
using namespace std;

int main() {
     map<string, long long> statePopulation;

    statePopulation["Maharashtra"] = 39538223;
    statePopulation["Delhi"] = 29145505;
    statePopulation["UP"] = 21538187;
    statePopulation["MP"] = 20201249;
    statePopulation["Goa"] = 13002700;

    string state;
    cout << "Enter the name of a state: ";
    cin>>state;

    map<string, long long>::iterator it = statePopulation.find(state);

    if (it != statePopulation.end()) {
        cout << "The population of " << state << " is " << it->second << endl;
    } else {
        cout << "State not found in the database." << endl;
    }

    return 0;
}
