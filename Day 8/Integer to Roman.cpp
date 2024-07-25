class Solution {
public:
    void add(string &ans,char a,int x){
        while(x>0){
            ans.push_back(a);
            x--;
        }
    }
    string intToRoman(int num) {
        string ans = "";
        int a = num;
        while(a>0){
            if( (a/1000) > 0){
                int x = a/1000;
                add(ans,'M',x);
                a = a - (1000*x);
            }
            else if((a/500) > 0){
                if(a>=900){
                        ans+="CM";
                        a = a-900;
                    }
                    else{
                        add(ans,'D',1);
                        a = a-500;
                    }
            }
            else if((a/100) > 0){
                int x = a/100;
                    if(a>=400){
                        ans+="CD";
                        a = a-400;
                    }
                    else{
                        add(ans,'C',x);
                        a = a-(100*x);
                    }
            }
            else if((a/50) > 0){
                if(a>=90){
                        ans+="XC";
                        a = a-90;
                    }
                    else{
                        add(ans,'L',1);
                        a = a-50;
                    }
            }
            else if((a/10)>0){
                int x = a/10;
                    if(a>=40){
                        ans+="XL";
                        a = a-40;
                    }
                    else{
                        add(ans,'X',x);
                        a = a-(10*x);
                    }
            }
            else if((a/5)>0){
                if(a>=9){
                        ans+="IX";
                        a = a-9;
                    }
                    else{
                        add(ans,'V',1);
                        a = a-5;
                    }
            }
            else{
                int x = a/1;
                    if(a==4){
                        ans+="IV";
                        a = a-4;
                    }
                    else{
                        add(ans,'I',x);
                        a = a-(1*x);
                    }
            }
            
        }
        return ans;
    }
};




//2nd solution

class Solution {
public:
    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};