def simpleSort(arr):

    n = len(arr)

    for i in range(n):
        j = 0
        stop = n - i
        while j < stop - 1:
            if arr[j] > arr[j + 1]:
                aux = arr[j];
                arr[j] = arr[j+1]
                arr[j+1] = aux;
            j += 1
    return arr