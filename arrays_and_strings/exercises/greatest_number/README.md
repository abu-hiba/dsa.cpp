## Chapter 4 Exercise 4 (pg. 61)
The following function finds the greatest single number within an array, but has an efficieny of $O(N^2)$. Rewrite the function so that it becomes a speedy $O(N)$:

```cpp
int greatestNumber(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isIValTheGreatest = true;

        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[i]) {
                isIValTheGreatest = false;
            }
        }

        if (isIValTheGreatest) {
            return arr[i];
        }
    }
    // shouldn't be reached
    return 0;
}
```

