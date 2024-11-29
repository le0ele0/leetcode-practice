class Solution {
public:
    int reverse(int x) {
        //取反等操作可能导致栈溢出 用long类型代替x操作
        int flag = 0;
        //对负数情况采取分类讨论
        long y = x;
        if (y<0)
        {   
            y = -y;
             flag = 1;
        }
    int a[32];
    int i = 0;
    do{
        //为了少一次整除操作保证正确性多做了好几次判断
        if(i !=0)
        y = y / 10; 
        a[i] = y%10;
        i++;
    }while(y/10 != 0);
    //result用long类型。只有这样才能在堆栈不溢出的前提下得出结果，得出结果才能判断范围
long result = 0;
int j = i;
for(i = 0;i<j;i++){
result = result + a[i]*pow(10,j-i-1);
}

if (flag == 1)
result = -result;
//题目说的每一个条件都不能忽略
ifififififififif(-pow(2,31)<= result &&result<=pow(2,31)-1)
        return result;
        else return 0;
    }
};


