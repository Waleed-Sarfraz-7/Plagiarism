#include <iostream>
using namespace std;
main()
{

	cout << "Enter your name: ";
	string name;
	cin >> name;
	cout << "Enter your roll number: ";
	int roll_no;

	cin >> roll_no;

	cout << "Enter your aggregate: ";
	float aggregate;
	cin >> aggregate;

	cout << "Enter your Section: ";
	char section;
	cin >> section;

	cout << "Student Information:" << endl;
	cout << "Name: " << name << endl;
	cout << "Roll Number: " << roll_no << endl;
	cout << "Aggregate: " << aggregate << endl;
	cout << "Section: " << section;
}







#include <iostream>
using namespace std;
main()
{
    float kg;
    kg = 0.45;

    cout << "Enter weight in pounds: ";
    float inputValue;
    cin >> inputValue;
    float outputValue;
    outputValue = inputValue * kg;
    cout << inputValue << " pounds is equal to " << outputValue << " kilograms.";
}






#include <iostream>
using namespace std;
main()
{

	cout << "Enter the length of the rectangle: ";
	float length;
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	float width;
	cin >> width;
	cout << "The area of the rectangle is: ";

	float area;
	area = length * width;
	cout << area;
}







#include <iostream>
using namespace std;
main()
{

	cout << "Enter the charge (Q) in Coulombs: ";
	float charge;
	cin >> charge;
	cout << "Enter the time (t) in seconds: ";
	float time;
	cin >> time;
	cout << "The current (I) is: ";

	float current;
	current = charge / time;
	cout << current << " Amperes";
}







#include <iostream>
using namespace std;
main()
{

	cout << "Enter the student's name: ";
	string name;
	cin >> name;
	cout << "Enter matriculation marks (out of 1100): ";
	float matricMarks;
	cin >> matricMarks;
	cout << "Enter intermediate marks (out of 550): ";
	float interMarks;
	cin >> interMarks;
	cout << "Enter ECAT marks (out of 400): ";
	float ecatMarks;
	cin >> ecatMarks;
	cout << "Aggregate score for " << name << " in UET is: ";
	float agg;
	agg = (matricMarks / 1100 * 10) + (interMarks / 550 * 40) + (ecatMarks / 400 * 50);
	cout << agg << "%";
}








#include <iostream>
using namespace std;
main()
{

	float kbs;
	kbs = 1024;
	float bs;
	bs = 1024;
	float bits;
	bits = 8;
	cout << "Enter the size in megabytes (MB): ";
	float input;
	cin >> input;
	cout << input << " MB is equivalent to ";
	float output;
	output = input * kbs * bs * bits;
	cout << output << " bits.";
}








#include <iostream>
using namespace std;
main()
{
	float minutes;
	minutes = 60;
	float secs;
	secs = 60;
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << hours << " hours is equivalent to ";
	float seconds;
	seconds = hours * minutes * secs;
	cout << seconds << " seconds.";
}







#include <iostream>
using namespace std;
main()
{

	cout << "Enter voltage (in volts): ";
	float volts;
	cin >> volts;
	cout << "Enter current (in amperes): ";
	float amperes;
	cin >> amperes;
	cout << "The power is ";
	float power;
	power = volts * amperes;
	cout << power << " watts.";
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter your age in years: ";
	float years;
	cin >> years;
	cout << "Your age in days is approximately ";
	float days;
	days = years * 365;
	cout << days << " days.";
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter the name of the cricket team: ";
	string team;
	cin >> team;
	cout << "Enter the number of wins: ";
	int wins;
	cin >> wins;
	cout << "Enter the number of draws: ";
	int draws;
	cin >> draws;
	cout << "Enter the number of losses: ";
	int loses;
	cin >> loses;
	float points;
	points = (wins * 3) + (loses * 0) + (draws * 1);
	cout << team << " has obtained " << points << " points in the Asia Cup tournament.";
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter the current world population: ";
	int population;
	cin >> population;
	cout << "Enter the monthly birth rate (number of births per month): ";
	int bpm;
	cin >> bpm;
	float output;
	output = population + (bpm * 12 * 10 * 3);
	cout << "The population in three decades will be: ";
	cout << output;
}






