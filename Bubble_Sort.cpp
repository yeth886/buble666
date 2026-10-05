#include<iostream>
using namespace std;

int main() {
    int arr[8];
    cout<<"Please input 8 numbers: "<<endl;
    for (int i=0;i<8;i++) {
        cin>>arr[i];
    }
    int swapped=0;
    //排好7个，剩下一个必定有序
    for (int i=0;i<7;i++) {
        swapped=0;
        for (int j=0;j<7-i;j++) {
            //每一轮将最大值排到末尾
            if (arr[j]>arr[j+1]) {
                //交换
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                //本轮至少交换了1次
                swapped=1;
            }
        }
        //本轮未交换，说明已经排序好，提前结束
        if (swapped==0)break;
    }
    for (int i=0;i<8;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}