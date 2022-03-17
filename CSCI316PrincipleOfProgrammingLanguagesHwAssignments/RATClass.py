#Swarna Dasrao

import os
class Rat():

#variables

    def __init__(self, numerator , denominator):
        self._numerator = numerator
        self._denominator = denominator

#setters for numerator and denominator

    def setN(self, n):
        self._numerator = n

    def setD(self, d):
        self._denominator = d

# getters for numerators and denominators 

    def getN(self):
        return self._numerator
    def getD(self):
        return self._denominator

    
#functions for  arithmetic operations

    def __str__(self):
        return str(self._numerator) + ' / ' + str(self._denominator)

    def __add__(self, add):
        try:
            n = add._numerator
            d = add._denominator
        except AttributeError:
            n = add
            d = 1
       
        return Rat(int(int(self._numerator) * d + int(self._denominator) * n), int(self._denominator * d))


#main function from code where two rat objects are created one with value of (1,2) and second with (2,3). Here z will be the first object added to the second object. 

x = Rat(1,2)
y = Rat(2,3)
z = x + y
print(z)

x.setN(3)
y.setD(2)
z = x + y
print(z)


InputNumerator = input("Enter value for numerator: ")
x.setN(InputNumerator)
print(x)

z = x + 5
print(z)

os.system("pause")

