/*Samson Shukuru
C++ Lab 3
Due: Auguste 30, 2022
I/O files of mean and standard deviation
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

string OutMeanStd = "c:/users/hp/onedrive - iowa central community college/documents/visual studio 2019/lab3/OutMeanStd.dat";
string inMeanStd = "c:/users/hp/onedrive - iowa central community college/documents/visual studio 2019/lab3/inMeanStd.dat";

//stores number values as integers
int a;
int b;
int c;
int d;

float meanAnswer;
float deviationAnswer;

ifstream infile;
ofstream outfile;
//function calculates the mean
void mean() 
{
	float numberofValues=4;
	float sum = 0;
	sum = a + b + c + d;
	meanAnswer = sum / numberofValues;
	
	cout << "Mean: " << meanAnswer << endl;
}
//function calculates the standard deviation
void dev()
{
	deviationAnswer=sqrt((pow((1 - meanAnswer), 2) + pow((2 - meanAnswer), 2) + pow((3 - meanAnswer), 2) + pow((4 - meanAnswer), 2)) / 4);
	cout << "Standard Deviation: " << deviationAnswer << endl;
}

//function outputs means and deviation answers to output file OutMeanStd.dat
void third()
{
	//mean function outfile
	outfile <<  "Mean: " << meanAnswer << endl;

	//dev function outfile
	outfile << "Standard Deviation: " << deviationAnswer << endl;
}

int main()
{
	//lines 56-69 are written to keyboard
	cout << "enter number values.\n";

	cout << "enter a value: ";
	cin >> a;
	cout << "enter a value: ";
	cin >> b;
	cout << "enter a value: ";
	cin >> c;
	cout << "enter a value: ";
	cin >> d;

	cout << a << " " << b << " " << c << " " << d << endl;
	mean();
	dev();

	infile.open(inMeanStd);

	if (!infile)
		{
			cout << "Can't open File" << endl;
		}

	infile >> a;
	infile >> b;
	infile >> c;
	infile >> d;

	outfile.open(OutMeanStd);
	if (!outfile)
	{
		cout << "Can't open File" << endl;

	}

	outfile << a << " " << b << " " << c << " " << d << endl;
	third();

	return 0;

}
