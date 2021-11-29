package MaxProSum;

/* 
Problem Statment - Given two arrays, A and B, of equal size n, the task is to 
 find the minimum value of A[0] * B[0] + A[1] * B[1] +…+ A[n-1] * B[n-1].
 Shuffling of elements of arrays A and B is allowed.
*/

import java.util.Scanner;
import java.util.Arrays; 

class MaxProSum {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr1 = new int[n];
        int [] arr2 = new int[n];

        for(int i=0; i<n; i++){
            arr1[i] = sc.nextInt();
        }
        for(int i=0; i<n; i++){
            arr2[i] = sc.nextInt();
        }

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        //sort both the arrays and now multiply one from starting and onr from end

        int result = 0;
        for(int i=0; i<n; i++){
            result += arr1[i] * arr2[n - i - 1];
        }

        System.out.println(result);
        sc.close();
    }
}