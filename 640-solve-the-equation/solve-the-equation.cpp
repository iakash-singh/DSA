class Solution {
public:

    pair<int,int> solve(const string& str){
        int xcoeff = 0;
        int constsum = 0;
        int sign = 1;
        int i=0, n= str.length();

        while(i<n){
            if(str[i]=='+'){
                sign = 1;
                i++;
            }
            else if(str[i]=='-'){
                sign = -1;
                i++;
            }

            int num = 0,hasnum = 0;

            while(i<n && isdigit(str[i])){
                num = num*10 + (str[i] -'0');
                i++;
                hasnum = 1;
            }

            if(i<n && str[i]=='x'){
                if(hasnum){
                    xcoeff+=sign*num;
                }
                else{
                    xcoeff+=sign;
                }
                i++;
            }
            else{
                constsum+=sign*num;
            }
        }

        return {xcoeff,constsum};
    }
    string solveEquation(string equation) {
        int findequal = equation.find('=');
        string leftside = equation.substr(0,findequal);
        string rightside = equation.substr(findequal+1);

        pair<int,int> left = solve(leftside);
        pair<int,int> right = solve(rightside);

        int xcoeff = left.first - right.first;
        int constsum = right.second - left.second;


        if(xcoeff==0){
            if(constsum==0){
                return "Infinite solutions";
            }
            else{
                return "No solution";
            }
        }

        int xvalue = constsum/xcoeff;
        return "x=" + to_string(xvalue);

    }
};