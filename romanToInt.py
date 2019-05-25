sum = 0
                dic = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
                for x in range(len(s)-1):
                    if s[x] == 'I' and (s[x+1] == 'V' or s[x+1] == 'X'):
                        sum = sum -1
                        #print(sum);
                    elif s[x] == 'L' and (s[x+1] == 'X' or s[x+1] == 'C'):
                        sum = sum  - 10
                       # print(sum);
                    elif s[x] == 'C' and (s[x+1] == 'D' or s[x+1] == 'M'):
                        sum = sum - 100
                       # print(sum);
                    
                    sum = sum + dic[s[x]]
                    #if(x == 'I' & x+1)
                
        
print(sum)
