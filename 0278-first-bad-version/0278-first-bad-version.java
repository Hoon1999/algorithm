/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int max = n;
        int min = 1;
        
        while(true) {
            n = min + ( max - min ) / 2;
            if(isBadVersion(n)) {
                max = n;
                if(isBadVersion(n-1) == false)
                    return n;
            }
            else {
                min = n;
                if(isBadVersion(n+1))
                    return n+1;
            }
        }
    }
}