#include <iostream>
using namespace std;
main()
{
	cout << "Enter the number of sides of the polygon: ";
	int sides;
	cin >> sides;
	int degrees;
	degrees = (sides - 2) * 180;
	cout << "The sum of internal angles of a " << sides << "-sided polygon is: ";
	cout << degrees << " degrees";
}







#include <iostream>
using namespace std;
main()
{
	cout << "Number of Minutes: ";
	int minutes;
	cin >> minutes;
	cout << "Frames per Second: ";
	int fps;
	cin >> fps;
	int totalFrames;
	totalFrames = minutes * 60 * fps;
	cout << "Total Number of Frames: " << totalFrames;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter Initial Velocity (m/s): ";
	float initialVelocity;
	cin >> initialVelocity;
	cout << "Enter Acceleration (m/s^2): ";
	float accelration;
	cin >> accelration;
	cout << "Enter Time (s): ";
	float time;
	cin >> time;
	float finalVelocity;
	finalVelocity = initialVelocity + (accelration * time);
	cout << "Final Velocity (m/s): " << finalVelocity;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter Imposter Count: ";
	float imposterCount;
	cin >> imposterCount;
	cout << "Enter Player Count: ";
	float playerCount;
	cin >> playerCount;
	float chance;
	chance = (imposterCount / playerCount) * 100;
	cout << "Chance of being an imposter: " << chance << "%";
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter the Name of the Person: ";
	string name;
	cin >> name;
	cout << "Enter the target weight loss in kilograms: ";
	float weightToBeLost;
	cin >> weightToBeLost;
	float days = weightToBeLost * 15;
	cout << name << " will need " << days << " days to lose " << weightToBeLost << " kg of weight by following the doctor's suggestions";
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter the size of the fertilizer bag in pounds: ";
	float size;
	cin >> size;
	cout << "Enter the cost of the bag: $";
	float cost;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	float area;
	cin >> area;
	float fertilizerPerPound = cost / size;
	cout << "Cost of fertilizer per pound: $" << fertilizerPerPound << endl;
	float fertilizerPerSquareFeet = cost / area;
	cout << "Cost of fertilizing per square foot: $" << fertilizerPerSquareFeet;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter the movie name: ";
	string movieName;
	cin >> movieName;
	cout << "Enter the adult ticket price: $";
	float adultTicketPrice;
	cin >> adultTicketPrice;
	cout << "Enter the child ticket price: $";
	float childTicketPrice;
	cin >> childTicketPrice;
	cout << "Enter the number of adult tickets sold: ";
	float adultTicketsSold;
	cin >> adultTicketsSold;
	cout << "Enter the number of child tickets sold: ";
	float childTicketsSold;
	cin >> childTicketsSold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	float percentageToBeDonated;
	cin >> percentageToBeDonated;
	cout << endl;
	cout << "Movie: " << movieName << endl;
	float totalMoney = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
	cout << "Total amount generated from ticket sales: $" << totalMoney << endl;
	float totalDonation = totalMoney / percentageToBeDonated;
	cout << "Donation to charity (" << percentageToBeDonated << "%): $" << totalDonation << endl;
	float remainingAmount = totalMoney - totalDonation;
	cout << "Remaining amount after donation: $" << remainingAmount;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter vegetable price per kilogram (in coins): ";
	float coinsPerVegetable;
	cin >> coinsPerVegetable;
	cout << "Enter fruit price per kilogram (in coins): ";
	float coinsPerFruit;
	cin >> coinsPerFruit;
	cout << "Enter total kilograms of vegetables: ";
	float totalVegetableWeight;
	cin >> totalVegetableWeight;
	cout << "Enter total kilograms of fruits: ";
	float totalFruitWeight;
	cin >> totalFruitWeight;
	float totalEarning = (coinsPerVegetable / 1.94) * totalVegetableWeight + (coinsPerFruit / 1.94) * totalFruitWeight;
	cout << "Total earnings in Rupees (Rps): " << totalEarning;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter a 4-digit number: ";
	int number;
	cin >> number;
	int sumOfNumbers = number / 1000 + number % 1000 / 100 + (number % 1000) % 100 / 10 + ((number % 1000) % 100) % 10;
	cout << "Sum of the individual digits: " << sumOfNumbers;
}






