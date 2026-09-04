#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
#include <string>
#include <cmath>

// int main(){
//     std::cout << "hello world" << std::endl; // endl is end line (like newline)
//     std::cout << "cpp" << "\n"; // another way
//     // std is namespace (namespace means a named container for names(count,endl) in code ), so std is namespace of cpp

// }

// using namespace std; // this line tell when compiler see an unqualified name , look inside std
// // dis advantage of using namespace if u name any of ur function which is inside std namespace that cause name conflict like if u name ur function vector that is also in std namespace 

// int main(){

//     cout << "Hello world"; // now compiler automatically take cout as name inside std namespace 

// }

//________________________________________________________________________________________________________________________

// Data types

// int main(){

    // // integer (whole number) age,year
    // int x; // declaration
    // x = 5; // assignment 

    // // double price,cgpa,temperature
    // double x = 10.99;
    
    // // char (single character) grade,initial
    // char x = 'a';

    // // boolean (true or false)
    // bool x = false;

    // // string (multiple char) name,day,address
    // std::string x = "hi"; // str is not a built-in dtype
    
    // std::cout << x << "\n";

// Some String Functions


    // std::string num;
    // std::cout << "Enter your ph_no +91 ";
    // std::getline(std::cin,num);

    // if(num.length() > 10){
    //     std::cout << "please check you number";
    // }
    // else if (num.empty()){
    //     std::cout << "You can't leave empty";
    // }
    // else{
    //     std::cout << "Thanks for the information";
    // }

    // std::string name;
    // std::cout << "Enter your name :";
    // std::getline(std::cin, name);

    // name.insert(name.find(" "),"_");    
    // name.append("@01GP");
    // std::cout << "Your username is " << name;
    
// }

//________________________________________________________________________________________________________________________

// Creating namespace (when i create a namespace i can use more same variables means prevent name conflicts )

// namespace a{
//     int x = 1; // if x is used under a namespace 1
// }

// namespace b{
//     int x = 2;
// }

// typedef gives alias(another name ) for existing data

// typedef std::string txt; // or using txt = std::string;
// int main(){

//     int x = 0;
//     txt a = "hello";

//     std::cout << x << '\n';
//     std::cout << a::x << '\n';
//     std::cout << b::x << '\n';

// }

//________________________________________________________________________________________________________________________

// User input

// using txt = std::string;

// int main(){

//     txt name;

//     std::cout << "Enter your full name :";
//     std::getline(std::cin >> std:: ws, name); 
//     // std:: ws remove white space left in terminal for eg when u use cin it leave /n getline will take that too 

//     std::cout << "Welcome" << name );
    
// }

//________________________________________________________________________________________________________________________

// If Else

// int main(){

//     int age;
//     std::cout << "Enter your age";
//     std::cin >> age;

//     if (age >= 18){
//         std::cout << "Enjoy the show";
//     }

//     else if(age <= 0){
//         std::cout << "Please give valid credentials";
//     }

//     else{
//         std::cout << "Sorry!!";
//     }

// }


// Switch 

// int main(){

//     char alp;
//     std::cout << "Enter alphabet: ";
//     std::cin >> alp;

//     switch(alp){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u': // cpp alows multiple switch case 
//             std::cout << "Vowels";
//             break;
//         default:
//             std::cout << "Not a vowel";
//     }

// }

//________________________________________________________________________________________________________________________

// ternary operator

// int main(){
    
//     int mark;
//     std::cout << "Enter your mark >";
//     std::cin >> mark;

//     mark >= 40 ? std::cout << "Congragulations!! You pass" : std::cout << "Sorry!! you have failed";  
    
// }

//________________________________________________________________________________________________________________________

// While loop & do while

// int main(){

    // std::string name;

    // while(name.empty()){
    //     std::cout << "Enter your name";
    //     std::getline(std::cin,name);
    // }

    // std::cout << "Hi" << name;

    // int age;

    // do{  // do runs onces doesn't matter abt condition
    //     std::cout << "Enter valid age";
    //     std::cin >> age;
    // }while (age <= 0);

