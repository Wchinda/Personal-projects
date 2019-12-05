""" This is a program for a function even_only
    Name: Chinda Wesley
    Student ID: 803500
"""


def main():
    num = []
    list1 = input("Please enter the list needed:")
    while list1 != "w":
        list1 = int(list1)
        num.append(list1)
        list1 =input("Please enter the list needed:")
    print (even_only(num))


        
def even_only(num):
    list2 = []
    for i in range (len(num)):
        if num[i] % 2 == 0:
            list2.append(num[i])
    return list2

main()
    
    
    
    
