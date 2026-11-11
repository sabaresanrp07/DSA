// Data structures

/*

    Arrays
      |
    Linked Lists
      |
    Stack
      |
    Queue
      |
    Hash Table
      |
    Trees
      |
    Heap
      |
    Graphs

*/


/*arrangement of collection of data iteams 
so they can use efficently for operations 

data kept in main memory , program is also in main memory

database - arranging data in some relational model in permanent storage(hard disk) 
data structures - arranging data in the main memory (RAM),large size data 

operational data - used frequently (day-to-day operations of an organization) (this data is stored and managed in operational database)

legacy data(historical data) - kept somewhere if required we use it,kept in array of desk (this is data warehouse) (huge size data which is inactive)
algorithan written for this called data mining algorithams

//static memory / dynamic memory 

segment - i our computer the larger size ram(4gb,8gb,etc) is not used as single unit it is divided into managable pieces called segments 

memory address - the location of a piece of data in RAM

RAM (the devision of memory is called segment)

┌─────────────────────┐
│       Stack         │ ← function calls, local variables (this is static memory allocation) (organized memory same like stack (lifo))
├─────────────────────┤
│       Heap          │ ← dynamic memory (new/malloc) (heap memory is unorganized)
├─────────────────────┤
│   Data Segment      │ ← global & static variables
├─────────────────────┤
│   Code/Text Segment │ ← program instructions
└─────────────────────┘

//Types of data structures

physical data structures
========================

    1. Array-(collection of contigues memory allocation (memory at one place adjacent to each other) can't modify size )
    can be inside stack / heap , when length is known 'stack' when length is unknown 'heap'

    2. Linked list-(collection of node each node contains data connected to next node)
    length of this list can increase or decrease (variable length ) always created in heap bcz this use dynamic memory


logical data structures  
=======================
(how u delete or insert data in physical data struct it is logical data stuct) disciplen of data stuct
to implement logical data struct we use either arr or linked-list

//linear (data will in linear structure )
    1.Stackc(LIFO)
    2.Queues (FIFO)    

//non linear (data will be in hierarchical structure)
    3.Trees (parent-child relationship)
    4.Graph (many-to-many relationships)
    5.Hash table (key-value pair)
 

ADT - Abstract data type (What the data structure does, not how it does it(it hides how part that is abstract))

//Time and space complexity 

    1.Time complexity - how the number of operations performed by an algorithm grows as the input size increases.
    2.Space complexity = how the amount of memory/space used by an algorithm grows as the input size increases.

//Recursion 
    there are 2 phase if resursive function
    1.calling phase (ascending)
    2.returning phase (descending)

    types of recursion(R)
    1.Tail R
        if a recusrsive fun call it self,that R call in last line of the fun is called tail R
    2.Head R
        the first line of the R fun is fun call .
    3.linear R
        the fun have only one R fun call ,just normal R call like above.
    4.Tree R
        there are more than 1 fun call in R fun.
    5.Indirect R
        function A calls function B, and function B calls function A.
    6.Nested R
        a R fun call has a parameter of R call like fun1(fun1())

*/
//________________________________________________________________________________________________________________________

// Algorithms


/*
1. Searching
   ├── Linear Search
   ├── Binary Search
   └── Ternary Search

2. Sorting
   ├── Bubble Sort
   ├── Selection Sort
   ├── Insertion Sort
   ├── Merge Sort
   ├── Quick Sort
   ├── Heap Sort
   ├── Counting Sort
   ├── Radix Sort
   └── Bucket Sort

3. Problem solving Patterns (Array/String)
   ├── Two Pointers
   ├── Sliding Window
   ├── Prefix Sum
   ├── Difference Array
   ├── Kadane's Algorithm
   └── Hashing

4. Problem solving Patterns (Linked List)
   ├── Fast & Slow Pointers
   ├── Reversal
   ├── Merge Lists
   └── Cycle Detection

5. Recursion
   ├── Basic Recursion
   ├── Divide & Conquer
   └── Backtracking

6. Stack / Queue
   ├── Monotonic Stack
   ├── Monotonic Queue
   └── BFS

7. Trees
   ├── DFS
   ├── BFS
   ├── Tree Traversals
   ├── Binary Search Tree
   ├── Heap
   └── Trie

8. Greedy
   ├── Activity Selection
   ├── Interval Problems
   ├── Fractional Knapsack
   └── Huffman Coding

9. Graphs
   ├── BFS
   ├── DFS
   ├── Topological Sort
   ├── Union-Find / DSU
   ├── Dijkstra
   ├── Bellman-Ford
   ├── Floyd-Warshall
   ├── Kruskal
   └── Prim

10. Dynamic Programming
    ├── 1D DP
    ├── 2D DP
    ├── Knapsack
    ├── Subsequence DP
    ├── Grid DP
    ├── Interval DP
    ├── Tree DP
    └── Bitmask DP

11. Advanced
    ├── Bit Manipulation
    ├── Bitmasking
    ├── Segment Tree
    ├── Fenwick Tree
    ├── Sparse Table
    ├── KMP
    ├── Rabin-Karp
    ├── Z Algorithm
    └── Advanced Graph Algorithms
*/


// O     → Upper bound (Worst case)

// Θ     → Tight bound (Exact Time or space complexity of the program) Ω(n) ≤ growth ≤ O(n)

// Ω     → Lower bound (Best case)

//________________________________________________________________________________________________________________________

#include <iostream>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <unordered_set>
#include <climits>
# include <stack>

//Tree R

// void treeRec(int n); // this is tree rec code 
// int main(){
//     int m = 3;
//     treeRec(3);

// //     return 0;
// }

// void treeRec(int n){
//     if (n>0){
//         printf("%d ",n);
//         treeRec(n-1); // more than 1 recursive fun call
//         treeRec(n-1);
//     }
// }
//________________________________________________________________________________________________________________________

//Nested R

// int x = 1;
// int nestedR(int n){
//     if (n>100){
//         x++;
//         return n - 10;
//     }
//     else{
//         x++;
//         return nestedR(nestedR(n+11));
//     }
// }


// int main(){
//     int r;
//     r = nestedR(98);
//     printf("%d\n",x);
//     printf("%d ",r);

