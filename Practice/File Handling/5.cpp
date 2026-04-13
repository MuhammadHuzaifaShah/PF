#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
ofstream evenFile, oddFile;
int num;
// Open files
fin.open("data.txt");
evenFile.open("even.txt");
oddFile.open("odd.txt");
// Check if all files opened successfully
if (!fin.fail() && !evenFile.fail() && !oddFile.fail())
{
cout << "Processing data from file...\n";
// Read data and separate even/odd numbers
while (fin >> num)
{
if (num % 2 == 0)
evenFile << num << endl;
else
oddFile << num << endl;
}
cout << "Data successfully written to even.txt and odd.txt\n";
}
else
{
cout << "Error: Unable to open file(s)!" << endl;
}
// Close all files
fin.close();
evenFile.close();
oddFile.close();
return 0;
}