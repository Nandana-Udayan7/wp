a=int(input("enter the first number:"))
b=int(input("enter the second number:"))
c=int(input("enter the third number:"))
if a>b and a>c:
    print(a," is greatest")
elif b>a and b>c:
    print(b," is greatest")
else:
    print(c," is greatest")
if a<b and a<c:
    print(a," is smallest")
elif b<a and b<c:
    print(b," is smallest")
else:
    print(c," is smallest")
