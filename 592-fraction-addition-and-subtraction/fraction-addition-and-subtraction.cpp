class Solution {
public:
    string fractionAddition(string exp) {
        int nume = 0;
        int deno = 1;

        int i=0;
        int n = exp.length();
        while(i<n){
            int currnume = 0;
            int currdeno = 0;

            bool isneg = (exp[i]=='-');
            if(exp[i]=='+' || exp[i]=='-'){
                i++;
            }

            //Building the curr numerator

            while(i<n && isdigit(exp[i])){
                int val = exp[i] -'0';
                currnume = (currnume * 10) + val;
                i++;
            }
            if(isneg==true){
                currnume*=-1;
            }

            i++; //skiping the / character
            
            while(i<n && isdigit(exp[i])){
                int val = exp[i] - '0';
                currdeno = (currdeno*10) + val;
                i++;
            }

            nume = nume * currdeno + currnume * deno;
            deno = currdeno * deno;
 
        }

        int gcd = abs(__gcd(nume,deno));
        
        nume/=gcd;
        deno/=gcd;

        return to_string(nume) + "/" + to_string(deno);

    }
};