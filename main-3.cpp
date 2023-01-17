
//  Project_4.1CS1250
//
//  Created by Michael Merriwether  on 10/6/20.
//
# include <iostream>
# include <cmath>
 
 
using namespace std;
 
int main()
 
 
{
    int len_1, len_2, area_1, area_2, wid1, wid2;
     
    
    cout << "Please determine which rectangle has the larger area\n";
    cout << "or if they're the same size." << endl;
    cout << "Enter the length of the first rectangle: ";
    cin >> len_1;
    cout << "Enter the width of the first rectangle: ";
    cin >> wid1;
    area_1 = (len_1*wid1)*2.0;
    cout << "The area of the first rectangle is " << area_1 << "cm." << endl;
    cout << "Enter the length of the second rectangle: ";
    cin >> len_2;
    cout << "Enter the width of the second rectangle: ";
    cin >> wid2;
    area_2 = (len_2*wid2)*2.0;
    cout << "The area of the second rectangle is " << area_2 << "cm." << endl;
    if (area_1 > area_2)
        cout << "The area of rectangle 1 is bigger than rectangle 2.";
    else if (area_1 < area_2)
    {
        cout << " The area of rectangle 2 is bigger or the same size as rectangle 1.";
    }
    else if (area_1 == area_2)
    {
        cout << "The area of both rectangles are the same.";
        
        
        
    }
    return 0;
}