// }
//________________________________________________________________________________________________________________________

// Sum of N natural numbers

/*see 2 ways to solve this problem by fun recursion and for loop
the best way is for loop bcz time complexity of this is O(n) and
space complexity is O(1) but for func Recursion time complx. is same 
but space complex is O(n) becz each func call need a space in stack and 
space used by the func Recursion is like stack(LIFO)  */

// i have not written code for this do later
 
//________________________________________________________________________________________________________________________

// Exponent fun using R

// int pow(int m , int n){ // see this R method run (n+1) times but there is another way
//     if (n == 0){
//         return 1;
//     }
//     return m*pow(m,n-1);
// }

// int pow(int m,int n){
//     if (n == 0){
//         return 1;
//     }
//     if (n%2 == 0){
//         return pow(m*m,n/2);
//     }
//     return m*pow(m*m,(n-1)/2);// see we have 1 m outside so (n-1) and we make m*m insted m so (n-1)/2
// }

// int main(){
//     int r = pow(2,6);
//     printf("%d",r);
// }
//________________________________________________________________________________________________________________________

// Taylor series ~ e^x (taylor series basically equivalent to exponent when n tends to infinity )

/*see return statement can only return one value at a time like take factorial for 7 factorial usually loop runs 
arount 7 time so each time return only return 1 only like 1,2,3,4,5,6 all returned in R call ,but im tylor series
we do operations like factorial , pow for each and every item for 7th item we need x^7/7! so we can do in 1 function
call bcz a function can return 1 value at a time as i said so we run 7 times for x^7 and we run 7 times for 7!,
so in this case we use static variable like we perform each task in each variable(pow,fact),static variable that 
is initialized only once and retains its value between function calls,so each R value retained and returned while
returning time of the recursion*/


// | Variable     | Recursive calls         |
// | -------------| ------------------------|
// | int x        | Each call has its own x |
// | static int x | All calls share one  x  |

// double e(int x,int n){

//     static int p=1;
//     static double f=1;

//     if (n==0){
//         return 1;
//     }

//     double r = e(x,n - 1);

//     p=p*x;
//     f=f*n;

//     return r + p/f;
// }


//Taylor series using horner's rule

// double e(int x,int n){

//     static double s = 1;

//     if (n==0){
//         return s;
//     }

//     s = 1 + x*s/n;
//     return e(x,n-1);


// }

//Taylor series using iteration

// double e(int x,int n ){

//     double s = 1;
//     double num=1,den = 1;
//     int i = 1;
    
//     for (i;i<=n;i++){
//         num*=x;
//         den*=i;

//         s+=(num/den);
//     }
    
//     return s;

// }


// int main(){

//     int x,n;
//     double r = e(3,20);
//     printf("%.10f",r); 
// }
//________________________________________________________________________________________________________________________

// Fibonacci series using iterations

// void feb(int n){
//     int x = 0;
//     int y = 1;
//     printf("%d %d ",x,y);
//     int z;

//     for (int i = 3;i<=n;i++){
//         z=x+y;
//         printf("%d ",z);
//         x=y;
//         y=z;
//     }
// }

// int main(){

//     int i;
//     printf("Enter no. of Fibonacci series: ");
//     scanf("%d", &i);
//     feb(i);

// }


// fibonacci series using Recursion (time complexity O(2^n))

// int fib(int n)
// {
//     if (n <= 1)
//         return n;

//     return fib(n - 1) + fib(n - 2);
// }

// int main(){

    
//     int n;

//     printf("Enter no. of Fibonacci terms :");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++){
//         printf("%d ", fib(i));
//     }

//     return 0;
// }


// Fibonacci serie using recursion memorization

// int fib(int n, int memo[]){

//     if (n <= 1)
//         return n;

//     if (memo[n] != 4)
//         return memo[n];

//     memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);

//     return memo[n];

// }

// int main(){

    
//     int n;

//     printf("Enter no. of Fibonacci terms :");
//     scanf("%d", &n);

//     int memo[n+1];

//     for (int i = 0; i <= n; i++){
//         memo[i] = 4;
//     }

//     for (int i = 0; i < n; i++){
//         printf("%d ", fib(i,memo));
//     }

//     return 0;
// }
//________________________________________________________________________________________________________________________

// nCr

// by recursion using fact() (time complex O(n) and space complex O(n))

// int fact(int n){

//     if (n <= 1){
//         return 1;
//     }
//     return fact(n-1)*n;
// }

// int nCr(int n, int r){

//     int num = fact(n);
//     int den = fact(n-r)*fact(r);
//     return num/den;
// }


// Using pascals table and law (nCr = n−1Cr−1 + n−1Cr ) (time complex O(2^n) and space complex O(n))

// int nCr(int n,int r){  // if we add memorization for this it will be much more faster 

//     if (n == r|| r == 0){
//         return 1;
//     }
//     return nCr(n-1,r-1) + nCr(n-1,r);
    
// }

// int main(){

//     int n,r;
//     std::cout << "Enter ur input to find factorial :";
//     std::cin >>n>>r;

//     int result = nCr(n,r);

//     printf("Ans : %d",result);
    
// }

//________________________________________________________________________________________________________________________

// Bubble Sort (sort an array by comparing nearby value)

// int main(){

//     int n;
//     std::cout << "Enter the space of array u want to create :";
//     std::cin>>n;

//     int arr[n];
//     std::cout << "Enter the elements :";
//     for (int i = 0;i<n;i++){
//         std::cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {

//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0;i<n;i++){
//         std::cout << arr[i] << " ";
//     }

// }


//_________________________________________________________________________________________________________________________
// Selection sort  (What's the smallest element in the remaining array? Put it here)

// int main(){

//     int n;
//     std::cout << "Enter the space of array u want to create :";
//     std::cin>>n;

//     int arr[n];
//     std::cout << "Enter the elements :";
//     for (int i = 0;i<n;i++){
//         std::cin >> arr[i];
//     }

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


//     for (int i = 0;i<n;i++){ 
//         std::cout << arr[i]<<" ";
//     }

// }
 
//_________________________________________________________________________________________________________________________
// Insertion sorting (Take the next element and insert it into the correct position in the already-sorted portion)

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

