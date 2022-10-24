/**
*
*   Author: 	jay.dnb@outlook.in
*   Created: 	24.09.2020 UTC+5:30
*
*   JAVA program to remove parenthesis & content. 
*   Synopsis: ~$ java ./*
*
**/

import java.util.Scanner;

public class parenthesis {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); //System.in is a standard input stream
        System.out.print("Enter a string: ");
        String str = sc.nextLine();              //reads string
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != '(') System.out.print(str.charAt(i));
            else {
                for(int j=i;;j++) {
                    if(str.charAt(j)!=')') continue;
                    else { i=j; break; }
                }
            }
        }
    }
}
