import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader scan = new BufferedReader(new
                InputStreamReader(System.in));


        int cases = Integer.parseInt(scan.readLine()); 
        for (int i = 0; i < cases; i++) {
            String line = scan.readLine();
            String[] splitLine = line.split(" ");
            Integer setSize  = Integer.parseInt(splitLine[0]);
            Integer extraElement = Integer.parseInt(splitLine[1]); 

            List<Integer> arr = new ArrayList<Integer>();
            String line2 = scan.readLine();

            String[] splitLine2 = line2.split(" ");
            while(setSize!=0) {

                arr.add(Integer.parseInt(splitLine2[setSize-1]));
                setSize--;
            }
            int element = 0;
            if (extraElement != 0) {
                while (extraElement > 0) {
                    boolean present = scan(arr, element);
                    if (present == false) {
                        extraElement--;
                        arr.add(setSize, element);
                        setSize++;
                    }
                    element++;
                }
            }
            int findNum = 0;
            loop: while (true) {
                boolean boo = scan(arr, findNum);
                if (boo == false) {
                    System.out.println(findNum);
                    break loop;
                }
                findNum++;
            }
        }
    }

    public static boolean scan(List<Integer> arr, int element) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) == element) {
                return true;
            }
        }
        return false; 
    }
    }

