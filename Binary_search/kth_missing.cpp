int left = 0, right = arr.size() - 1;
    
    // Binary search for the first position where missing numbers >= k
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int missing = arr[mid] - (mid + 1);  // Number of missing numbers up to index mid
        
        if (missing < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Now, left is the smallest index where missing numbers >= k
    // The kth missing number would be at position: (left + k - (arr[left - 1] - left))
    return left + k;