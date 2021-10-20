''' PYTHON PROGRAM TO PERFORM INSERTION SORT '''

def Insertion_sort(array):
    
    L = len(array)

    for i in range(1, L):
        med = array[i]           
        a = i - 1

        while a>=0 and med < array[a] :        
            array[a+1] = array[a]
            a -= 1
        array[a + 1] = med





if __name__ == "__main__":

    Lt = list(map(int, input().split()))

    print(f'Before Sorting:--\n {Lt}')
    Insertion_sort(Lt)

print(f'After Sorting:--\n {Lt}')
    