//Returning the size of the new array after elimaniting the duplicate array elements

int removeDuplicates(vector<int> &arr, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
}

//Retruning the array after removing the duplicate elements

int removeDuplicates(vector<int> &arr){
    int count = 0;
    for(int i = 0; i < n.size(); i++){
        if(arr[i] != arr[i+1]){
            arr[count++] = arr[i];
        }
    }
    arr[count++] = arr[n-1];
    return count;
}