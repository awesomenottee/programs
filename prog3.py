#main

lst = []
while(1):
	num = input("Enter number (enter exit to quit): ")
	if num=="exit": break;
	lst.append(int(num))

#function
def func(*lst):
	large = lst[0]
	small = lst[0]
	for i in range(len(lst)):
		if large < lst[i]: large = lst[i]
		if small > lst[i]: small = lst[i]
	return "Largest Number: " + str(large) + "\nSmallest Number: " + str(small)

#main
print(func(*lst))
