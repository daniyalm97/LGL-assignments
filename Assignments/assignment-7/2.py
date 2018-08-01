#identity operator usage
data=[0,1,2,3,4,5,6,7,8,9,10]
for i in data:
	if i is 0:
		print 'zero'
	elif i%2 is not 1:
		print 'even'
	else:
		print 'odd'