// Tower of hanoi

// using namespace std;

// void TOH(int n, int A, int B, int C) { // n = no:of disk , A = source , B = help tower , c = destination

//     if (n > 0) {

//         // Move n-1 smaller disks from A to B use c as helping tower
//         TOH(n - 1, A, C, B);

//         // Move the largest disk from A to C 
//         cout << "Move d" << n << " from " << A << " to " << C << endl;

//         // Move n-1 smaller disks from B to C use a as helping tower
//         TOH(n - 1, B, A, C);


//     }
// }

// int main() {

//     int n;

//     cout << "Enter number of disks: ";
//     cin >> n;

//     TOH(n, 1, 2, 3);

//     return 0;
// }

//________________________________________________________________________________________________________________________

// Different parameters and their behaviour 

using namespace std;

void change1(int arr[]) { 
    arr[0] = 100;
}

void change2(int *arr) {
    arr[1] = 200;
}

// int arr[] , int *arr (both are treated)

// int main() {

//     int arr[3] = {10, 20, 30};

//     change1(arr);
//     change2(arr);

//     cout << arr[0] << " ";
//     cout << arr[1] << " ";
//     cout << arr[2];

//     return 0;
// }

//________________________________________________________________________________________________________________________

// Array (increasing size of an array p) see even the ide increase the that will do in this method 

// int main()
// {
//     int *p, *q;
//     int i;

//     // Allocate memory for 5 integers
//     p = (int *)malloc(5 * sizeof(int));
//     p[0] = 3;
//     p[1] = 5;
//     p[2] = 7;
//     p[3] = 9;
//     p[4] = 11;

//     // Allocate memory for 10 integers
//     q = (int *)malloc(10 * sizeof(int));

//     // Copy values from p to q
//     for(i = 0; i < 5; i++)
//         q[i] = p[i];

//     free(p);        // Free the original memory of p
//     p = q;          // Now p points to the same memory as q
//     q = NULL;       // q no longer points to anything

//     // Print the values using p
//     for(i = 0; i < 5; i++)
//         printf("%d\n", p[i]);

//     free(p);        // Free the remaining memory (good practice)
//     return 0;
// }

//________________________________________________________________________________________________________________________

// 2D array 

/*(during memory allocation it will be in linear no in rows and cols)
   there are 2 ways to make a 2d arr linear one by row major or by col major
   like in c/cpp we use row major where we take each row from 2d and kepp it one after another 
   whereas in col vice versa ,2d->linear bcz to access address of each and every element
   this is done in compiler  
   
   */


// int main(){


    /* method 1
        a[no:of row][no:of col] this method is not at all dynamic */

    // int x,y;

    // std::cout << "Enter no:of row for your matrix :";
    // std::cin >>x;

    // std::cout << "Enter no:of col for your matrix :";
    // std::cin >>y;

    // int a[x][y];





    /*method 2
     this method helps to create partial dynamic array like rows are fixes col is dynamic*/

    // int *A[3];// A is an array of 3 pointers (created on stack)
    //        ^ This part is fixed

    // A[0] = new int[4];// Each pointer points to a separate 1D array of 4 elements
    // A[1] = new int[4];
    // A[2] = new int[4];

    // A[1][2] = 15;// Normal 2D access works



    /*method 3
     this method helps to create fully dynamic 2D array*/ 

    // int **A;// A is a pointer to pointer

    // int x,y;

    // std::cout << "Enter no:of row for your matrix :";
    // std::cin >>x;

    // std::cout << "Enter no:of col for your matrix :";
    // std::cin >>y;

    // A = new int*[x];// First create array of 3 pointers (on heap)

    // A[0] = new int[y];// Then each pointer points to a row
    // A[1] = new int[y];// use malloc in C
    // A[2] = new int[y];

    // // Filling using loops
    // for(int i=0; i<x; i++){
    //     for(int j=0; j<y; j++){
    //         std::cout << "enter element of row "<<i+1<<" column "<<j+1<<" :";
    //         std::cin >> A[i][j];
    //     }
    // }

    // // printing
    // for(int i=0; i<x; i++){
    //     for(int j=0; j<y; j++){
    //         std::cout << A[i][j]<<" ";
    //     }
    //     std::cout <<'\n';
    // }

// }

//________________________________________________________________________________________________________________________

// printing location of each element in an array

// int main(){

//     int arr[] = {1,2,3,4};

//     for (int i = 0;i<4;i++){
//         std::cout << &arr[i] <<" "; // u can see each location have 4 num diff bcz size of int is 4 array conatains int
//     }

// }

//________________________________________________________________________________________________________________________

// Accessing address of an 2D array

// using namespace std;

// int main() {

//     int x[3][4] = {
//         {10, 20, 30, 40},
//         {50, 60, 70, 80},
//         {90, 100, 110, 120}
//     };

//     cout << x <<" "<<**x<< endl;
//     //      ^ref     ^de-referencing 
//     cout << *(x+2)<<" "<<*(*(x+2)) << endl;
//     cout << (x+2)<<" "<<**(x+2) << endl;
//     cout << *(x+2)+2<<" "<<*(*(x+2)+2) << endl;

//     return 0;
// }

//________________________________________________________________________________________________________________________

// Array ADT(absract data type)

/*What operations we can perform on data,
  without worrying about how those operations are
 implemented internally.
*/

// struct Array
// {
//     int* A;
//     int size;
//     int length;
// };

// void Display(struct Array arr)
// {
//     int i;

//     for(i = 0; i < arr.length; i++)
//         printf("%d ", arr.A[i]);
// }

// void Append(struct Array *arr, int x)
// {
//     if(arr->length < arr->size)
//         arr->A[arr->length++] = x;
// }

// void Insert(struct Array *arr, int index, int x)
// {
//     int i;

//     if(index >= 0 && index <= arr->length)
//     {
//         for(i = arr->length; i > index; i--)
//             arr->A[i] = arr->A[i - 1];

//         arr->A[index] = x;
//         arr->length++;
//     }
// }

// int main()
// {
//     int l,s;

//     std::cout << "Enter lenght of your array :";
//     std::cin >> s;

//     std::cout << "Enter no:of element you want add in your arr :";
//     std::cin >> l;

