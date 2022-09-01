import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()) {
            String str = sc.nextLine();
            //标记数组
            boolean[] flg = new boolean[123];
            StringBuilder strb = new StringBuilder("");

            for(int i = 0; i < str.length(); i++) {
                char ch = str.charAt(i);
                if(flg[ch] == false) {
                    strb.append(ch);
                    flg[str.charAt(i)] = true;
                }
            }
            System.out.println(strb.toString());
        }
    }
    public static void main2(String args[]) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()) {
            String str = sc.nextLine();
            StringBuilder strb = new StringBuilder("");

            for(int i = 0; i < str.length(); i++) {
                String tmp = strb.toString();
                if(!tmp.contains(str.charAt(i)+"")) {
                    strb.append(str.charAt(i)+"");//转化为字符串追加
                }
            }
            System.out.println(strb.toString());
        }
    }
    public static void main1(String args[]) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()) {
            String str = sc.nextLine();
            StringBuilder strb = new StringBuilder("");
            
            for(int i = 0; i < str.length(); i++) {
                int flag = 1;
                for(int j = 0; j < strb.length(); j++) {
                    if(str.charAt(i) == strb.charAt(j)) {
                        flag = 0;
                    }
                }
                if(flag == 1){
                     strb.append(str.charAt(i)+"");
                }
            }
            System.out.println(strb.toString());
        }
    }
}