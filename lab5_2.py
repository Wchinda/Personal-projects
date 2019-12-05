""" A program to list 10 random numbers
    Name: Chinda Wesley
    Student ID: 803500
"""
import random


list1 = []
for i in range (1,10):
    list1 = random.randrange(1, 50)
    print(list1, end = " ")

print ("\n")
list2 = [[]*5]
for i in range (5):
    for j in range (5):
        list2 = random.randrange(1, 100)
        print(list2, end = " ")
    print ()
  
        



    
