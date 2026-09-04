#include <stdio.h> //'#(preprocessor)' command header file <stdio.h> Standard Input Output header
#include <stdbool.h>
#include <string.h>//contain all string operations
#include <math.h>
#include <stdlib.h>

//Entery point without this can't run the code
// 'int' is return type   
int main() {

    // printf stands for "print formatted"
    // printf("Hello, world!\n");
    // printf("nice to code!\n");
    
 /* 
    this is a multiline comment
 */

//________________________________________________________________________________________________________________________

//Variables and data type

    /*
    actually computer works in binary 
    any fraction like 3/4,5/16 like base is a binary
    value(2^n) it will have finate floating value
    */

    // int num = 100;
    // printf("dhoni hit %d",num);//'%' this is formate specifier

    // float a = 0.1;
    // float b = 0.2;
    // float c = 0.5;

    // printf("value of 0.1 is %.15f\n",a);
    // printf("value of 0.2 is %.15f\n",b);
    // //0.1 0.2 values or like never ending in binar (not in maths)

    // printf("value of 0.5 is %.15f\n",c); 
    // //will be finet value (1/2 = 0.5 *binary denominator)


    // float  x = 0.1f + 0.2f;//f means float
    // double y = 0.1  + 0.2;//f is not used then double
    
    // printf("float  x = %.20f\n", x);
    // printf("double y = %.20lf\n", y);

    
    // float d =0.25;
    // printf("%.20f ",c+d);

    // float x = 1e38; // range of float is ±10³⁸.7(in decimal till 7 accuret value)
    // printf("%f\n", x);

    // double y = 1e39;// range of double is ±10³⁰⁸.16(same till 16)
    // printf("%f\n", y);
    
    // char a[] = "hello";//[] array to store more than one value
    // char b = '!';   // '  ' for single character only
    // printf("%s nigga%c\n",a,b);

    // bool a = true;
    // if (a){
    //     printf("if runs successfull ? %d\n",a);
    // }
    // else{
    //     printf("if runs successfully ? %d\n",a);
    // };

//________________________________________________________________________________________________________________________

//Formate specifier(%)
    
    // int num = 68;
    // int num1 = -10;
    // float num3 = -0.1;
    // printf("my roll_no is %5d\n",num);//%5 will fix width to 5 
    // printf("next roll_no is %05d\n",num+1);//width 5 space filled 0
    // printf("%+d %+03.2f",num1,num3);//'%+d' will return value with sign


//________________________________________________________________________________________________________________________

//Arithmatic operations

    // int a = 2;
    // float b = 3;
    // float c =0;

    // c=a/b; // for div c should be float either a or b
    // printf("%.2f\n",c);

    // int d = 2;
    // int e = 10;
    // printf("%d\n",e/d);
//________________________________________________________________________________________________________________________

//User Input

    // int age;
    // char name[40];
    // int ph_no;

    // printf("Enter your name: ");
    // scanf("%s",&name);
    // printf("Enter your age: ");
    // scanf("%d",&age);
    

    // (age >=18)?printf("Hello %s You can access this site\n",name):printf("Hello %s You can't access this site",name);

    // if(age >=18){
    //     printf("Enter your phone number: ");
    //     scanf("%d",&ph_no);
    //     printf("%d this number is registered successfully",ph_no);
    // };

//fgets is used to get input with white space \n character in last to \0(string terminater) which prevent buffering

    // char name[40];
    // printf("Enter your first name: ");
    // scanf("%s",name);
    // printf("%s\n",name);// bcz %s only read a word that mean start and end without whitespace");

    // char name[40];
    // printf("Enter your first name: ");
    // fgets(name,sizeof(name),stdin);//
    // //name[strlen(name)-1]='\0';//here fgets have \n as last char so we change that into \0
    // printf("%s\n",name);
    // printf("hello");

//getchar() is used to get a single character input and it also read white space in input buffer

    // char ch;
    // printf("Enter a character :");
    // ch = getchar();
    // printf("%c",ch);
    // printf("hello");  

//________________________________________________________________________________________________________________________

//math functions

    // int x = 9;
    // float y = 8.95;
    // int power = pow(x,2);
    // int root = sqrt(x);
    // int round_off = round(y);

    // printf("Sq of %d is %d\n",x,power);
    // printf("Sq root of %d is %d",x,root);
    // printf("Sq root of %d is %d",x,root);

    // int x;
    // scanf(">>>>%i", &x);
    // printf("%i",x);

//________________________________________________________________________________________________________________________

//Buffer concept


    // char name[40];
    // char college[40];
    // char course[40];
    // printf("Enter ur name :");
    // scanf("%s",name);
    // printf("Enter your collage name :");
    // scanf("%s",college);
    // printf("Enter ur course name:");
    // scanf("%s",course);
    // printf("\n");
    // printf("%s ",name);
    // printf("%s ",college);
    // printf("%s",course);

    /* Newline buffer concept (In C programing 
    scanf used to read user input in that %d,%f,%lf,%s(these formate specifiers)
    clear or skip white space but %c,%[] they read white space in
    the input buffer.
    */
//________________________________________________________________________________________________________________________

//Arrays
    // char num[4];
    // for (int i = 0; i < 4; i++){
    //     printf("Enter a number :");
    //     scanf("%d",&num[i]);
    // }

    // for (int i = 0; i < 4; i++){
    //     printf("%d ",num[i]);
    // }

    
    ////int num[]; // not valid bcz we have only declaration but haven't initialize 
    // int nums[] = {1,2,3,4}; // we can create an array with undefined size if we initialize it at the same time
    
    // char fruits[][20] = {//in an 2d arr we have define size of coulumn even initialized
    //     "apple",
    //     "banana",
    //     "grapes",
    //     "orange"
    // };

    // printf("%d\n", sizeof(fruits));
    // printf("%d\n", sizeof(fruits[0]));
    // printf("%d\n", sizeof(fruits[0][0]));

    // char fruit[][10]={//the above and this are same but this is 2d char arr char by char initialization
    //     {'a','p','p','l','e'},
    //     {'b','a','n','a','n','a'},
    //     {'g','r','a','p','e','s'},
    //     {'o','r','a','n','g','e'}
    // };

    
    // printf("%s\n", fruits[0]);
    // printf("%s\n", fruit[0]);

//Insert and delete in array

    // int arr[5] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    
    //insert

    // int p,n;
    // printf("Enter the position to insert :");
    // scanf("%d",&p); 
    // printf("Enter the number to insert :");
    // scanf("%d",&n);

    // for (int i = size;i>=p;i--){
    //     arr[i] = arr[i-1];
    // }

    // arr[p-1] = n;

    // for (int j = 0; j < size; j++){
    //     printf("%d ",arr[j]);
    // }

    //delete

    // int p;    
    // printf("Enter the position to delete :");
    // scanf("%d",&p);

    // for (int i = p-1;i<size;i++){
    //     arr[i] = arr[i+1];
    // }

    // for (int j = 0; j < size; j++){
    //     printf("%d ",arr[j]);
    // }

// Binary search in array

    // int t;
    // printf("Enter the number to search :");
    // scanf("%d",&t);
    
    // int low = 0;
    // int high = sizeof(arr)/sizeof(arr[0]) -1;

    // int mid = (low + high)/2;

    // while (low <= high){
    //     if (arr[mid] == t){
    //         printf("Element found at index %d",mid);
    //         break;
    //     }
    //     else if (arr[mid] < t){
    //         low = mid + 1;
    //     }
    //     else{
    //         high = mid - 1;
    //     }
    //     mid = (low + high)/2;
    // }

    // int arr[10] = {1,2,3,4,5,0,6};

    // int i = 0;
    // while(arr[i] != 0 ){
    //     printf("%d ",arr[i]);
    //     i++;
    // }
    // printf("\n%d",i);

    // int t,p;
    // printf("\nEnter the number to insert and position :");
    // scanf("%d %d", &t, &p);

    
    // for (int j = i-1;j > p-2; j--){
    //     arr[j+1] = arr[j];
    // }
    // arr[p-1] = t;

    // for (int k = 0; k < i+1 || k < p; k++){
    //     printf("%d ",arr[k]);
    // }

//________________________________________________________________________________________________________________________

/* Find Second largest number (my own idea but this fails in some case 
   bcz it compare adjacent elements in this case size = 4 and elements = 0 1 0 2)
*/

    // int n;

    // printf("Enter array size >");
    // scanf("%d",&n);

    // int ar1[n];
    // printf("Enter %d elements: ",n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &ar1[i]);
    // }


    // int large = 0;
    // int sec_large = 0;

    // for (int i = 0; i < (n-1);i++){
    //     if (ar1[i]>ar1[i+1] && ar1[i]>=large){
    //         large = ar1[i];

    //         if (ar1[i+1]>sec_large && ar1[i+1]<large){
    //             sec_large = ar1[i+1];
    //         }
    //     }

    //     else if (ar1[i]<ar1[i+1] && ar1[i+1]>=large){
    //         large = ar1[i+1];

    //         if (ar1[i]>sec_large && ar1[i]<large){
    //             sec_large = ar1[i];
    //         }
    //     }

    //     else {
    //         if (ar1[i] > large ){
    //             large = ar1[i];

    //         }
    //     }
    // }

    // printf("secong largest num %d",sec_large);


//Another Way (privious code compare nebour elements no need for that)

    // int large = ar1[0];
    // int sec_large = ar1[0];

    // for (int i = 0;i<n;i++)
    //     if (ar1[i] > large) {
    //         sec_large = large;
    //         large = ar1[i];
    //     }
    //     else if (ar1[i] > sec_large && ar1[i] != large) {
    //         sec_large = ar1[i];
    //     }

    // printf("Second largest num %d",sec_large);


    // int arr[4] = {69,96,67,76};
    // int len_arr = sizeof(arr) / sizeof(arr[0]);
    
    // int num;
    // int position;

    // printf("Enter number to insert >");
    // scanf("%d",&num);

    // printf("Enter position to insert >");
    // scanf("%d",&position);

    // if (position > len_arr) {
    //     printf("Sorry!! position out of range");
    //     return 0;// this ends code here
    // }

    // int arr2[len_arr];

    // int len_arr2 = sizeof(arr2)/sizeof(arr2[0]);
 
    // for (int i = 0,j=0;i < len_arr2 ; i++){
    //     if (i == (position-1)){
    //         arr2[i] = num;
    //         continue;
    //     }else{
    //         arr2[i] = arr[j];
    //         j++;
    //     }
    // }

    // for (int i = 0; i < len_arr2;i++){
    //     printf("%d ",arr2[i]);
    // }

//________________________________________________________________________________________________________________________

    return 0;

}
//________________________________________________________________________________________________________________________

