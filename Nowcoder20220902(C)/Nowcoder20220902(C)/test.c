#define _CRT_SECURE_NO_WARNINGS 1

//JZ17 ��ӡ��1������nλ��
int* printNumbers(int n, int* returnSize) {
    //Ҫ��ӡԪ�صĸ���
    *returnSize = (int)pow(10, n) - 1;
    //�����ڴ�
    int* arr = (int*)malloc(*returnSize * sizeof(int));
    //���ݴ洢
    int i = 0;
    for (i = 0; i < *returnSize; i++) {
        arr[i] = i + 1;
    }
    //����
    return arr;
}

//HJ73 �������ڵ�����ת��
#include<stdio.h>
int main() {
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d%d%d", &year, &month, &day);
    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int i = 0;
    int days = 0;
    //��¼��������������
    for (i = 1; i < month; i++)
    {
        days += arr[i];
    }
    //�ټ���ɢ������
    days += day;
    //��������������2�������£�������1
    if (((year % 4 == 0 && year % 100 != 0) ||
        (year % 100 != 0 && year % 400 == 0)) && month > 2)
    {
        days += 1;
    }
    printf("%d", days);

    return 0;
}

//HJ76 ��Ƴ�˹����
#include<stdio.h>
#include<math.h>
//����һ��������
int main()
{
    int m = 0;
    scanf("%d", &m);
    if (m == 1)
    {
        printf("%d", 1);
        return 0;
    }
    int i = 0;
    int j = 0;
    for (i = 1, j = 0; i < 1000000; i += 2)
    {
        int k = 0;
        int j = 0;
        int sum = 0;
        for (j = 0, k = i; j < m; j++, k += 2)
        {
            sum = sum + k;
            if ((int)pow(m, 3) == sum)
            {
                break;
            }
        }
        if ((int)pow(m, 3) == sum)
        {
            break;
        }
    }
    j = 0;
    for (j = 0; j < m - 1; j++)
    {
        printf("%d%c", i, '+');
        i += 2;
    }
    printf("%d", i);
    return 0;
}
//�����������ɷ�
int main()
{
    int m = 0;
    scanf("%d", &m);
    int i = m * (m - 1) + 1;
    int j = 0;
    for (j = 0; j < m - 1; j++)
    {
        printf("%d%c", i, '+');
        i += 2;
    }
    printf("%d", i);
    return 0;
}

//HJ100 �Ȳ�����
#include<stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", 2 * n + n * (n - 1) * 3 / 2);
}

//HJ97 �Ǹ�����
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    double sum = 0;
    int count = 0;
    double countp = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int num = 0;
        scanf("%d", &num);
        if (num < 0)
            count++;
        if (num > 0)
        {
            sum += num;
            countp++;
        }
    }

    if (countp == 0)
    {
        printf("%d ", count);
        printf("%.1lf", 0.0);
    }
    else
    {
        printf("%d ", count);
        printf("%.1lf", sum / countp);
    }
    return 0;
}

//JZ11 ��ת�������С����
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    int i = 0;
    for (i = 1; i < rotateArrayLen; i++)
    {
        if (rotateArray[i - 1] > rotateArray[i])
        {
            return rotateArray[i];
        }
    }
    return rotateArray[0];
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = minNumberInRotateArray(arr, len);
    printf("%d", num);
    return 0;
}