//     int* arr = new int[s];

//     struct Array arr1 = {arr, s,    l};
//     //                    A^  ^size ^length  

//     /* these append,insert,display,delete etc are abstract data type of array(hide internally implementation)
//      but here we'r implementing means we write code behined abt of array */

//     std::cout << "Enter elements of ur arr :";
//     for (int i = 0;i<l;i++){
//         std::cin>>arr1.A[i];
//     }

//     int e;
//     std::cout << "Enter an element to append :";
//     std::cin >> e;
//     Append(&arr1, e); 

//     int e1,i;
//     std::cout << "Enter an element to insert and it's position :";
//     std::cin >> e1 >> i;
//     Insert(&arr1,i,e1);

//     Display(arr1);

//     return 0;

// }

//________________________________________________________________________________________________________________________

// improvement of linear search 

// struct Array {
//     int* A;
//     int size;
//     int length;
// };

// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int linearsearch(struct Array *arr, int target) {
//     for (int i = 0; i < arr->length; i++) {
//         if (target == arr->A[i]) {
//             swap(&arr->A[i], &arr->A[i - 1]);
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int l, s;

//     std::cout << "Enter size of your array: ";
//     std::cin >> s;

//     std::cout << "Enter number of elements: ";
//     std::cin >> l;

//     if (l > s) {
//         std::cout << "Length cannot be greater than size.";
//         return 0;
//     }

//     int* arr = new int[s];
//     struct Array arr1 = {arr, s, l};

//     std::cout << "Enter elements: ";
//     for (int i = 0; i < l; i++)
//         std::cin >> arr1.A[i];

//     int t;
//     std::cout << "Enter element to search: ";
//     std::cin >> t;

//     int r = linearsearch(&arr1, t);

//     if (r == -1)
//         std::cout << "We can't find the target value";
//     else
//         std::cout << "Your target is at index " << r;

//     delete[] arr;
//     return 0;
// }

//________________________________________________________________________________________________________________________

// Binary search (time complex O(log(n)))

//binary search by iteration
// int binarySearch(int arr[],int n, int t){

//     int l, h,mid;
//     l = 0;
//     h = n-1;  

//     while (l<=h){

//         mid = (l+h)/2;

//         if (t == arr[mid]){
//             return mid;
//         }
//         else if (t > arr[mid]){
//             l = mid+1;
//         }
//         else{
//             h = mid-1;
//         }
//     }
//     return -1;
// }


//binary search by recursion
// int binarySearch(int arr[],int l,int h,int t){

//     int mid;

//     while (l<=h){

//         mid = (l+h)/2;

//         if (t == arr[mid]){
//             return mid;
//         }
//         else if (t > arr[mid]){
//             return binarySearch(arr,mid+1,h,t);
//         }
//         else{
//             return binarySearch(arr,l,mid-1,t);
//         }
//     }
//     return -1;
// }

// int main(){

//     int n;
//     std::cout << "Enter space of ur array :";
//     std::cin>>n;

//     int* arr = new int[n];

//     std::cout << "Enter elements: ";

//     for (int i = 0; i < n; i++){
//         std::cin >> arr[i];
//     }

//     int target;
//     std::cout << "Enter the element to find :";
//     std::cin >>target;

//     int r = binarySearch(arr,0,n-1,target);
    
//     if (r == -1){
//         std::cout << "We can't find the target value";
//     }else{
//         std::cout << "Your target is at index " << r;
//     }

// }

//________________________________________________________________________________________________________________________

// reversing arr
     /* this works basically like a pointer so when u use pointer arr u can't have its size by sizeof,
     and there is another way for reversing by creating new array and coping the element in reverse order
     like new_arr[i] = arr[n-i] , and changing the original array arr[i] = new_arr[i]
    */

// void reverseArr(int arr[],int n){

//     int i=0,j=n-1,temp;

//     while(i<j){
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;

//         i++;
//         j--;
//     }

// }

// int main(){

//     int n;
//     std::cout << "Enter size of ur array :";
//     std::cin >> n;

//     int arr[n];

//     std::cout << "Enter elements of ur arr :";
//     for (int i = 0;i < n;i++){
//         std::cin>>arr[i];
//     }

//     reverseArr(arr,n);

//     for (int i = 0;i < n;i++){
//         std::cout << " "<<arr[i]<<" ";
//     }

// }

//________________________________________________________________________________________________________________________

// rotaion

// void rotateArray(int arr[],int n){

//     int k,i=0;

//     while (i<n){
        
//         k = arr[0];

//         for(int j = 0;j<n-1;j++){
//             arr[j]=arr[j+1];
//         }

//         arr[n-1] = k;

//         std::this_thread::sleep_for(std::chrono::seconds(2));

//         for (int i = 0;i < n;i++){
//             std::cout << " "<<arr[i]<<" ";
//         }

//         std::cout << "\r";

//         i++;
//     }

// }

// int main(){

//     int n;
//     std::cout << "Enter size of ur array :";
//     std::cin >> n;

//     int arr[n];

//     std::cout << "Enter elements of ur arr :";
//     for (int i = 0;i < n;i++){
//         std::cin>>arr[i];
//     }

//     rotateArray(arr,n);
// }

//________________________________________________________________________________________________________________________

// Algoritham to check a array is sorted 


// int ifsorted(int arr[],int n){

//     for (int i = 0;i<n-1;i++){
//         if (arr[i] > arr[i+1]){
//             return -1;
//         }
//     }

//     return 0;

// }

// //insert sort

// int insertSort(int arr[],int n){

//     int r = ifsorted(arr,n);



//     if (r == -1){
//         return r;
//     }
//     else{

//         int key;
//         std::cout << "Enter a num to insert in the arr :";
//         std::cin >> key;

//         int i = n;

//         while (arr[i-1]>key && i >0){
//             arr[i] = arr[i-1];
//             i--;
//         }
           
//         arr[i] = key;
//    }

//    return 0;
// }


// int main(){

//     int n;
//     std::cout << "Enter size of ur array :";
//     std::cin >> n;

//     int arr[100];

//     std::cout << "Enter elements of ur arr :";
//     for (int i = 0;i < n;i++){
//         std::cin>>arr[i];
//     }

