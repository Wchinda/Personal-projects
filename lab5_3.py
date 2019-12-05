""" This is a program to alternate the sum of the programs
    Name: Chinda Wesley
    Student ID: 803500
"""

def main():
    list1 = input("Please input the list of number you wish to see alternated: ")
    while list1 != "w":
        list1 = int(list1)
        list1 = input("Please input the list of number you wish to see alternated: ")
    print (alternating_sum(list1))

def alternating_sum(list1):
    list2 = []
    for i in range (len(list1)):
        SUM = list1[0]
        if i % 2 == 0 or i == 0:
            SUM = 1 * list1[i]
        else:
            SUM = -1 * list1[i]
        list2.append(SUM)
    return list2

main()
    


