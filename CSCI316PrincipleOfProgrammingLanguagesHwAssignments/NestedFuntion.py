



#Swarna Dasrao 




def makeAdder(x):   # creating a function called makeAdder

    def function(y): # nested function here parameter 'y' will be referred to 'x' and so will have the same value as x although we are not assigning the 'y' directly to 'x'

        return x+y # this will return x+y which is basically adding x o itself so for adding 10 with give us 20 (becuase 10+10=20) as well as adding 5 will give us 5+5 or 10

    return function(x) #returning a function takes a parameter of x, in python we can return a function. 

#main
Add10 = makeAdder(10)
Add5 = makeAdder(5)

print("add 10 to 20:", Add10) #printing after calling makeAdder with parameter x as 10 which will be x+x or 20 as mentioned above
print("add 5 to 20:", Add5) #printing after calling makeAdder with parameter x as 5 which will be x+x or 10 as mentioned above