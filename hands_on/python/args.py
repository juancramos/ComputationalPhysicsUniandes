import sys, string, os

print "This program runs with the following arguments:", sys.argv
n_args = len(sys.argv)

for i in range(n_args):
    print sys.argv[i]