// }

//________________________________________________________________________________________________________________________

// For loop

// int main(){

//     for (int i = 10;i>=1;i--){
//         std::cout << i << '\n';
//         std::this_thread::sleep_for(std::chrono::seconds(1));
//     }

//     std::cout << "HAPPy NEw YEAr";

// }

//________________________________________________________________________________________________________________________

// Random num generation 

// using namespace std;

// int main(){

    // srand(time(NULL)); // seed random (this set starting point(seed) for rand)
    
    /* if srand is const then rand give same number all time
       so we use time where it changes for every sec
    */

    // cout << rand() << endl; 

    /* rand generate num (without srand rand generate same num)
    rand generate pseudo num (not really random there is a mathematical logic which generate num)
    */

// Dice roll

    // srand(time(NULL));
    // int num = rand()%6 + 1;

    // std::cout << num;

// }

//________________________________________________________________________________________________________________________

// User defined function

// void Addition(int a ,int b){

//         std::cout << a << '+' << b <<"="<<a+b;

// }

// int main(){

//     int a,b;
//     std::cout << "Enter 2 number for addition :";
//     std::cin >> a >>b;

//     Addition(a,b);

// }

//________________________________________________________________________________________________________________________

// Class & Structs 

/* (both class and structs are same in c,
    cpp but the key diff in class members are private by default ,
    struct public by default )
*/

// class Car {

// public:

//     // Data members 

//     //    /*(no instance memory for data members,
//     //       memoery will be create for data members when object is created,
//     //       untill that it jsut dicribe object)*/

//     std::string brand, model, type;
//     int man_year, price,func;


//     // Member functions


//     void start() {
//         std::cout << "Car has been started" << std::endl;
//     }

//     void run() {
//         std::cout << "Car started running" << std::endl;
//     }

//     void stop() {
//         std::cout << "Car has stopped" << std::endl;
//     }

//     void Car_details() {
//         std::cout << "Car brand: " << brand << std::endl;
//         std::cout << "Car model: " << model << std::endl;
//         std::cout << "Car type: " << type << std::endl;
//         std::cout << "Car price: " << price << std::endl;
//         std::cout << "Year of manufacturing: " << man_year << std::endl;
//     }
// };

// int main(){

//     Car c1;

//     std::cout << "Enter car's brand :";
//     std::cin >> c1.brand;

//     std::cout << "Enter car's model :";
//     std::cin >> c1.model;

//     std::cout << "Enter car's type :";
//     std::cin >> c1.type;

//     std::cout << "Enter car's manufacturing year :";
//     std::cin >> c1.man_year;

//     std::cout << "Enter car's price :";
//     std::cin >> c1.price;  

//     std::cout << "Enter car's funtutionality (start(1),run(2),stop(3)) :";
//     std::cin >> c1.func;  

//     std::cout << "Here your car's details!"<<std::endl;
//     c1.Car_details();

//     switch (c1.func){
//         case 1:c1.start();
//         break;
//         case 2:c1.run();
//         break;
//         case 3:c1.stop();
//         break;
//     }

// }


// Structs 

// struct cards {

//     int col,shape,no;

// private:
//     void card_no(){

//         if (no == 1){
//             std::cout<< "ace";
//         }
//         else if (no > 1 && no<=10){
//             std::cout<< no;
//         }
//         else if (no == 11){
//             std::cout << "Joker";
//         }
//         else if (no == 12){
//             std::cout << "king";
//         }
//         else if (no == 13){
//             std::cout << "Queen";
//         }
//     }
    
//     void card_shape(){
//         if (shape == 0){
//             std::cout << "spade ";
//         }
//         else if (shape == 1){
//             std::cout<< "clubs ";
//         }
//         else if (shape == 2){
//             std::cout << "heart ";
//         }
//         else if (shape == 3){
//             std::cout << "dimond ";
//         }
//     }