//     int r = insertSort(arr,n);

//     if (r == -1){
//         std::cout << "Please give sorted array";
//     }
//     else{

//         for (int i = 0;i <n+1;i++){
//             std::cout << " "<<arr[i]<<" ";
//         }
//     }
// }

//________________________________________________________________________________________________________________________

// Merging 2 sorted array

// time complexity(O(n1+n2) space complexity(n1+n2)) code done by me before studing algo
// void MergeSortedArray(int arr1[],int arr2[],int n1,int n2){

    // int arr3[n1+n2];
    // int x = 0,y = 0;
    // for (int i = 0;i<n1+n2;i++){
    //     if (x<n1 && y<n2){
    //         if (arr1[x] <= arr2[y]){
    //             arr3[i] = arr1[x];
    //             x++;
    //         }
    //         else{
    //             arr3[i] = arr2[y];
    //             y++;               
    //         }
    //     }
    //     else{
    //         if (n1>x){
    //             arr3[i] = arr1[x];
    //             x++;
    //         }
    //         else{
    //             arr3[i] = arr2[y];
    //             y++;
    //         }
    //     }
    // }

    // for (int i = 0;i <n1+n2;i++){
    //     std::cout << " "<<arr3[i]<<" ";
    // }


    // Another better way to solve this 
    
    // int i=0,j=0,k=0;
    // int arr3[n1+n2];

    // while (i<n1 && j <n2){
    //     if(arr1[i]<arr2[i]){
    //         arr3[k++] = arr1[i++];
    //     }
    //     else{
    //         arr3[k++] = arr1[j++];
    //     }
    // }

    // for (; i < n1; i++) {
    //     arr3[k++] = arr1[i];
    // }

    // for (;j<n2;j++){
    //     arr3[k++] = arr2[j];
    // }

    // for (int i = 0;i <n1+n2;i++){
    //     std::cout << " "<<arr3[i]<<" ";
    // }

// }

// int main(){

//     int arr1[100] = {2,9,11,45,98};
//     int arr2[100] = {23,27,34,69};

//     int n1 = 5 , n2 = 4;

//     MergeSortedArray(arr1,arr2,n1,n2);  

// }

//________________________________________________________________________________________________________________________


// Set operations (union , intersection , difference) 

/*
    for union of sorted array we have mergeSortedArray and for unsorted array it's very simple just add arr2 in arr1
    or add arr1 and arr2 in arr3, for intersection

*/ 

//union of unsorted arrays we need to use unordered_set if sorted array we compare nearby elements and the 2 arrays  

// using namespace std;

// void CheckDup(int arr[],int* z,int n){

//     while (*z<n && arr[*z] == arr[*z - 1])
//         (*z)++;

// }

// void Remaining(int arr3[],int arr[],int* z,int* k,int n){

//     while (*z < n) {

//         arr3[(*k)++] = arr[(*z)++];

//         CheckDup(arr,z,n);
//     }

// }
// void Union(int arr1[], int arr2[], int n1, int n2) {
//     // here many time we have reused while to check duplicate so we can make as a fun to reuse better

//     int arr3[n1 + n2];
//     int i = 0, j = 0, k = 0;

//     while (i < n1 && j < n2) {

//         if (arr1[i] < arr2[j]) {

//             arr3[k++] = arr1[i++];

//             CheckDup(arr1,&i,n1);

//         }
//         else if (arr2[j] < arr1[i]) {

//             arr3[k++] = arr2[j++];

//             CheckDup(arr2,&j,n2);
//         }

//         else {

//             // Same value → add only once
//             arr3[k++] = arr1[i++];

//             j++;

//             CheckDup(arr1,&i,n1);

//             CheckDup(arr2,&j,n2);
//         }
//     }

//     // Remaining arr1
//     Remaining(arr3,arr1,&i,&k,n1);

//     // Remaining arr2
//     Remaining(arr3,arr2,&j,&k,n2);

//     // Print only valid elements
//     for (int x = 0; x < k; x++) {
//         cout << arr3[x] << " ";
//     }
// }

// int main(){


//     // even we can make this complete input code as a function and resuse in all of our code but i just keep like this
//     int n1,n2;

//     cout<<"Enter size of arr1 :";
//     cin >> n1;

//     cout<<"Enter size of arr2 :";
//     cin >> n2;

//     int arr1[n1];
//     int arr2[n2];

//     cout << "Enter elements of arr1 :";
//     for (int i = 0;i<n1;i++){
//         cin >>arr1[i];
//     }

//     cout << "Enter elements of arr2 :";
//     for (int j = 0;j<n2;j++){
//         cin >>arr2[j];
//     }

//     Union(arr1,arr2,n1,n2);
// }


//________________________________________________________________________________________________________________________

// Finding min and max at same time

// int main(){

//     int arr[100];

//     int n;
//     std::cout << "Enter size of ur array :";
//     std::cin >>n;

//     std::cout << "Enter the elements :";
//     for (int i =0 ;i<n;i++){
//         std::cin >> arr[i];
//     }

//     int min = arr[0],max = arr[0];

//     for (int i =1 ;i<n;i++){
//         if (arr[i] >= max){
//             max = arr[i];
//         }else{
//             min = arr[i];
//         }
//     }
    
//     std::cout << "MAX -> "<<max << std::endl;
//     std::cout << "MIN -> "<<min << std::endl;

// }

//________________________________________________________________________________________________________________________

// Strings

// int main(){

    // ASCII values

    // printf("%d\n",'A');
    // printf("%c",65);


    // char and string

    // char a[10] = {'a','b','c','d'};
    // printf("%s\n",a); // only array of char allow to print an array

    // char name[10] = {'s','a','b','a','r','e','\0'};
    // printf("%s\n",name);

    //

// }

//________________________________________________________________________________________________________________________

// linked list 

//first/head  a pointer in stack point to a node in heap where a node contain a value and pointer to another node

// ┌─────────────┬─────────────────┐
// │    value    │ pointer (next)  │
// └─────────────┴─────────────────┘

// linked list are not contiguous

// ListNode* next
//    ↑       ↑
//   type    pointer variable (pointer is Node type)

//linked list can be of any datatype 

