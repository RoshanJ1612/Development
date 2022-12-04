class Solution {
    public String addBinary(String a, String b) {
        
    java.math.BigInteger aa = new java.math.BigInteger(a, 2);
	java.math.BigInteger bb = new java.math.BigInteger(b, 2);
	return aa.add(bb).toString(2);
    }
}