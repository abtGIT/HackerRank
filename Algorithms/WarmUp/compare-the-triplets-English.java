import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a0 = in.nextInt();
        int a1 = in.nextInt();
        int a2 = in.nextInt();
        int b0 = in.nextInt();
        int b1 = in.nextInt();
        int b2 = in.nextInt();
        int alice_pt =0;
        int bob_pt = 0;
        if(a0>b0)
            {
            alice_pt++;
        }else if(a0!=b0)
            {
               bob_pt++;   
        }
         if(a1>b1)
            {
            alice_pt++;
        }else if(a1!=b1)
            {
               bob_pt++;   
        }
         if(a2>b2)
            {
            alice_pt++;
        }else if(a2!=b2)
            {
               bob_pt++;   
        }
        System.out.println(alice_pt+" "+bob_pt);
    }
    
}