//  ___________________
// |                   |
// |struct ListNode {  |
// |    int val;       |   // 4 bytes 
// |    ListNode* next;|   // pointer takes 8 bytes
// |};                 |
// |___________________|

// struct Node *p;  }
//                  }   both are same   
// Node *p;         }

// we use struct because a linked-list node needs to hold multiple pieces of related information together
// we can also use class instead of struct 

/* this is a 'Self-referential structures' self-referential structure is a structure that contains a
 pointer that can point to another object of the same structure type.
*/

// using namespace std;

// class Node {

// public:
//     int data;
//     Node* next;

// };


// // Creating Linked List
// Node* Create_LL(){

//     int n;
//     cout<<"Enter no:of elements :";
//     cin>>n;

//     int A[n];
//     cout<<"Enter elements :";
//     for (int i =0;i<n;i++){
//         cin>>A[i];
//     }

//     // Create first node
//     Node* head = new Node;

//     Node* temp;
//     Node* last;

//     head->data = A[0];
//     head->next = nullptr;

//     last = head;

//     // Create remaining nodes
//     for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++) {

//         temp = new Node;

//         temp->data = A[i];
//         temp->next = nullptr;

//         last->next = temp;
//         last = temp;
//     }

//     return head;
// }



// // Displaying Linked List 
// void Display(Node *p){

//     // Display linked list val without address

//     // Node* p = head;
//     // while (p != nullptr) {
//     //     cout << p->data << " -> ";
//     //     p = p->next;
//     // }
//     // cout << "NULL";


//     // display the val with address

//     if (p!=NULL){
//         printf("|%d|%p|\n",p->data,p);
//         printf("       |        \n");
//         printf("       V        \n");
//         Display(p->next);
//     }
//     else{
//         printf("       NULL        \n");
//     }
// }


// // Count (Size) also we can count while sum but Sum is a method i can't do it eveytime(logically)
// int Count(Node *p){

//     int count = 0;

//     while(p!= nullptr){
//         count++;
//         p = p->next;
//     }

//     return count;
// }



// // Sum of all the elements 
// int Sum(Node* p){

//     int sum = 0;
//     while(p!=nullptr){
//         sum+=p->data;
//         p = p->next;
//     }

//     return sum;
// }


// // MAX
// int Max_num(Node* p){

    
//     int n = Count(p);
//     int max = p->data;
    
//     for (int i = 1;i<n;i++){
//         p = p->next;
//         if (p->data > max){
//             max = p->data;
//         }
//     }

//     return max;
// }


// // Second max
// int Sec_max(Node* p){

//     int sec_max = INT_MIN;
//     int maxx = Max_num(p);

//     int n = Count(p);

//     for (int i = 0;i<n;i++){
//         if (p->data < maxx && p->data > sec_max){
//             sec_max = p->data;
//         }
//         p = p->next;
//     }


//     return sec_max;
// }


// // Min 
// int Min_num(Node* p){

//     int min = p->data;
//     int n = Count(p);

//     for (int i =1;i<n;i++){
//         p=p->next;
//         if(p->data <min){
//             min = p->data;
//         }
//     }

//     return min;

// }


// // Search element in LL (linaer search)
// int Search(Node* p){

//     int Target;
//     cout<<"Enter a element to find :";
//     cin>>Target;

//     int n = Count(p);

//     // linear search

//     for (int i = 0;i<n;i++){
//         if (p->data == Target){
//             return i;
//         }

//         p = p->next;
//     }

//     return -1;

// }

// // Improvement in linear search

// // Move to Head
// // Transposition


// // Insertion in LL
// void Insert_ele(Node* p){

//     int i,e;
//     cout << "Enter element  to insert :";
//     cin>>e;
//     cout << "Enter index :";
//     cin>>i;

//     if (i > 0 && i >Count(p)){
//         cout << "Invalid index";
//         return;       
//     }

//     Node* dummy = new Node;
//     dummy->data = 0;
//     dummy->next = p;

//     p = dummy;

//     Node* t = new Node;
//     t->data = e;
//     t->next = nullptr;


//     for (int j =0;j<i;j++){
//         p = p->next;
//     }

//     t->next = p->next;// see p->next doesn't mean p = p->next 
//     p->next = t;    // p and p->next are two different things

//     Display(dummy->next);
// }


// // Insert in sorted LL

// void InsertSort(Node *p){

//     int e;
//     cout << "Enter element  to insert :";
//     cin>>e;

//     Node* dummy = new Node;
//     dummy->data = INT_MIN;
//     dummy->next = p;

//     p = dummy;

//     Node* t = new Node;
//     t->data = e;
//     t->next = nullptr;


//     while(p->next != nullptr && p->next->data <e){
//         p = p->next;
//     }

//     t->next = p->next;
//     p->next= t; 

//     Display(dummy->next);
    
// }


// // Deleting element from LL

// void Delete_ele(Node *p){

//     int e;
//     cout << "Which element you want to delete :";
//     cin >> e;

//     Node *t = new Node;
//     t->data = 0;
//     t->next = p;
//     p = t;

//     while (1){
//         if (p->next == nullptr){
//             cout << "404! element is not found";
//             return;
//         }
//         if (p->next->data != e){
//             p=p->next;
//         }
//         else{
//             p->next = p->next->next;
//             Display(t->next);
//             printf("Element Deleted successfully \n");
//             return;
//         }
//     }    
// }

// int Check_sorted(Node *p){

//     int Sorted = 1;

//     while(Sorted && p->next != nullptr){
//         if(p->data < p->next->data){
//             p = p->next;
//         }
//         else{
//             cout<<"please enter sorted elements\n";
            
//             return 0;
//         }
//     }

//     cout<< "This is a Sorted LL!\n";
//     return 1;

// }


// void Remove_dup(Node *p){

//     unordered_set<int> seen; // Using set for set operator like find

//     Node* q = p;
//     Node* prev = nullptr;

//     while (q != nullptr)
//     {
//         if (seen.find(q->data) != seen.end()) // if element is not found find() return seen.end()
//         {
//             // duplicate found
//             prev->next = q->next;
//             delete q;
//             q = prev->next;
//         }
//         else
//         {
//             seen.insert(q->data);
//             prev = q;
//             q = q->next;
//         }
//     }