//     void card_col(){

//         if (col == 0){
//             std::cout << "black ";
//         }
//         else if (col == 1){
//             std::cout << "red ";
//         }
//     }

// public:
//     void card_def(){
//         card_col();
//         card_shape();
//         card_no();
//     }
// };


// int main(){

//     struct cards c1;

//     std::cout << "Card color black(0) red(1) :";
//     std::cin >> c1.col;

//     std::cout << "Card shape spade(0) clubs(1) heart(2) diamond(3) :";
//     std::cin >> c1.shape;

//     std::cout << "Card no 1-13 :";
//     std::cin >> c1.no;

//     c1.card_def();

// }

//_________________________________________________________________________________________________________________________

// class (Constructors and destructors)

// class Rectangle {

//     private:

//     int length;
//     int breadth;

//     public:

//     // These are constructor
//     Rectangle(){length = breadth = 1;} // this is default constructor
    

//     // this is parameterized constructor

//     // Rectangle (int l,int b){  // declared and defined inside
//     //     length = l;
//     //     breadth = b;
//     // }

//     //   OR

//     Rectangle(int l,int b); // declared inside defined outside 



//     //Actual method
//     int area(){
//         return length*breadth;
//     }
//     int perimeter(){
//         return 2*(length + breadth);
//     }


//     // mutator functions (setter) change the data
//     void setleagth(int l){
//         length = l;
//     }
//     void setbreadth(int b){
//         breadth = b;
//     }


//     //accessor function (getter) read/retuen data
//     int getlength(){
//         return length;
//     }
//     int getbreadth(){
//         return breadth;
//     }

//     /* A class should be a complete thing even if we don't use some in this program we need to write 
//         like u may need only area fun or peri but still we writter mutator and accessor fun
//     */


//     // Destructor (used to deaclocate dynamic memory and destruct object)
//     ~Rectangle() { // once main fun end then onject is destructed 
//         std::cout << "Object is destroyed"; 
//     }
    
// };

// Rectangle::Rectangle(int length,int breadth){
//     this->length = length;
//     this->breadth = breadth; 
// }


// int main(){

//     int l,b;

//     std::cout<< "Enter length :";
//     std::cin >> l;

//     std::cout<< "Enter breadth :";
//     std::cin >> b;

//     Rectangle r1(l,b); //r1 is object

//     std::cout<<"Area "<< r1.area() << std::endl;
//     std::cout<<"Perimeter "<<r1.perimeter()<< std::endl;

//     return 0;
// }

//_________________________________________________________________________________________________________________________

// Template class (generic class) same class can be used for diff data types

// template<class T> // this is only for this class 
// class Arithmatic {

// private:
//     T a;
//     T b;

// public:
//     Arithmatic(T a,T b);
//     T add();
//     T sub();
//     T mul();
//     float div();
//     float rnd();

// };

// template<class T>
// Arithmatic<T>::Arithmatic(T a,T b){
//     this->a = a;
//     this->b = b;
// }

// template<class T>
// T Arithmatic<T>::add(){
//     T c;
//     c = a+b;
//     return c;
// }

// template<class T>
// T Arithmatic<T>::sub(){
//     T c;
//     c = a-b;
//     return c;
// }

// template<class T>
// T Arithmatic<T>::mul(){
//     T c;
//     c = a*b;
//     return c;
// }

// template<class T>
// float Arithmatic<T>::div(){
//     float c;
//     c = a/b;
//     return c;
// }

// template<class T>
// float Arithmatic<T>::rnd(){
//     float c;
//     c = std::round(a*std::pow(10,b))/std::pow(10,b);
//     return c;
// }


// template<class T>
// void calc(){
//     T a,b;
//     int c;
//     std::cout << "Add-1\nSub-2\nMul-3\nDiv-4\nRound-5\nEnter a num for arithmatic operation :";
//     std::cin >>c;

//     std::cout << "Enter 2 num :";
//     std::cin>>a >> b;
//     Arithmatic<T> ar(a,b);

