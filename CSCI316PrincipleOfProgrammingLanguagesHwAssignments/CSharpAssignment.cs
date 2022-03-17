



//Swarna Dasrao
   
using System;



public class Employee{
       //defining two variables first and last as empty strings, will be filled in later
            public string first = ""; 
            public  string last = "";
  
}



class Program {
static void Main(string[] args) {
Employee a=new Employee();
Employee b=new Employee();
a.first="josh";
b.first="bill";
foo(ref a);
Console.WriteLine(a.first);
}
  
  
//function foo

public static void foo(ref Employee x){

x.first="stacey"; // mutable yet won't change because the parameter doesn't stick even after assignment because it's not passed by reference like C++
x=new Employee();
x.first="jennifer"; // would be kept as original 
}
}