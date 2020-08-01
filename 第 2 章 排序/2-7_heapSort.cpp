#include <iostream>
#include <vector>
using namespace std;

class HeapSort {
public:
    int* heapSort(int* nums, int n) {
        // write code here
        for ( int i = n - 1; i >= 0; --i )  // 可以优化为 i = ( n - 2 ) / 2
            heapify( nums, n, i );
        
        for ( int i = n - 1; i >= 0; --i ) {
            swap( nums[0], nums[i] );
            heapify( nums, i, 0 );
        }
        
        return nums;
    }
    
    void heapify( int* nums, int n, int parent ) {
        int maxIndex = parent;
        int leftChild = parent * 2 + 1;
        int rightChild = parent * 2 + 2;
        
        if ( leftChild < n && nums[maxIndex] < nums[leftChild] )
            maxIndex = leftChild;
        if ( rightChild < n && nums[maxIndex] < nums[rightChild] )
            maxIndex = rightChild;
        
        if ( maxIndex != parent ) {
            swap( nums[maxIndex], nums[parent] );
            heapify( nums, n, maxIndex );
        }
    }
};

int main()
{
    

    return 0;
}