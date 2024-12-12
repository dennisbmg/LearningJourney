

# def name der funktion (parmater): 
def multiprint(x):
    print(x)
    print(x)
    
multiprint("Hallo Welt")

def multiprint2(string, count):
    for i in range(0, count):
        print(string)

multiprint2("hallo", 5)



def weiterfunktion():
    multiprint2("hallo", 3)
    multiprint("hallo")

weiterfunktion()

def maximum(x, y):
    
    if x < y:
        return y
    else:
        return x

result = maximum(4, 5)
print(result)

