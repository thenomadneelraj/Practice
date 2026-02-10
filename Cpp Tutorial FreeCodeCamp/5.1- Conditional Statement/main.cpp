#include <iostream>
#include <string>
// #include <unordered_map>
using namespace std;
/*

bool red, green, yellow;
cout << "Enter Red: ";
cin >> boolalpha >> red;

cout << "Enter Green: ";
cin >> boolalpha >> green;

cout << "Enter yellow: ";
cin >> boolalpha >> yellow;

if(red){
    cout << "Stop" << endl;
}
if(green){
cout << "Go" << endl;
}
if(yellow){
cout << "Slow Down" << endl;
}

*/
// Switch Case
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Elipse{60};

int main()
{
    // Method:1 Using Map
    /* unordered_map<string, int> toolMap = {
        {"Pen", Pen},
        {"Marker", Marker},
        {"Eraser", Eraser},
        {"Rectangle", Rectangle},
        {"Circle", Circle},
        {"Elipse", Elipse},
    };
    string input;
    cout << "Enter tool name: ";
    cin >> input;
    // Check if input exist in map
    if (toolMap.find(input) == toolMap.end()){
    cout << "No match found" << endl;
    return 0 ;    
    }
    int tool == toolMap[input];
    */


    string input;
    int tool = 0;
    /*
    We write: 
    int tool = 0;
    to make sure the variable is initialized with a known value before we assign something to it.
    Prevents “garbage values
    If you write:
    int tool;
    without assigning any value, then tool contains garbage (random memory value).
    So if the user types an invalid tool name (like "Brush"), and we try to use tool in a switch, it may cause unexpected behavior.

    By initializing with 0, we ensure:

    tool starts with a safe value

    if no valid tool name matches, we can detect it
     */
    //Method: 2
    cout << "Enter tool name: ";
    cin >> input;

    if (input == "Pen")
        tool = Pen;
    else if (input == "Marker")
        tool = Marker;
    else if (input == "Eraser")
        tool = Eraser;
    else if (input == "Rectangle")
        tool = Rectangle;
    else if (input == "Circle")
        tool = Circle;
    else if (input == "Elipse")
        tool = Elipse;
    else
        tool = -1;

    switch (tool)
    {
    case Pen:
    {
        cout << "Active tool is Pen" << endl;
    }
    break;

    case Marker:
    {
        cout << "Active tool is Marker" << endl;
    }
    break;

    case Eraser:
    {
        cout << "Active tool is Eraser" << endl;
    }
    break;

    case Rectangle:
    {
        cout << "Active tool is Rectangle" << endl;
    }
    break;

    case Circle:
    {
        cout << "Active tool is Circle" << endl;
    }
    break;

    case Elipse:
    {
        cout << "Active tool is Elipse" << endl;
    }
    break;

    default:
    {
        cout << "No match found" << endl;
    }
    break;
    }
    cout << "Moving on" << endl;
    return 0;
}
