#include <iostream>
using namespace std;

void improvedSelectionSort(int a[], int n){
    int left = 0, right = n - 1;

    while(left < right){
        int minIndex = left;
        int maxIndex = right;

        for(int i = left; i <= right; i++){
            if(a[i] < a[minIndex])
                minIndex = i;
            if(a[i] > a[maxIndex])
                maxIndex = i;
        }

        // Place minimum at left
        swap(a[left], a[minIndex]);

        // If max was at the left position, it got swapped, fix index
        if(maxIndex == left)
            maxIndex = minIndex;

        // Place maximum at right
        swap(a[right], a[maxIndex]);

        left++;
        right--;
    }
}

void print(int a[], int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int a[] = {20, 5, 11, 3, 18, 9, 1};
    int n = 7;

    cout<<"Original: ";
    print(a,n);

    improvedSelectionSort(a,n);

    cout<<"Sorted:   ";
    print(a,n);

    return 0;
}
