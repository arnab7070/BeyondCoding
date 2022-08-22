dict1 = {
"a":100,
"b":200,
"c":300
}
check = 0
for i in dict1.values():
	# if(i==500):
	if(i==200): 
		check = 1
		print("True")
		break
if(check==0):
	print("False")