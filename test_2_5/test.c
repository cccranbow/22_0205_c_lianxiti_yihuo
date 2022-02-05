
//各种题目分析

#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
//
//int main()
//{
//	char input[20]={0};
//	//关机程序
//	system("shutdown -s -t 60");//关机
//
//again:
//	printf("请注意，你的电脑将在1分钟之后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)//strcmp判断字符串相同的函数
//	{
//		system("shutdown -a");
//		printf("已取消\n");
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
//	//找出单身狗
//	int i=0;
//	int ret=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		ret=ret^arr[i];
//	}
//	printf("单身狗：%d\n",ret);
//
//	return 0;
//}
//
//
//int main()
//{
//	//找出只出现一次的数
//	//找出单身狗
//	//LeetCode-136题
//	//暴力求解
//	int arr[]={1,2,3,4,5,1,2,3,4};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
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
//			printf("单身狗：%d\n",arr[i]);
//		}
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	//交换两个整形变量
//	int a=3;
//	int b=5;
//	printf("交换前：a=%d b=%d\n",a,b);
//
//	//有溢出的问题
//	//a=a+b;//a是和  b还是原来的b
//	//b=a-b;//b得到原来的a  a还是和
//	//a=a-b;//a得到原来的b
//
//	//优化
//	a=a^b;
//	b=a^b;
//	a=a^b;
//
//	printf("交换后：a=%d b=%d\n",a,b);
//
//	return 0;
//}
//
//