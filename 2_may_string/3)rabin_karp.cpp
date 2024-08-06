Explanation -:

1)pattern search
2)using hash rolling 

txt="abdabcbabc"
pat="abc"

p -> hash value of pattern
t -> hash value of current window.

a:1 
b:2
c:3
d:4
e:5

p=> a+b+c => 6

i=0 -> t -> (a+b+d)=> 7
i=1 
i=2


every time we have to compute the hash value which is t and compare with p value
if(p==t)
{
    then we have to compare the string txt with pat 
    if(match)
    print the (i) index
}

Time comsuming task

Idea -:
Using window sliding

This is called rolling hash.

Rolling hash -:
t(i+1)=(t(i)+ txt[i+m]-txt[i])

where M is the len of pattern 

problem with spirous match 
eg. txt of current window -> dog 
    pat                   -> odg
    its hash value is match 

so here we are using weighted sum where we multiple by power of d.
here d is 5 because we considered 5 charcter (a,b,c,d,e)


New updated formula :
t(i+1)=d(t(i)- txt[i]*d pow(m-1)) + txt [i+m]
where m is the len of pat 

lets understand with example.

txt ="132456"    D=10    M=4

t0=1324
t1= 10 * (1324- 1 * 10*3) + 5
t1=3245




Q is prime number because it reduce the collision 
bcz prime number is divisible by 1 and number itself.






ArrayList<Integer> search(String pat, String txt)
{
            ArrayList<Integer> res = new  ArrayList<Integer>();
          //  int q =101;
            int d = 26;
            int M = pat.length();  
            int N = txt.length();  
            int i, j;  
            int p = 0; // hash value for pattern  
            int t = 0; // hash value for txt  
            int h = 1;  
          
            // The value of h would be "pow(d, M-1)%q"  
            for (i = 0; i < M - 1; i++)  {
                h = (h * d) % q;  
            }
          
            // Calculate the hash value of pattern and first  
            // window of text  
            for (i = 0; i < M; i++)  
            {  
                p = (d * p + pat.charAt(i)) % q;  
                t = (d * t + txt.charAt(i)) % q;  
            }  
          
            // Slide the pattern over text one by one  
            for (i = 0; i <= N - M; i++)  
            {  
          
                // Check the hash values of current window of text  
                // and pattern. If the hash values match then only  
                // check for characters on by one  
                if ( p == t )  
                {  
                    /* Check for characters one by one */
                    for (j = 0; j < M; j++)  
                    {  
                        if (txt.charAt(i+j) != pat.charAt(j))  
                            break;  
                    }  
          
                    // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]  
                    if (j == M)  
                        res.add(i+1);  
                }  
          
                // Calculate hash value for next window of text: Remove  
                // leading digit, add trailing digit  
                if ( i < N-M )  
                {  
                    t = (d*(t - txt.charAt(i)*h) + txt.charAt(i+M))%q;  
          
                    // We might get negative value of t, converting it  
                    // to positive  
                    if (t < 0)  
                    t = (t + q);  
                }  
            }  
            return res;
}