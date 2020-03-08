#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int beg, int end, int key) { 
    if (end >= beg) { 
        int mid = beg + (end - beg) / 2; 
  
        if (arr[mid] == key) 
            return mid; 
  
        if (arr[mid] > key) 
            return binarySearch(arr, beg, mid - 1, key); 
  
        return binarySearch(arr, mid + 1, end, key); 
    } 
  
    return -1; 
}
int linSearch(int arr[], int beg, int end, int key) { 
    if (end < beg) return -1;
    
    if (arr[beg] == key) return beg;
    
    if (arr[end] == key) return end;
    
    return linSearch(arr, beg + 1,  end - 1, key); 
} 

int main() {
    int n, choice, key;
    cout<<"Enter the size of the array: "<<endl;
    cin >> n;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    int arr[n];
    cout<<"Enter the array the elements: "<<endl;
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    cout<<"Enter:\n1 for Linear Search\n2 for Binary Search"<<endl;
    cin >> choice;
    time_t start,end;
    start = clock();
    if (choice == 1) {
        int x = binarySearch(arr, 0, n - 1, key);
        cout << x << endl;
    }
    else if (choice == 2) {
        int x = linSearch(arr, 0, n - 1, key);
        cout << x << endl;
    }
    else cout << "Invalid" << endl;
    
    end = clock();
    double time_taken = double (end - start)/ double(CLOCKS_PER_SEC);
    cout<<"Time taken is: "<< fixed << time_taken << setprecision(5)<<" s "<<endl;
    return 0;
}
