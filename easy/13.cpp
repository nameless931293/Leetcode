class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]=='I')
            {
                ans+=1;
                cout<<ans<<endl;
            }
            //----------------------------------//
            else if(s[i]=='V' || s[i]=='X')
            {
                if(s[i]=='V')
                {
                    if(i-1>=0 && s[i-1]=='I')
                    {
                        ans+=4;
                        i--;
                        cout<<'IV'<<flush;
                        cout<<ans<<endl;
                    }
                    else
                    {
                        ans+=5;
                        cout<<'V'<<endl;
                        cout<<ans<<endl;
                    }
                }
                else
                {
                    if(i-1>=0 && s[i-1]=='I')
                    {
                        ans+=9;
                        i--;
                        cout<<'IX'<<endl;
                        cout<<ans<<endl;
                    }
                    else
                    {
                        ans+=10;
                        cout<<'X'<<endl;
                        cout<<ans<<endl;
                    }
                }
            }
            //--------------------------------//
            else if(s[i]=='L' || s[i]=='C')
            {
                if(s[i]=='L')
                {
                    if(i-1>=0 && s[i-1]=='X')
                    {
                        ans+=40;
                        i--;
                        cout<<'XL'<<flush;
                        cout<<ans<<endl;
                    }
                    else
                    {
                        ans+=50;
                        cout<<'L'<<endl;
                        cout<<ans<<endl;
                    }
                }
                else
                {
                    if(i-1>=0 && s[i-1]=='X')
                    {
                        ans+=90;
                        i--;
                        cout<<'XC'<<endl;
                        cout<<ans<<endl;
                    }
                    else
                    {
                        ans+=100;
                        cout<<'C'<<endl;
                        cout<<ans<<endl;
                    }
                }
            }
            //--------------------------------//
             else if(s[i]=='D' || s[i]=='M')
            {
                if(s[i]=='D')
                {
                    if(i-1>=0 && s[i-1]=='C')
                    {
                        ans+=400;
                        i--;
                        cout<<'CD'<<flush;
                    }
                    else
                    {
                        ans+=500;
                        cout<<'D'<<endl;
                    }
                }
                else
                {
                    if(i-1>=0 && s[i-1]=='C')
                    {
                        ans+=900;
                        i--;
                        cout<<'CM'<<endl;
                    }
                    else
                    {
                        ans+=1000;
                        cout<<'M'<<endl;
                    }
                }
            }    
        }
        return ans;
    }
};
/*
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
*/