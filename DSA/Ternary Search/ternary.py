#------------Python Program to Peform Ternary Search-----------------

''' Funtion '''
def ternary_search(z,l,list,search_element):
    if l >= 1:
        mid1 = z + (l - z) // 3
        mid2 = l - (l - z) // 3                  
    
        if list[mid1] == search_element:                            #When element at mid1
            return mid1
    
        elif list[mid2] == search_element:                          #when element at mid2
           return mid2

        elif list[mid1] > search_element:                           #when element occurs before mid1
            return ternary_search(z,l-1,list,search_element)

        elif list[mid2] < search_element:                           #when element occurs after mid2
            return ternary_search(l+1,z,list,search_element)

        else:                                                       #when element is between mid1 and mid2
            return ternary_search(mid1+1,mid2-1,list,search_element)

    return -1                                                       # element not found
#---------------------------------------------------------------------
if __name__ == "__main__" :
    L = list ( map ( int, input().split() ) )
    x = int ( input() )
    l = len( L ) - 1
    z = 0
    L.sort()
    index = ternary_search(z,l,L,x)

print(L)
a={True:f"Element {x} Location {index}",False:'Not Found'}[index > -1]
print(a)