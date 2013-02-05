#controling the program flow with if, else, elif, while


#simple if statement and boolean variable
value = True #boolean variable
if(value):
    print 'The boolean value was true'

# zero is equivalent to False
if(0):
    print 'This will never be printed to screen'


#simple example of if-else
a = 10
b = 4
if(a>b):
    print 'a>b: a=', a, ',b=', b
else:
    print 'a<=b, a=', a, ',b=', b


#simple example of if-elif-else
month='July'

if(month=='January'):
    month_number=1
elif(month=='February'):
    month_number=2
else:
    month_number=-1
print month, 'corresponds to month_number', month_number

if(month_number==-1):
    print 'That means that I don\'t have', month, 'in my list'

#simple example of while statement

print 'Countdown starts'
n=10
while n > 0:
    print n
    n = n-1
print 'Blastoff!'