#include <iostream>
using namespace std;
main()
{
	cout << "Number 1: ";
	int number1;
	cin >> number1;
	cout << "Number 2: ";
	int number2;
	cin >> number2;
	cout << "Number 3: ";
	int number3;
	cin >> number3;
	cout << "Number 4: ";
	int number4;
	cin >> number4;
	cout << "Number 5: ";
	int number5;
	cin >> number5;
	cout << "Number 6: ";
	int number6;
	cin >> number6;
	cout << "Number 7: ";
	int number7;
	cin >> number7;
	cout << "Number 8: ";
	int number8;
	cin >> number8;
	cout << "Number 9: ";
	int number9;
	cin >> number9;
	cout << "Number 10: ";
	int number10;
	cin >> number10;
	cout << "Number 11: ";
	int number11;
	cin >> number11;
	cout << "Number 12: ";
	int number12;
	cin >> number12;
	cout << "Number 13: ";
	int number13;
	cin >> number13;
	cout << "Number 14: ";
	int number14;
	cin >> number14;
	cout << "Number 15: ";
	int number15;
	cin >> number15;
	float operation1 = number1 + number2 + number3 + number4 + number5;
	float operation2 = number6 * number7 * number8 * number9 * number10;
	float operation3 = number11 - number12 - number13 - number14 - number15;
	float operation5 = operation1 + operation2 - operation3;
	cout << "The final result is: " << operation5;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter the person's age: ";
	int age;
	cin >> age;
	cout << "Enter the number of times they've moved: ";
	int moves;
	cin >> moves;
	int avgYearsLived = age / (moves + 1);
	cout << "Average number of years lived in the same house: " << avgYearsLived;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Number of square meters you can paint: ";
	int sqm;
	cin >> sqm;
	cout << "Width of the single wall (in meters): ";
	int width;
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	int height;
	cin >> height;
	int areaOfWall = width * height;
	int wallsPainted = sqm / areaOfWall;
	cout << "Number of walls you can paint: " << wallsPainted;
}







#include <iostream>
using namespace std;
main()
{
	cout << "Enter 1st number: ";
	int a;
	cin >> a;
	cout << "Enter 2nd number: ";
	int b;
	cin >> b;
	a = a + b;
	cout << "Enter 3rd number: ";
	cin >> b;
	a = a + b;
	cout << "Enter 4th number: ";
	cin >> b;
	a = a + b;
	cout << "Enter 5th number: ";
	cin >> b;
	a = a + b;
	cout << "The sum of 5 numbers is: " << a;
}








#include <iostream>
using namespace std;
void fuel(float distance);
main()
{
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	fuel(distance);
}
void fuel(float distance)
{
	float fuel;
	fuel = distance * 10;
	cout << "Fuel needed: " << fuel;
}






#include <iostream>
using namespace std;
void feet(float inches);
main()
{
	float inches;
	cout << "Enter the measurement in inches: ";
	cin >> inches;
	feet(inches);
}
void feet(float inches)
{
	float feet;
	feet = inches / 12;
	cout << "Equivalent in feet: " << feet;
}








#include <iostream>
using namespace std;
void howManyStickers(int sides);
main()
{
	int sides;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> sides;
	howManyStickers(sides);
}
void howManyStickers(int sides)
{
	int stickers = sides * sides * 6;
	cout << "Number of stickers needed: " << stickers;
}







#include <iostream>
using namespace std;
void add(float n1, float n2);
void mul(float n1, float n2);
void div(float n1, float n2);
void sub(float n1, float n2);
main()
{
	float n1, n2;
	char op;
	cout << "Enter 1st number: ";
	cin >> n1;
	cout << "Enter 2nd number: ";
	cin >> n2;
	cout << "Enter an operator(+,-,*,/): ";
	cin >> op;
	if (op == '+')
	{
		add(n1, n2);
	}
	if (op == '-')
	{
		sub(n1, n2);
	}
	if (op == '*')
	{
		mul(n1, n2);
	}
	if (op == '/')
	{
		div(n1, n2);
	}
}
void add(float n1, float n2)
{
	float sum = n1 + n2;
	cout << "Addition: " << sum;
}
void sub(float n1, float n2)
{
	float subtraction = n1 - n2;
	cout << "Subtraction: " << subtraction;
}
void mul(float n1, float n2)
{
	float product = n1 * n2;
	cout << "Multiplication: " << product;
}
void div(float n1, float n2)
{
	float division = n1 / n2;
	cout << "Division: " << division;
}







