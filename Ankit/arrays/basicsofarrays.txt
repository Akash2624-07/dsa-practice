
package array;
import java.util.Scanner;
public class basicinputoutpur {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);   // for any input by user you have to write this
        System.out.print("enter size if array");
        int n = sc.nextInt();     // a integer number (size) declare
        int[] arr = new int[n];   // array declare
        System.out.print("enter array element");
        for (int i=0;i<=n-1;i++){     // input of array element by user
            arr[i] = sc.nextInt();
        }
        for (int i=0;i<=n-1;i++){     // print the array element
            System.out.print(arr[i] + " ");
        }
    }
}