//     Display(p);
// }



// // Reversing Linked List
// void Reverse(Node *p){

//     Node* q = nullptr;
//     Node* r = nullptr;

//     while (p != nullptr)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }

//     Display(q);

    
// }


// // Concatentation of LL 
// void Concat(Node *p){

//     Node *r = p;

//     cout<<"\nEnter info of ur second LL\n";
//     Node *q = Create_LL();

//     while(p->next != nullptr){
//         p = p->next;
//     }

//     p->next = q;

//     Display(r);


// }


// // Merge Linked List
// void Merge(Node *p){

//     if(!Check_sorted(p)){
//         return;
//     }

//     Node *r = p;

//     cout<<"\nEnter info of ur second LL\n";
//     Node *q = Create_LL();

//     if (!Check_sorted(q)){
//         return;
//     }


//     int i = Count(p),j = Count(q),x=0,y=0;

//     while(x<i && y<j){

//         if (p->next==nullptr){
//             break;
//         }

//         if(p->data<q->data  && p->next->data > q->data){

//             Node *temp = new Node;
//             temp->data = q->data;

//             temp->next = p->next;

//             p->next = temp;
//             p=p->next->next;
//             q = q->next;
//             y++;
//             x++;
//         }
//         else if (p->data>q->data){
//             Node *temp = new Node;
//             temp->data = p->data; 
//             temp->next = p->next;
//             p->data = q->data;
//             p->next = temp;

//             p=p->next;
//             q=q->next;
//             y++;
//             x++;
//         }
//         else{
//             p = p->next;
//             x++;

//         }
//     }

//     if (y<j){
//         p->next = q;
//     }


//     Display(r);

// }


// int main(){

//     Node* head = Create_LL();

//     Display(head);
    
//     cout <<"Size of your linked list :"<<Count(head)<<endl;
    
//     cout<<"Sum of all elements is :"<<Sum(head)<<endl;
    
//     cout<<"Max num is :"<<Max_num(head)<<endl;
    
//     cout << "Second Max is :"<<Sec_max(head)<<endl;
    
//     cout <<"Min value is :"<<Min_num(head);
    
//     cout << Search(head);
    
//     Insert_ele(head);
    
//     InsertSort(head);

//     Delete_ele(head);

//     Check_sorted(head);

//     Remove_dup(head);

//     Reverse(head);

//     Concat(head); // Concatenation is just adding the second LL to first no need to check order

//     Merge(head);

// }

//________________________________________________________________________________________________________________________

// Double pointer **Node

// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// void insertBeginning(Node** head, int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->next = *head;
//     *head = newNode;
// }

// void insertEnd(Node** head, int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->next = nullptr;

//     if (*head == nullptr) {
//         *head = newNode;
//         return;
//     }

//     Node* temp = *head;
//     while (temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// void deleteBeginning(Node** head) {

//     if (*head == nullptr)
//         return;

//     Node* temp = *head;

//     *head = (*head)->next;

//     delete temp;
// }

// void deleteEnd(Node** head)
// {
//     Node* temp = *head;

//     if (*head == nullptr)
//         return;

//     if ((*head)->next == nullptr)
//     {
//         delete *head;
//         *head = nullptr;
//         return;
//     }

//     while (temp->next->next != nullptr)
//         temp = temp->next;

//     delete temp->next;
//     temp->next = nullptr;
// }

// void display(Node* head) {

//     Node* temp = head;

//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

// int main() {

//     Node* head = nullptr;

//     insertEnd(&head, 10);
//     insertEnd(&head, 20);
//     insertEnd(&head, 30);

//     insertBeginning(&head, 5);

//     display(head);

//     deleteBeginning(&head);

//     deleteEnd(&head);

//     display(head);

// }


//________________________________________________________________________________________________________________________

// Node* head;                              
// head          → address of first Node
// *head         → first Node
// head->data    → data of first Node
// head->next    → address of second Node


// Node** p = &head;
// p             → address of head
// *p            → head
// **p           → first Node
// (*p)->data    → data of first Node
// (*p)->next    → second Node's address

// Node*& p = head  
// here p is alice of head(means another name of head)
// when u do p = p->next this will change head also (head = head->next) 
// it's like same person with different name

// Node* p = head
// here p is completly separate new node which is pointing to the node where head is pointing 


//________________________________________________________________________________________________________________________

// ! IMPORTANT:
// In array-based Stack and Queue, pop() and dequeue()
// do not physically delete elements from the array.
// They only update the index (top/front).
// The old values remain in memory until overwritten.

//________________________________________________________________________________________________________________________

// Stack (FILO)

//________________________________________________________________________________________________________________________


// stack using Array


// class Stack{
// private:
//     int size;
//     int top;
//     int* S; // S is pointer to int 

// public:
//     Stack(int size); // constructor 
//     ~Stack(); // destructor

//     void push(int x);
//     int pop();
//     int peek(int index);
//     int isFull();
//     int isEmpty();
//     void display();
//     int stackTop();

// };
 
// // Defining the functions that belong to Stack class

// Stack::Stack(int size) { // '::' is called the scope resolution operator
//     // Stack::Stack -> means that the Stack function that belongs to the Stack class

//     this->size = size;
//     top = -1;
//     S = new int[size]; // this is array of int created in heap memory 

// }
 
// Stack::~Stack() { // distructor runs when main() completes 
//     delete[] S;
// }
 
// void Stack::push(int x) {
//     if (isFull()){
//         cout << "Stack Overflow!" << endl;
//     } else {
//         top++;
//         S[top] = x;
//     }
// }
 
// int Stack::pop() {
//     int x;
//     if (isEmpty()){
//         cout << "Stack Underflow!" << endl;
//     } else {
//         x = S[top];
//         top--;
//     }
//     return x;
// }
 
// int Stack::peek(int pos) {
//     int x = -1;
//     if (top-pos+1 < 0 || top-pos+1 == size){
//         cout << "Invalid position!" << endl;
//     } else {
//         x = S[top-pos+1];
//     }
//     return x;
// }
 
// int Stack::isFull() {
//     if (top == size-1){
//         return 1;
//     }
//     return 0;
// }
 
