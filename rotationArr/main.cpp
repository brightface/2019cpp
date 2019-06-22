//2019.6.22.brightfaceKim

void rotation(int arr[], int, int );
void printArr(int arr[], int);
#include <iostream>
#include <algorithm>
#include <queue>// 오류난다 
#include <vector>
#define SIZE 10
int arr[SIZE];

//함수 void rotation
//void printrotation
//SEQ
//테스트 케이스 입력을 받는다.T <- 3
//입력될 배열의 크기를 받는다.size <- 10
//바꿀 크기를 받는다. k <- 3
//배열의 원소를 받는다. arr[i]<-
//FOR i to n
//  if i != k
//	바꿀 크기의 원소들을 새로운 행렬에 저장한다. roarr[i] <- arr[i]
//	else  새로운 큐를 변수로 설정하여 바꿀 원소들을 저장하고 그 이후에 는 그 다음을 배열에 저장한다. 
	//FOR k+1 to n-k
		//new arr1 <- arr[i]
	//For n-k+1 to n
		//arr1<- roarr[i] //그래서 큐를 사용하는구나
// 
//저장한후 다시 새로운 행렬에 저장한 원소들을 여기에 저장한다.

using namespace std;
int main()
{
	
	int t;
	int size; //배열의 크기
	int k;// 바꾸는 크기
	cin >> t;
	while (t--) {
		cin >> size >> k;
		rotation(&arr[size], size,k);
		printArr(&arr[size], size);
		cout << endl;
	}
	
}
void rotation(int arr[], int size,int k) {
	int tmpArr[SIZE];
	int tmp;
	vector<int> rotationArr;
	//int roarr[size];// 와 여기서도 문제가 발생하네
	for (int i=0; i < size; i++) {
		cin >> tmp;
		tmpArr[i]=tmp;
	}
	
	for (int i = 0; i < size ; i++) {
		if (i < k) {
			rotationArr.push_back(tmpArr[i]);
		}
		else {
			arr[i - k] = tmpArr[i];
			 // 수학적으로 접근 , 코딩적으로 접근하면 arr 하나 더 만들어서 하면됨
		}
	}
	//reverse(rotationArr.begin(),rotationArr.end());
	for (int i = size-k ; i < size; i++)
	{
		arr[i] = rotationArr[i-size+k];	
	}

}
void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

}