#include <iostream>
using namespace std;
void eligible(int age);
main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	eligible(age);
}
void eligible(int age)
{
	if (age <= 17)
	{
		cout << "You are not eligible to vote.";
	}
	if (age > 17)
	{
		cout << "You are eligible to vote.";
	}
}







#include <iostream>
using namespace std;
void result(int marks);
main()
{
	int marks;
	cout << "Enter your score: ";
	cin >> marks;
	result(marks);
}
void result(int marks)
{
	if (marks > 50)
	{
		cout << "Pass";
	}
	if (marks <= 50)
	{
		cout << "Fail";
	}
}






#include <iostream>
using namespace std;
void even_odd(int number);
main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	even_odd(number);
}
void even_odd(int number)
{
	if (number % 2 != 0)
	{
		cout << "Number " << number << " is odd.";
	}
	if (number % 2 == 0)
	{
		cout << "Number " << number << " is even.";
	}
}







#include <iostream>
using namespace std;
void sunday(string day, int amount);
main()
{
	string day;
	int amount;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: ";
	cin >> amount;
	sunday(day, amount);
}
void sunday(string day, int amount)
{
	if (day == "Sunday")
	{
		int amount;
		int remainingAmount = amount - (amount * 0.1);
		cout << "Payable Amount: " << remainingAmount;
	}
	if (day != "Sunday")
	{
		int amount;
		cout << "Payable Amount: " << amount;
	}
}







#include <iostream>
using namespace std;
float calculateFuel(float distance);


main(){
    float distance;
    cout << "Enter the distance: ";
    cin >> distance;
    calculateFuel(distance);
}
float calculateFuel(float distance){
    float neededFuel=distance*10;
    if(neededFuel<100){
        cout << "Fuel needed: 100";
    }
     if(neededFuel>=100){
        cout << "Fuel needed: " << neededFuel;
    }
}







#include <iostream>
using namespace std;

main(){
    while (true)
    {
        cout << "Waleed Sarfraz";
    }
    
}







#include <iostream>
using namespace std;
void condition(string name);
main(){
    string name;
    cout << "Enter your name: ";
    cin>> name;
    condition(name);
}
void condition(string name){
    while(true){
        cout << name;
    }
}








#include <iostream>
using namespace std;
void sunday(string day, int amount);
main()
{
	string day;
	int amount;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: ";
	cin >> amount;
	sunday(day, amount);
}
void sunday(string day, int amount)
{
	if (day == "Sunday")
	{
		int amount;
        int deductedAmountOnSunday = amount * 0.1;
		int remainingAmountOnSunday = amount -  deductedAmountOnSunday;
		cout << "Payable Amount: " << remainingAmountOnSunday;
	}
	else
	{
		int amount;
        int deductedAmount = amount *0.05;
        int remainingAmount = amount -deductedAmount;
		cout << "Payable Amount: " << remainingAmount;
	}
}







#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
    cout << "TEST" << endl;

    gotoxy(20, 20);

    cout << "MY NAME IS Waleed Sarfraz.";
}








#include<iostream>
using namespace std;

void maze();

main()
{
    system("cls");
    maze();
}
void maze()
{
 cout << "#######################" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#######################" << endl;
}








#include <iostream>
#include <windows.h>
using namespace std;

void maze();
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
    system("cls");
    maze();
    gotoxy(5, 4);
    cout << "P";
    gotoxy(0, 10);
}
void maze()
{
    cout << "#######################" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#######################" << endl;
}








#include <iostream>
#include <windows.h>
using namespace std;

void maze();

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void move(int x, int y);

main()
{
    int x = 3, y = 4;
    system("cls");
    maze();

    while (1)
    {
        move(x, y);
        x++;
        if (x == 20)
        {
            x = 3;
        }
    }
}
void maze()
{
    cout << "#######################" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#######################" << endl;
}
void move(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
    gotoxy(x, y);
    cout << " ";
}







#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
    gotoxy(40, 15);

    cout << "Waleed Sarfraz";
}







#include <iostream>
using namespace std;

void printW();

void printa();

void printl();

void printe();
void printd();

main()
{
    printW();
    printa();
    printl();
    printe();
    printe();
    printd();
}
void printW()
{
    cout << "W" << endl;
}

void printa()
{
    cout << "a" << endl;
}

void printl()
{
    cout << "l" << endl;
}

