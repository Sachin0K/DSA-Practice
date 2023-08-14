class Solution {
private:
         //checking for valid character or not
        bool valid(char ch){
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                return 1;
            }
            return 0;
        }
        //Convereting all character into lowercase
        char lowerCase(char ch){
            if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
                return ch;
            }
            else {
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }

         // Checking for palindrome
        bool checkPalindrome(string a){
            int s = 0; 
            int e = a.length()-1;

            while(s<=e){
                if(a[s]!=a[e]) {return 0;}
                else{
                    s++;
                    e--;
                }
            }
            return 1;
        }

public:
    bool isPalindrome(string s) {

       
        //Removing all non-alphanumeric characters
        string temp = "";

        for(int i=0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int i = 0; i<temp.length(); i++){
            temp[i] = lowerCase(temp[i]);

        }

        return checkPalindrome(temp);
    }

};