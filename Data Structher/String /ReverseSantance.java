import java.util.Scanner;

class ReverseSantance{
    public static void main(String [] args){

        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        String [] arr = str.split(" ");

        String ans = "";
        
        for(int i=arr.length - 1; i >=0; i--){
            ans += arr[i];
            ans += " ";
        }
        System.out.println(ans);
        sc.close();
    }
} 