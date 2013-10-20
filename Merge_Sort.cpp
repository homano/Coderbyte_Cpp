#include <iostream>
using namespace std;

/*************************************************************************
 *  Compilation:  javac Merge.java
 *  Execution:    java Merge N
 *
 *  A bare-bones N log N implementation of mergesort.
 *
 *  See MergeSortX.java for an optimized version that avoids
 *  memory allocation in the inner loop and cuts of to
 *  insertionsort for small N.
 *
 *************************************************************************/

    // Sort a[lo, hi).
void sort(string & a, int lo, int hi) {
        int N = hi - lo;        // number of elements to sort

        // 0- or 1-element file, so we're done
        if (N <= 1) return;

        // recursively sort left and right halves
        int mid = lo + N/2;
        sort(a, lo, mid);
        sort(a, mid, hi);

        // merge two sorted subarrays
        string aux(N,'0');
        int i = lo, j = mid;
        for (int k = 0; k < N; k++) {
            if      (i == mid)  aux[k] = a[j++];
            else if (j == hi)   aux[k] = a[i++];
            else if (a[j] < a[i]) aux[k] = a[j++];
            else                               aux[k] = a[i++];
        }

        // copy back
        for (int k = 0; k < N; k++) {
            a[lo + k] = aux[k];
        }
    }



   /***********************************************************************
    *  Check if array is sorted - useful for debugging
    ***********************************************************************/
    bool isSorted(string a) {
        for (int i = 1; i < int(a.size()); i++)
            if (a[i] < (a[i-1])) return false;
        return true;
    }

   /***********************************************************************
    *  Show results
    ***********************************************************************/
    void show(string a) {
        for (int i = 0; i < int(a.size()); i++)
            cout << a[i] << endl;
    }


    int main() {
        string a = "Ishsshshwsickejisjsdjfsdkj";
        sort(a, 0, int(a.size()));
        for (int i = 0; i < int(a.size()); i++)
            cout << a[i] << ' ';
}










