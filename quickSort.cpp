#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int a[100];
int n;
void quickSort(int left, int right) 
{
    int i, j, comp, swapTmp,numOfTrips{0};
    if (left > right)
        return;
    comp = a[left];
    i = left;
    j = right;
    while (i!=j)
    {
        while (a[j] >= comp && i < j)
        {
            j--;
        }
        while (a[i]<= comp && i < j)
        {
            i++;
        }
        if (i<j)//交换
        {
            swapTmp = a[i];
            a[i] = a[j];
            a[j] = swapTmp;
        }
    }
    
    a[left] = a[i];
    a[i] = comp;
    swapTmp = a[left];
    a[left ] = a[left + 1];
    a[left + 1] = swapTmp;
    numOfTrips++;
    


    /*a[left] = a[i];
    a[i] = comp;
    quickSort(left, i - 1);
    quickSort(i + 1, right);*/
}
int main()
{
    std::cout << "请输入想要排序几个数：" << std::endl;
    std::cin >> n;//输入想要排序n个数
    std::cout << "请依次输入想要排序的数列" << std::endl;
    for (size_t i = 1; i <=n; i++)
    {
        std::cin >> a[i];
    }
    quickSort(1, n);
    for (size_t i = 1; i <= n; i++)
    {
        std::cout << a[i];
    }

    return 0;
}
