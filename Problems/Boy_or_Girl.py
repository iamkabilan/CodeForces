a=input()

#a="xiaodao"
empty=[]


for i in range(len(a)):
	if(a[i] not in empty):
		empty.append(a[i])

val=len(empty)

if(val%2==0):
	print("CHAT WITH HER!")
else:
	print("IGNORE HIM!")
