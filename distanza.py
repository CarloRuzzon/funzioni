import math 
def distanza (p1, p2):
    return math.sqrt((p1[0] - p2[0]) **2 + (p1[1] - p2[1]) **2)
def int_input (prompt):
    return int(input(prompt))
def coordinate ():
    x = int_input("x: ")
    y = int_input("y: ") 
    return (x, y)
p1 = coordinate()
p2 = coordinate()
print ("La distanza e': " +str( distanza (p1, p2) ) )
