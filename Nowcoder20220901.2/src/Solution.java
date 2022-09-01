import java.util.*;
public class Solution {
    public void merge(int A[], int m, int B[], int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0) {
            if(B[j] >= A[i]){
                A[k] = B[j];
                k--;
                j--;
            }else {
                A[k] = A[i];
                k--;
                i--;
            }
        }
        while(j>=0) {
            A[k] = B[j];
            k--;
            j--;
        }
        while(i>=0){
            A[k] = A[i];
            k--;
            i--;
        }
    }
    /*public void merge(int A[], int m, int B[], int n) {
        int i = 0;
        int j = 0;
        for(i = m, j = 0; i<m+n && j<n; i++,j++) {
            A[i] = B[j];
        }
        Arrays.sort(A);
    }*/
}