void printe()
{
    cout << "e" << endl;
}
void printd()
{
    cout << "d" << endl;
}








#include <iostream>
#include <windows.h>
using namespace std;

void maze();

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void move(int x, int y);

main()
{
    int x = 3, y = 1;
    system("cls");
    maze();

    while (1)
    {
        move(x, y);
        y++;
        if (y == 7)
        {
            y = 1;
        }
    }
}
void maze()
{
    cout << "#######################" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#######################" << endl;
}
void move(int x, int y)
{
    gotoxy(x, y);
    cout << "Player";
    Sleep(200);
    gotoxy(x, y);
    cout << "      ";
}







#include <iostream>
#include <windows.h>
using namespace std;

void name();
void choice();
void management();
void choice1();
void choice2();
void calculateAggregate(string name1, float marksInMatric, float marksInInter, float ecatMarks);

int main()
{
    management();
    choice();
    return 0;
}

void name()
{
    system("color 04");
    cout << "University of Engineering and Technology" << endl;
    system("color 0B");
    cout << "_________________________________________________________________________________________________________" << endl;
}

void management()
{
    name();
    system("color 0A");
    int password;
    cout << "Welcome to the Uet Management system" << endl;
    system("color 0A");
    cout << "E-mail password : ";
    cin >> password;
}

void choice()
{
    system("cls");
    name();
    int choice;
    system("color 0B");
    cout << "For calculating aggregate, tap 1" << endl;
    system("color 0B");
    cout << "For comparing marks, tap 2" << endl;
    system("color 0B");
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        choice1();
    }
    else if (choice == 2)
    {
        choice2();
    }
}

void choice1()
{
    system("cls");
    name();
    system("color 0B");
    float marksInMatric, marksInInter, ecatMarks;
    string name1;
    cout << "Enter student name: ";
    cin >> name1;
    cout << "Enter matric marks: ";
    cin >> marksInMatric;
    cout << "Enter inter marks: ";
    cin >> marksInInter;
    cout << "Enter ecat marks: ";
    cin >> ecatMarks;
    calculateAggregate(name1, marksInMatric, marksInInter, ecatMarks);
}

void calculateAggregate(string name1, float marksInMatric, float marksInInter, float ecatMarks)
{
    float aggregate = (marksInMatric / 1100 * 30) + (marksInInter / 1100 * 30) + (ecatMarks / 400 * 40);
    cout << "The aggregate of " << name1 << " is: " << aggregate << endl;
}

void choice2()
{
    string nameStd1;
    int ecatMarksStd1;
    string nameStd2;
    int ecatMarksStd2;

    cout << "Enter the name of student 1: ";
    cin >> nameStd1;

    cout << "Enter the ecat marks of student 1: ";
    cin >> ecatMarksStd1;

    cout << "Enter the name of student 2: ";
    cin >> nameStd2;

    cout << "Enter the ecat marks of student 2: ";
    cin >> ecatMarksStd2;

    if (ecatMarksStd1 > ecatMarksStd2)
    {
        cout << nameStd1 << " will get the first roll number." << endl;
    }
    else if (ecatMarksStd1 < ecatMarksStd2)
    {
        cout << nameStd2 << " will get the first roll number." << endl;
    }
    else
    {
        cout << "Both students have the same ecat marks." << endl;
    }
}









#include <iostream>
using namespace std;
void tpChecker(int numberOfPeople, int numberOfRolls);
main()
{
    system("cls");
    int numberOfPeople, numberOfRolls;
    cout << "Number of people in the household: ";
    cin >> numberOfPeople;
    cout << "Number of rolls of TP: ";
    cin >> numberOfRolls;

    tpChecker(numberOfPeople, numberOfRolls);
}
void tpChecker(int numberOfPeople, int numberOfRolls)
{
    int numberOfSheets, times, days;

    numberOfSheets = numberOfRolls * 500;
    times = numberOfSheets / 57;
    days = times / numberOfSheets;

    if (days < 14)
    {
        cout << "Your TP will only last " << days << " days, buy more!";
    }
    if (days >= 14)
    {
        cout << "Your TP will last " << days << " days, no need to panic!";
    }
}







#include <iostream>
using namespace std;
void equal(int n1, int n2);
main()
{
	int n1, n2;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	IsEqual(n1, n2);
}

