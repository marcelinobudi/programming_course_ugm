#include <iostream>
using namespace std;


void mergeArray(int  arr[], int first, int middle, int last){
    int n_left = middle-first+1, n_right = last-middle;

    int temp_left[n_left], temp_right[n_right];

    for(int i = 0; i < n_left; i++){
        temp_left[i] = arr[first+i];
    }
    for(int i = 0; i< n_right; i++){
        temp_right[i] = arr[middle+i+1];
    }
    int i = 0;
    int j = 0;
    int k = first;
    while(i < n_left && j < n_right){
        if(temp_left[i] <= temp_right[j]){
            arr[k] = temp_left[i];
            i++;
        } else {
            arr[k] = temp_right[j];
            j++;
        }
        k++;
    }
    while(i < n_left){
        arr[k] = temp_left[i];
        i++;
        k++;
    } 
    while(j < n_right){
        arr[k] = temp_right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int first, int last){
    if(first < last){
        int middle = (first+last)/2;
        mergeSort(arr, first, middle);
        mergeSort(arr, middle+1, last);
        mergeArray(arr, first, middle, last);
    }
}
int main(){
    int arr[5] = {6,3,8,5,2};
    mergeSort(arr, 0, 4);
    for(int i = 0; i < 5; i++){
        cout << arr[i];
    }
    return 0;
}