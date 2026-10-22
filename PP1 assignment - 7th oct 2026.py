#PP1 assignment - 7th oct 2026


#1)Appending a List
x=[1,2,3,4]
x.append(5)
print(x)


#2)Enumarate function
a=["apple","banana","orange","cherry"]
y=enumerate(a)
print ("return type:" , type(y))
print (list(enumerate(a)))

#3)Write a Python program to create an array of electronic components such as resistors, capacitors, inductors, diodes etc. ,and display the array items and perform following operations.
#   1. Access individual components through indices. 
#   2. Append a new component “LED” to the end of the array without using built in function. 
comps=["resistors", "capacitors", "inductors", "diodes"]
new_comp="LED"
print(list(enumerate(comps)))
print("\n accesing elements by index:")
for i in range(0,len(comps)):
 print('Element at index', str(i) ,'is:' ,str(comps[i]))
new_len=len(comps)+1
new_comps=[None]*new_len
for i in range(0,len(comps)):
    new_comps[i]=comps[i]
    new_comps[-1]=new_comp
print(new_comps)
order=enumerate(new_comps)
print("using enumerate function we get:",list(order))
for i in range (0,len(new_comps)):
    print("Elements by their index are:",str(i),'=',new_comps[i])