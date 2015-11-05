def cl(w):
    l = {}
    for c in w:
        if c in l:
            l[c] += 1
        else:
            l[c] = 1

    return sorted(l.values(), reverse = True)

def fact(n):return reduce(lambda x,y:x*y,[1]+range(1,n+1))

while True:
    try:
        w = raw_input()
    except EOFError:
        break

    l = cl(w)
   
    a = fact(len(w))
    for l in l:
        a /= fact(l)

    print a % (10**9 + 7)1