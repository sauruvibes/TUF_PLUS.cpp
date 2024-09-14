TUF+ NOTES SECTION:

[CPP BASICS]

1] #include<bits/stdc++.h> [Libraries that you dont need are also compiling so the compilation time might be slightly more]



2} void main(){
               } [wont return anything]


3] all the indentifers, functions , classes any more things which needs std will be done by 'using namespace std;'



4] TIP : Dont get into too deep of anything, just study the basics which are required for DSA, dont learn core C++ cuz its not much needed, you'll learn it eventually.



5] int ranges = [-10^9,10^9].



6] INT_MAX,INT_MIN,LONG_MAX,LONG_MIN



7] long long[10^18]>long[10^12] > int



8] float = 7 decimal places



9] double = till 15 decimal places



10] char ch = 'a';
      cout<<ch; [Stores a character]


11] strings used for names.



12] suppose we have input as 'tuf+ is best' and want to print entire line then :

string str;
getline(cin,str);
cout<<str;


13] use break; keyword in switch statements.



14] &vairable_name = gives output as memory address.



15] ARRAYS :
int num[5] = {1, 2, 3, 4, 5};
cout<<num[0];
O/P : 1



16] strings str = "tufplus";
cout<<str[2];
O/p : f



in this string it shows that it has 8 characters even tho its 7 because there will always be null character at the end of string.



17] cout<<str.size{};
Gives size of string.



18] int main(){
string str = "tufplus";
int length = str.size{};
for(int i=0; i<=length-1; i++){
cout<<str[i];
} // gives O/P 'tufplus' charcter by character
