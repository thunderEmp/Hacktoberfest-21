package Java_Codes;

import java.util.*;

/**
 * largestSumContiguousSubarray
 */
public class largestSumContiguousSubarray {
    static void kadanesAlgo(int[] arr,int n){
        int sum_till_now = 0, max_sum = Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            sum_till_now += arr[i];

            if(sum_till_now < 0)
                sum_till_now = 0;
            
            if(sum_till_now > max_sum)
                max_sum = sum_till_now;
        }

        System.out.println("Maximum sum of subarray is: "+max_sum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of Array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter "+n+" Elements: ");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        kadanesAlgo(arr,n);
        sc.close();
    }
}