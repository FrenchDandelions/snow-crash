

if __name__ == "__main__":
    with open("./token", 'rb') as f:
        s = f.read()
    s = list(s)
    i = 0
    l=[]
    for j in s:
        l.append((j-i))
        i+=1
    l = [chr(i) for i in l[:-1]]
    print(*l, sep="")