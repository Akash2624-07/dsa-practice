package sorting;
public class bubblesort {
    public static void main(String[] args) {
        int[] arr={5,8,2,9,6,7,1,2};
        bubble(arr);
        for (int ele:arr) {
            System.out.print(ele+" ");
        }
    }
        static void bubble(int[]arr){
         int n=arr.length;
            for (int i = 0; i <n; i++) {
                boolean flag = false;
                for (int j = 0; j <n-i-1; j++) { // last element is already sorted
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        flag = true;
                    }
                }
                    if(!flag){
                        return;
                }
            }
    }
}
