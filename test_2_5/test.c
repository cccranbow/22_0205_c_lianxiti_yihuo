
//������Ŀ����

#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
//
//int main()
//{
//	char input[20]={0};
//	//�ػ�����
//	system("shutdown -s -t 60");//�ػ�
//
//again:
//	printf("��ע�⣬��ĵ��Խ���1����֮��ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)//strcmp�ж��ַ�����ͬ�ĺ���
//	{
//		system("shutdown -a");
//		printf("��ȡ��\n");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4};
//	//�ҳ�����
//	int i=0;
//	int ret=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		ret=ret^arr[i];
//	}
//	printf("������%d\n",ret);
//
//	return 0;
//}
//
//
//int main()
//{
//	//�ҳ�ֻ����һ�ε���
//	//�ҳ�����
//	//LeetCode-136��
//	//�������
//	int arr[]={1,2,3,4,5,1,2,3,4};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count=0;
//		int j=0;
//		for(j=0;j<sz;j++)
//		{
//			if(arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		if(count==1)
//		{
//			printf("������%d\n",arr[i]);
//		}
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	//�����������α���
//	int a=3;
//	int b=5;
//	printf("����ǰ��a=%d b=%d\n",a,b);
//
//	//�����������
//	//a=a+b;//a�Ǻ�  b����ԭ����b
//	//b=a-b;//b�õ�ԭ����a  a���Ǻ�
//	//a=a-b;//a�õ�ԭ����b
//
//	//�Ż�
//	a=a^b;
//	b=a^b;
//	a=a^b;
//
//	printf("������a=%d b=%d\n",a,b);
//
//	return 0;
//}
//
//