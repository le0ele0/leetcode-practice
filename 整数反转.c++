class Solution {
public:
    int reverse(int x) {
        //ȡ���Ȳ������ܵ���ջ��� ��long���ʹ���x����
        int flag = 0;
        //�Ը��������ȡ��������
        long y = x;
        if (y<0)
        {   
            y = -y;
             flag = 1;
        }
    int a[32];
    int i = 0;
    do{
        //Ϊ����һ������������֤��ȷ�Զ����˺ü����ж�
        if(i !=0)
        y = y / 10; 
        a[i] = y%10;
        i++;
    }while(y/10 != 0);
    //result��long���͡�ֻ�����������ڶ�ջ�������ǰ���µó�������ó���������жϷ�Χ
long result = 0;
int j = i;
for(i = 0;i<j;i++){
result = result + a[i]*pow(10,j-i-1);
}

if (flag == 1)
result = -result;
//��Ŀ˵��ÿһ�����������ܺ���
if(-pow(2,31)<= result &&result<=pow(2,31)-1)
        return result;
        else return 0;
    }
};