void IsEqual(int n1, int n2)
{
	if (n1 == n2)
	{
		cout << "true";
	}
	if (n1 != n2)
	{
		cout << "false";
	}
}







#include <iostream>
using namespace std;
void reverse(string input);
main()
{
	string input;
	cout << "Enter 'true' or 'false': ";
	cin >> input;
	reverse(input);
}

void reverse(string input)
{
	if (input == "true")
	{
		cout << "false";
	}
	if (input == "false")
	{
		cout << "true";
	}
}








#include <iostream>
using namespace std;
void discountOnTicket(string countryName, float ticketPrice);
main()
{
	string countryName;
	float ticketPrice;
	cout << "Enter the country's name: ";
	cin >> countryName;
	cout << "Enter the ticket price in dollars: $";
	cin >> ticketPrice;
	discountOnTicket(countryName, ticketPrice);
}

void discountOnTicket(string countryName, float ticketPrice)
{
	float finalPrice;
	if (countryName == "Pakistan")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.05);
	}
	if (countryName == "Ireland")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.1);
	}
	if (countryName == "India")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.2);
	}
	if (countryName == "England")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.3);
	}
	if (countryName == "Canada")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.45);
	}
	cout << "finalPrice ticket price after discountOnTicket: $" << finalPrice;
}







#include <iostream>
using namespace std;
void speeD(int speed);
main()
{
	int speed;
	cout << "Speed: ";
	cin >> speed;
	speeD(speed);
}

void speeD(int speed)
{
	if (speed <= 100)
	{
		cout << "Perfect! You're going good.";
	}
	if (speed > 100)
	{
		cout << "Halt... YOU WILL BE CHALLENGED!!!";
	}
}








#include <iostream>
using namespace std;
void bonus(int n1, int n2);
main()
{
	int n1, n2;
	cout << "Enter your position: ";
	cin >> n1;
	cout << "Enter your friend's position: ";
	cin >> n2;
	bonus(n1, n2);
}

void bonus(int n1, int n2)
{
	if (n1 + 6 >= n2)
	{
		cout << "true";
	}
	if (n1 + 6 < n2)
	{
		cout << "false";
	}
}







#include <iostream>
using namespace std;
void longestTime(int n1, int n2);
main()
{
	int n1, n2;
	cout << "Enter the number of hours: ";
	cin >> n1;
	cout << "Enter the number of minutes: ";
	cin >> n2;
	longestTime(n1, n2);
}

void longestTime(int n1, int n2)
{
	int n3 = n1 * 60;
	if (n3 > n2)
	{
		cout << n1;
	}
	if (n3 < n2)
	{
		cout << n2;
	}
}







#include <iostream>
using namespace std;
void fShop(int r, int w, int t);
main()
{
	int r1, r2, r3;
	cout << "Red Rose: ";
	cin >> r1;
	cout << "White Rose: ";
	cin >> r2;
	cout << "Tulips: ";
	cin >> r3;
	fShop(r1, r2, r3);
}

void fShop(int r, int w, int t)
{
	float originalPrice, discountedPrice;
	originalPrice = (2 * r) + (4.10 * w) + (2.50 * t);
	if (originalPrice > 200)
	{
		discountedPrice = originalPrice - (originalPrice * 0.2);
	}
	if (originalPrice <= 200)
	{
		discountedPrice = originalPrice;
	}
	cout << "originalPrice Price: $" << originalPrice << endl;
	if (originalPrice > 200)
	{
		cout << "Price after Discount: $" << discountedPrice << endl;
	}
	if (originalPrice <= 200)
	{
		cout << "No discount applied." << endl;
	}
}








#include<iostream>
using namespace std;
	void petTom(int hdays);
main(){
	int hdays;
	cout<<"Holidays: ";
	cin>>hdays;
	petTom(hdays);
	}
	
	void petTom(int hdays)
	{
	int time,difference,hs,ms;
	time=(hdays*127)+((365-hdays)*63);
	difference=30000-time;	
	hs=difference/60;
	ms=difference%60;
	if(difference>=0)
	{
	cout<<"Tom sleeps well"<<endl;
	cout<<hs<<" hours and "<<ms<<" minutes less for play";
	}	
	if(difference<0)
	{
	cout<<"Tom will run away"<<endl;
	cout<<hs*-1<<" hours and "<<ms*-1<<" minutes for play";
	}
}