// int Stack::isEmpty() {
//     if (top == -1){
//         return 1;
//     }
//     return 0;
// }
 
// void Stack::display() {
//     for (int i=top; i>=0; i--){
//         cout << S[i] << " | " << flush;
//     }
//     cout << endl;
// }
 
// int Stack::stackTop() {
//     if (isEmpty()){
//         return -1;
//     }
//     return S[top];
// }
 
 
// int main(){
 
//     int A[] = {1, 3, 5, 7, 9};
 
//     Stack stk(sizeof(A)/sizeof(A[0]));
 
//     // Populate stack with array elements
//     for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
//         stk.push(A[i]);
//     }
//     stk.push(11);
 
//     cout << "Stack full: " << stk.isFull() << endl;
 
//     // Display stack;
//     cout << "Stack: " << flush;
//     stk.display();
 
//     // Peek
//     cout << "Peek at 0th: " << stk.peek(0) << endl;
//     cout << "Peek at 3rd: " << stk.peek(3) << endl;
//     cout << "Peek at 10th: " << stk.peek(10) << endl;
 
//     // Top element
//     cout << "Top element: " << stk.stackTop() << endl;
 
//     // Pop out elements from stack
//     cout << "Popped out elements: " << flush;
//     for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
//         cout << stk.pop() << ", " << flush;
//     }
//     cout << endl;
//     stk.pop();
 
//     cout << "Stack empty: " << stk.isEmpty() << endl;
 
//     return 0;

// } // stack is destroyed HERE as ~Stack(distructor runs when cursor reaches here )

//________________________________________________________________________________________________________________________

//  Stack using linked list 

// class Node{
// public:
//     int data;
//     Node* next;
// };
 

// class Stack{
// private:
//     Node* top;
// public:
//     Stack();
//     ~Stack();
//     void push(int x);
//     int pop();
//     int peek(int index);
//     int isEmpty();
//     int isFull();
//     int stackTop();
// };

 
// Stack::Stack() {
//     top = nullptr;
// }

 
// Stack::~Stack() {
//     Node* p = top;
//     while (top){
//         top = top->next;
//         delete p;
//         p = top;
//     }
// }
 

// void Stack::push(int x) {
//     Node* t = new Node;
//     if (t == nullptr){
//         cout << "Stack Overflow!" << endl;
//     } else {
//         t->data = x;
//         t->next = top;
//         top = t;
//     }
// }

 
// int Stack::pop() {
//     Node* p;
//     int x = -1;
//     if (top == nullptr){
//         cout << "Stack Underflow!" << endl;
//     } else {
//         p = top;
//         x = p->data;
//         top = top->next;
//         delete p;
//     }
//     return x;
// }
 
// int Stack::isFull() {
//     Node* t = new Node;
//     int r = t ? 1 : 0;
//     delete t;
//     return r;
// }
 
// int Stack::isEmpty() {
//     return top ? 0 : 1;
// }
 
// int Stack::stackTop() {
//     if (top){
//         return top->data;
//     }
//     return -1;
// }
 
// int Stack::peek(int index) {
//     if (isEmpty()){
//         return -1;
//     } else {
//         Node* p = top;
 
//         for (int i=0; p != nullptr && i<index-1; i++){
//             p = p->next;
//         }
 
//         if (p != nullptr){
//             return p->data;
//         } else {
//             return -1;
//         }
//     }
// }
 
// int main() {
 
//     int A[] = {1, 3, 5, 7, 9};
 
//     Stack stk;
 
//     // Populate stack
//     for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
//         stk.push(A[i]);
//     }
 
//     cout << "Stack peek at 3rd: " << stk.peek(3) << endl;
//     cout << "Stack peek at 10th: " << stk.peek(10) << endl;
//     cout << "Stack top: " << stk.stackTop() << endl;
//     cout << "Stack full: " << stk.isFull() << endl;
//     cout << "Stack empty: " << stk.isEmpty() << endl;
 
//     // Pop out elements from stack
//     cout << "Popped: " << flush;
//     for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
//         cout << stk.pop() << ", " << flush;
//     }
//     cout << endl;
 
//     // Underflow
//     cout << stk.pop() << endl;
 
//     return 0;
// }

//________________________________________________________________________________________________________________________

// Queue (FIFO)

//________________________________________________________________________________________________________________________


struct Queue{

    int size;
    int front;
    int rear;
    int *Q;
    
};


void create(struct Queue *q,int size){

    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}


void enqueue(struct Queue *q,int x){ //push

    if(q->rear==q->size-1){
        printf("Queue is Full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }

}

int dequeue(struct Queue *q){ //pop

    int x=-1;
    if(q->front==q->rear){
        printf("Queue is Empty\n");
    }else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    
    for(int i =  q.front+1;i<=q.rear;i++)
    printf("%d ",q.Q[i]);
    printf("\n");
}

int main(){

    struct Queue q;
    create(&q,5);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    Display(q);

    printf("%d ",dequeue(&q));
    return 0;
}


// Circular queue

class CircularQueue{
private:
    int size;
    int front;
    int rear;
    int* Q;
public:
    CircularQueue(int size);
    ~CircularQueue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};
 
CircularQueue::CircularQueue(int size) {
    this->size = size;
    front = 0;
    rear = 0;
    Q = new int [size];
}
 
CircularQueue::~CircularQueue() {
    delete [] Q;
}
 
bool CircularQueue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}
 
bool CircularQueue::isFull() {
    if ((rear + 1) % size == front){
        return true;
    }
    return false;
}
 
void CircularQueue::enqueue(int x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear = (rear + 1) % size;
        Q[rear] = x;
    }
}
 
int CircularQueue::dequeue() {
    int x = -1;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front = (front + 1) % size;
        x = Q[front];
    }
    return x;
}
 
void CircularQueue::display() {
    int i = front + 1;
    do {
        cout << Q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}
 
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    CircularQueue cq(sizeof(A)/sizeof(A[0]) + 1);
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.enqueue(A[i]);
    }
 
    // Display
    cq.display();
    cout << endl;
 
    // Overflow
    cq.enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.dequeue();
    }
 
    // Underflow
    cq.dequeue();
 
    return 0;
}

//________________________________________________________________________________________________________________________
























