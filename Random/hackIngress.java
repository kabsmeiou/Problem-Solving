import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

public class hackIngress {
    static Long convert(Long time) {
        Long ret = (time / 100) * 60 + (time % 100);
        return ret;
    }
    public static void main(String args[]) {
        try {
            FileReader in = new FileReader("hackIngress.in");
            FileWriter out = new FileWriter("hackIngress.out");
            Scanner input = new Scanner(in);
            while (input.hasNextLine()) {
                int n = input.nextInt();
                Long hacks[] = new Long[n];
                for (int i = 0; i < n; i++) {
                    Long hack = input.nextLong();
                    hacks[i] = convert(hack);
                }
                for (int i = 1; i < n; i++) {
                    if (hacks[i] <= hacks[i - 1]) {
                        while (hacks[i] <= hacks[i - 1]) {
                            hacks[i] += 1440;
                        }
                    }
                }
                Long ans = 1L, cycle = hacks[0] + 240L, buffer = 1L, prev = hacks[0];
                for (int i = 1; i < n; i++) {
                    if (buffer >= 4 && hacks[i] < cycle) continue;
                    if (hacks[i] >= cycle) {
                        cycle = hacks[i] + 240L;
                        buffer = 0L;
                    }
                    if (prev + 5 <= hacks[i]) {
                        ans++;
                        buffer++;
                        prev = hacks[i];
                    }
                }
                out.append(ans.toString() + "\n");
            }
            in.close();
            out.close();
        } catch (IOException e) {
            System.out.println("File not found.");
        }
    }
}