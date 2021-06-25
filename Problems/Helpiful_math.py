a=input()
empty=[]

for i in range(len(a)):
	if(a[i]!='+'):
		empty.append(int(a[i]))
	else:
		pass

empty.sort()
string=''
for i in range(len(empty)):
	string=string+str(empty[i])+'+'

string=string[0:len(string)-1]
print(string)
