#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct location
{
    string name;
    string description;
    vector<int> door;
};

struct 
{
    int currentLocation;
} Player;



vector<location>map;
string userInput;


int main()
{
    map.push_back({ "Forest", "Deep dark place", {1,2} });
    map.push_back({ "Desert", "Wery hot place", {0,2} });
    map.push_back({ "Ocean", "Greate place for fishing", {1,0} });

    
    while (true)
    {
        cout << "You are in the: " << map[Player.currentLocation].name << endl;
        for (int i = 0; i < map[Player.currentLocation].door.size();i++) {
            cout << "Location where you can go: " << map[map[Player.currentLocation].door[i]].name << endl;


        }
        cin >> userInput;

        bool correctLocation = false;
        for (int i = 0; i < map.size(); i++)
        {
            if (userInput == map[i].name)
            {
                Player.currentLocation = i;
                cout << "Your location is: " << map[Player.currentLocation].name << ":" << map[Player.currentLocation].description << endl;
                correctLocation = true;
            }
            
        }
        if (correctLocation == false)
        {
            cout << "Try Again" << endl;
        }
    }
 }
