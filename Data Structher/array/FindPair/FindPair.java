package FindPair;

import java.util.Scanner;

import java.util.Arrays;

public class FindPair {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int [] arr = new int [n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        int target = 2 * n;
        int l = 0;
        int r = n - 1;

        while(l < r){
            if(arr[r] - arr[l] == target){
                System.out.println("("+arr[l]+", "+arr[r]+")");
            }
            else if(arr[r] - arr[l] < target){
                r--;
            }
            else{
                l++;
            }
        }
        sc.close();
    }
}
