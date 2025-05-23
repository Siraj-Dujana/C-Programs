        for(int j = i+1; j < size-1; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " "; // Use << to concatenate in C++
    }
}