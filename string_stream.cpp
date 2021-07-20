/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <sstream>
 #include <string>
 
 using namespace std;
 
 int main() {
    float length, width, area;
    string length_str, width_str;
    cout << "Enter length: ";
    getline(cin,length_str);
    stringstream(length_str) >> length;
    cout << "Enter width: "; 
    getline(cin,width_str);
    stringstream(width_str) >> width;
    area = length * width;
    cout << "Area is " << area << "\n"; 
    return 0;
 }
 