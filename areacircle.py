import math

r= float(input("enter the radius of the circle:"))

area=math.pi*r*r
print("Area of circle is:",area)

l=int(input("enter the length of the rectangle:"))
b=int(input("enter the breadth of the rectangle:"))
a=l*b
print("area of rectangle is:",a)
c=2*(l+b)
print("perimeter of the rectangle is:",c)

d=float(input("enter the breadth of triangle:"))
e=float(input("enter the height of the triangle:"))
f=0.5*d*e
print("area of the traiangle is:",f)
