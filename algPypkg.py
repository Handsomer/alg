#coding: utf-8

def fibonacii_generator(max):
    n ,a,b = 0,0,1
    while n < max:
        n = n+1
        yield b
        tmp = a
        a = b
        b = a + tmp
    print "done"