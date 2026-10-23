class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxlength = 0;
        int count = 0;
        for(int i=0 ;i<s.length();i++){
            String sb = "";
            
            for(int j = i;j<s.length();j++){
                if(sb.contains(String.valueOf(s.charAt(j)))){
                    break;
                }   
                else{
                    sb += s.charAt(j);
                }
        

            }
            count = sb.length();
            if(maxlength<count){
                maxlength = count;
            }
                
            

        }
        return maxlength;
    }
    

}