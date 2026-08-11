#include <iostream> 
#include <array> 
#include <string> 
using namespace std;

int main () {
    // App 1 => Even / Odd Checker
  //  int num;
  // cout << " Enter your Number " << endl;
  // cin >> num;
    
  //  if (num % 2 ==0) {
 //       cout << " The Number Is Even "  << endl;
 //  } else {
  //      cout << " The Number Is Odd "  << endl;
  //  }
 // App 2 => Find Greatest Number 

 // int x,y,z;
 // cout << " Enter your Number " << endl;
 // cin >> x;
 // cin >> y;
 // cin >> z;

 // if ( x > y && x > z) {
 //   cout <<  x << " Is The Greatest Number " << endl;
 // } else if (y > z) {
 //   cout << y << " Is The Greatest Number " << endl;
 // } else {
 //   cout << z << " Is The Greatest Number " << endl;
 // }
 // App 3 => User Rank Checker 

 //int points;
 // cout << " Enter your points " << endl;
 // cin >> points;

 //if (  points > 0 && points <= 500  ) {
 //   cout << " Bad  " << endl;
 //} else if ( points > 500 && points <= 1000 ) {
 //   cout << " Very Good " << endl;
 //} else {
 //   cout << " you are VIP Bro  " << endl;
 //} 
 // App 4 => Simple Calculator 

 // int num_one, num_two, op;
 // cout << " Enter num_one" << endl;
 //cin >> num_one;
 //cout << " Enter num_two" << endl;
 //cin >> num_two;
 //cout <<" Choose Operations " << endl;
 //cout << "[1] + " << endl;
 //cout << "[2] - " << endl;
 //cout << "[3] * " << endl;
 //cout << "[4] / " << endl;
 //cin >> op;

 //if ( op == 1) {
 // cout << num_one + num_two << endl;
 //} else if ( op == 2) {
 // cout <<  num_one - num_two  << endl;
 //} else if ( op == 3) {
 // cout <<  num_one * num_two  << endl;
 //} else if ( op == 4) {
 // cout <<  num_one / num_two  << endl;
 //} else {
 // cout << " Operation Is Not Valid " << endl;
 //}

 //int day;
 //cout << " Choose A Days From 1 To 25 " << endl;
 //cin >> day;

 //if ( day == 1) {
 // cout << " Open From 08:00 To 14:00 " << endl;
 //} else if ( day == 2) {
 // cout << " Open From 08:00 To 14:00 " << endl;
 //} else if ( day == 3) {
 // cout <<" Open From 15:00 To 20 " << endl;
 //} else {
  //  cout << " closed " << endl;
 // }

  //switch (day) {
 // case 1:
  //case 2:
 // cout << "Open From 08:00 To 14:00 " << endl;
 // break;
 // case 3:
 // cout << "Open From 10:00 To 20:00 " << endl;
 // break;
 // default: 
 //    cout << " closed " << endl;
 //}

  // Switch Training //
  // App 1 => Award System Application

 // int num;
 // cout << "Type The Number" << endl;
 //cin >> num;

 //switch (num) {
 // case 100:
 //cout <<" Congraulations , You can take sumsung phone " << endl;
 // break;
 // case 200:
 //cout << " Congraulations , You can take Lenovo Laptop " << endl;
 // break;
 // case 400:
 //cout << " Congraulations ,You can take TV " << endl;
 // break;
 //default:
 // cout << " Sorry , Your number is not correct  " << endl;
 
 //}

 // App 2 => Discount App
 //int price = 100;
 //int discount = 10;
 //int years;

 //cout <<" Type The Number Of Years in Company " << endl;
 //cin >> years;

 //switch (years) {
  //case 1:
 //discount = 20;
 // break;
 // case 2:
 //discount = 40;
 // break;
 // case 3:
 //discount = 60;
 // break;

 //}
 // cout << " The Price Is " << price - discount << endl;
 
 // App 3 Simple Calculator 

  //int n1 , n2 , op;
 
 //cout << " Enter n1 " << endl;
 //cin >> n1;
 //cout << " Enter n2 " << endl;
 //cin >> n2;
 //cout <<" Choose Operations " << endl;
 //cout << "[1] + " << endl;
 //cout << "[2] - " << endl;
 //cout << "[3] * " << endl;
 //cout << "[4] / " << endl;
 //cin >> op;

 //switch (op) {
 // case 1:
 // cout <<  n1 << " + " <<  n2  << " = " << n1 + n2 << endl;
 //break;
 //case 2:
 // cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
 //break;
 //case 3:
 // cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
 // break;
 //case 4:
 // cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
 //break;
 //default:
 // cout << " Operation Is Not Valid " << endl;
 //}


 //int nums[]{100, 300, 600, 900};
 //string awards[]{"iPhone", "iPad", "PC", "Car"};

    // cout << " / Number " << num[0] << "Award Is " << awards[0] << "\"" << endl;
   // cout << " / Number " << num[1] << "Award Is " << awards[1] << "\"" << endl;
    // cout << " / Number " << num[2] << "Award Is " << awards[2] << "\"" << endl;
   // cout << " / Number " << num[3] << "Award Is " << awards[3] << "\"" << endl;
   //     
   // 

    


 // Output Needed
 //"Number 100 Award Is: iPhone"
 //"Number 300 Award Is: iPad"
 // "Number 600 Award Is: PC"
 //"Number 900 Award Is: Car"
 // int prices [4] = {100, 200, 300, 400};
 // cout << " The Price: " << prices [0] << endl;
 // cout << " The Price: " << prices [1] << endl;
   //cout << " The Price: " << prices [2] << endl;
 //  cout << " The Price: " << prices [3] << endl;

 //int scores [] = {95 ,90 ,85};
 //cout << " The Score " << scores[0] << endl;
 //cout << " The Score " << scores[1] << endl;
 //cout << " The Score " << scores[2] << endl;
 //cout << " Address 1: "<< &scores[0] << endl;
 //cout << " Array Address: " << scores << endl;

 //int scores [] = {100 , 200 ,400};
 //cout << " The Score: " << scores[0] << endl;
 ///cout << " The Score: " << scores[1] << endl;
 //cout << " The Score: " << scores[2] << endl;
 //cout << " Address 1: "<< &scores[0] << endl;
 //cout << " Array Address: " << scores << endl;
 //cout << " The Score: " << scores [2] << endl;
 //cout << " ASCII of A is: " <<(int) 'A' << endl;
 //cout << 'A' + 5;
 //cout << (char)('d' + 10);
 // lesson 41 
 //const int rows =2;
 //const int columns =2;
 //int grades [rows][columns] = {
 // {85 , 95} ,
 // {70 , 90}
 //};
 //cout << grades[0][1] << endl;
 //cout << grades[1][0] + grades[0][0] <<endl;
 //lesson 42
 // array < double , 3> mynumbers = {4.5 , 3.8 ,4.9};
 // cout << mynumbers[1] << endl;
  //cout << mynumbers.size() << endl;
  //Lesson 43
  //array < string ,3 > numas ={"Duha" ,"Jana" ,"Malak"};
  //cout << numas.front() << endl;
  // numas.fill("c++"); 
 // cout << numas.front() << endl;
 // Linking Lessons 41,42 and 43 Together
 //const int rows =2;
 //const int columns = 2;
 //int studentGrades[rows][columns] ={
 // {80 , 90} ,
 // {75 , 85}
 //};
 //array <string , 2> studentNames = {"Duha" ,"Jana"};
 //cout << studentNames.front() << " Total:"<< studentGrades[0][0] + studentGrades[0][1] << endl;
 //cout << studentNames.back() << " Total:"<< studentGrades[1][0] + studentGrades[1][1] << endl;
 //studentNames.fill("Top Student");
 //cout << studentNames.front() << endl;
  //int vals[] = {10, 20, 30};

 // Write Your Code Here
 //vals[0] = 100;
 // vals[1] = 200;
 // vals[2] = 300;

 //cout << vals[0] << "\n"; // 100
 //cout << vals[1] << "\n"; // 200
 //cout << vals[2] << "\n"; // 300

 // Lesson 44 => Array Traning , Gusse THE Number Game 
 //int numbers[4] ={5 ,10 ,15 ,20};
 // int numberGusse;
 //cout << " Enter Your Number " << endl;
 //cin >> numberGusse;
 // if (numberGusse == numbers[0] || numberGusse == numbers[1] || numberGusse == numbers[2] || numberGusse == numbers[3]) {
 //   cout << " Brillient , You Gusse Right " << endl;
 // } else {
 //   cout << " My bad , Try again " << endl;
 // }

  // Do Not Edit The Next 3 Lines
 // int index = 1;
 // array<int, 3> oldNums = {10, 20, 30};
  //array<int, 3> newNums;

  // Write Your Code Here
 // newNums[index - index] =oldNums[index + index]; // newNums[0] = newNums[2] -> 30
 // newNums[index]         =oldNums[index];         // newNums[1] = newNums[1] -> 20
 //   newNums[index + index] =oldNums[index - index]; // newNums[2] = newNums[0] -> 10

  // Do Not Edit The Next 3 Lines
 // cout << newNums[0] << "\n"; // 30
 // cout << newNums[1] << "\n"; // 20
 // cout << newNums[2] << "\n"; // 10

 // Lesson 45 => What Is String?
 //string coursName = "C++ Programming Language";
 //cout << coursName[0] << endl;
 //cout << coursName.front() << endl;
 //cout << coursName.back() << endl;
 //cout << coursName.length() << endl;

 // Do Not Edit The Next 6 Lines
 //int nums[] = {1, 2, 3, 5};
 //int vals[] = {10, 20, 40, 30, 10, 60};
 //int i1 = nums[3];
 //int i2 = nums[0];
 //int i3 = nums[1];
 //int i4 = nums[2];

 // Need To Get Ouput 150
 // You Can Use Plus Operator Only

 // Your Code Here
 //cout << vals[i1] + vals[i3] + vals[i2] + vals[i4] << endl;

 // Lesson 46 => Concatenating Strings
 // Way 1
 //string fname = "Hello";
 // string lname  = "World";

 //string fullName= fname + " " + lname;
 //cout << fullName << endl;
  // "Hello World"
  
  // Way 2
 // string first_Name = "Duha";
  //string last_Name = " Ahmed ";
  //cout << first_Name.append(last_Name) << endl;

 //string fName = "Elzero ";
 //string mName = "Web ";
 //string lName = "School";

 // Way 1
 //string fullName= fName + mName + " " + lName;
 //cout << fullName << endl;
 // Way 2
 //cout << fName.append(mName).append(lName) << endl;
 // Way 3
 // cout << fName << mName << lName << endl;


 // Output Needed
 //Elzero Web School
 //Elzero Web School
 //Elzero Web School
 // I combined lesson 44, 45 and 46 into one task
 //int indices[] = {0 ,3 ,4};
 //string part1 = "C++";
 //string part2 = "is ";
 //string part3 = "Awesome!";
 
 //string fullText = part1 + part2 + part3;
 //cout << fullText.length() << endl;
 
 //cout << fullText[indices[0]] << endl;
 //cout << fullText[indices[1]] << endl;
 //cout << fullText[indices[2]] << endl;

  //int number =5;
  // lesson 47 
 // cout << "=== Multiplication Table of 5 ===" << endl;

 //   for (int i = 1; i <= 10; i++) {
 //     cout << " number " << " x " << i << " = " << (number * i) << endl;
 //   }
 // lesson 48 & 49 
 //int nums[] = {100, 200, 300, 400, 500, 600};
 //int numsSize = sizeof(nums) / sizeof(nums[0]);
 //for (int i = 5; i > 0; i--) {
 //   cout << nums[i] << endl;
 //}
    




  





 





 

 return 0;








}
