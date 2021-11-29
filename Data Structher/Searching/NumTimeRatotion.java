import java.util.Scanner;

public class NumTimeRatotion {
    public static void main(String [] args ){
       
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
        int left = 0;
        int right = n - 1;
        while(left <= right)
        {
            int mid = (left + right)/2;
            // int pre = arr[mid + 1] % n;
            // int next = arr[(mid + 1)%n]; 
            if(arr[mid] < (arr[(mid - 1) % n]) && arr[mid] < (arr[(mid + 1)%n]))
            {
                System.out.println(mid);
                break;
            }
            else if(arr[mid] < arr[left])
            {
                right  = mid - 1;
            } 
            else
            {
                left = mid + 1;
            }
        }
    }
}