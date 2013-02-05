#How to define a function
# *Pay attention to the 4 spaces of indentation*

#Here is a function that doesn't return any value
def print_message(message):
    print 'I am here to tell you this:', message

#Here is a function that returns some number
def volume(radius):
    vol = (4.0/3.0) * 3.14159 * radius**3
    return vol

#now these two functions are used
print_message('I will be back in 5 minutes')
print volume(5.0)