//     switch(c){
//         case 1:std::cout << "Ans " << ar.add()<<std::endl;
//         break;
//         case 2:std::cout << "Ans " << ar.sub()<<std::endl;
//         break;
//         case 3:std::cout << "Ans " << ar.mul()<<std::endl;
//         break;
//         case 4:std::cout << "Ans " << ar.div()<<std::endl;
//         break;
//         case 5:std::cout << "Ans " << ar.rnd()<<std::endl;
//         break;
//         default:std::cout << "Please enter valid num" << std::endl;
//         break;
//     }
// }

// int main(){

//     calc<double>();
//     /* see here u should give a data type it can be anything doesn't matter 
//     later in calc the data type will be based on user entered num bcz
//     C++ templates work at compile time, not runtime means T is decided 
//     when the compiler is building your program*/

//     return 0;
// }

//_________________________________________________________________________________________________________________________

// from here some dsa concepts starts
// Deleting an element from array

// int main(){

//     int n;
//     std::cout << "Enter the space of array u want to create :";
//     std::cin>>n;

//     int arr[n];
//     std::cout << "Enter the elements :";
//     for (int i = 0;i<n;i++){
//         std::cin >> arr[i];
//     }

//     int pos;
//     std::cout << "Enter position to delete an element from your array :";
//     std::cin >> pos;

//     if (pos <= 0 || pos > n){
//         std::cout << "Please provide valid credentials :";
//         return 0;
//     }
//     else{
//         for (int j = pos-1;j<n-1;j++){
//             arr[j] = arr[j+1];
//         }
//     }

//     std::cout<<"final array :";
//     for (int k = 0;k<n-1;k++){
//         std::cout<<arr[k]<<" ";
//     }

// }

// time complexity = O(n)
// space complexity = O(n)

//_________________________________________________________________________________________________________________________

// Remove duplicate and sort 

// int main(){

//     int n;
//     std::cout << "Enter the space of array u want to create :";
//     std::cin>>n;

//     int arr[n];
//     std::cout << "Enter the elements :";
//     for (int i = 0;i<n;i++){
//         std::cin >> arr[i];
//     }

//     // Bubble Sort (sort an array by comparing nearby value first highest value get sorted)
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {

//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     int arr2[n] = {0};
    
//     arr2[0] = arr[0];
//     int arr2_index = 1;

//     for (int j = 1;j<n;j++){
//         if (arr[j-1] != arr[j]){
//             arr2[arr2_index] = arr[j];
//             arr2_index++;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (arr2[i] != 0){
//             std::cout << arr2[i] << " ";
//         }
//     }

// }

//_________________________________________________________________________________________________________________________

// Insertion sorting

// int main(){

//     int n;
//     std::cout << "Enter the space of array u want to create :";
//     std::cin>>n;

//     int arr[n];
//     std::cout << "Enter the elements :";
//     for (int i = 0;i<n;i++){
//         std::cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }

//     for (int i = 0;i<n;i++){
//         std::cout << arr[i] << " ";
//     }

// }
//_________________________________________________________________________________________________________________________

// Selection sort 

// void Sort(int* arr,int n){

//     int temp;
//     int s;

//     for (int i = 0; i < n - 1; i++){
//         s = i;
    
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[s])
//             {
//                 s = j;
//             }
//         }

//         temp = arr[i];
//         arr[i] = arr[s];
//         arr[s] = temp;
//     }
// }

// int main(){
//     int n;
//     std::cout <<"Enter the size of your array :";
//     std::cin >> n;

//     int arr[n];
//     std::cout << "Enter the elements of your array :";

//     for (int i = 0;i<n;i++){
//         std::cin >> arr[i];
//     }

//     Sort(arr,n);

//     for (int i = 0;i<n;i++){ // we are accessing the array using pointers so original arr change if we sort using Sort() 
//         std::cout << arr[i]<<" ";
//     }
// }
 
//_________________________________________________________________________________________________________________________
















