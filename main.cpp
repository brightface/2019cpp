//2019.6.22.brightfaceKim

void rotation(int arr[], int, int );
void printArr(int arr[], int);
#include <iostream>
#include <algorithm>
#include <queue>// �������� 
#include <vector>
#define SIZE 10
int arr[SIZE];

//�Լ� void rotation
//void printrotation
//SEQ
//�׽�Ʈ ���̽� �Է��� �޴´�.T <- 3
//�Էµ� �迭�� ũ�⸦ �޴´�.size <- 10
//�ٲ� ũ�⸦ �޴´�. k <- 3
//�迭�� ���Ҹ� �޴´�. arr[i]<-
//FOR i to n
//  if i != k
//	�ٲ� ũ���� ���ҵ��� ���ο� ��Ŀ� �����Ѵ�. roarr[i] <- arr[i]
//	else  ���ο� ť�� ������ �����Ͽ� �ٲ� ���ҵ��� �����ϰ� �� ���Ŀ� �� �� ������ �迭�� �����Ѵ�. 
	//FOR k+1 to n-k
		//new arr1 <- arr[i]
	//For n-k+1 to n
		//arr1<- roarr[i] //�׷��� ť�� ����ϴ±���
// 
//�������� �ٽ� ���ο� ��Ŀ� ������ ���ҵ��� ���⿡ �����Ѵ�.

using namespace std;
int main()
{
	
	int t;
	int size; //�迭�� ũ��
	int k;// �ٲٴ� ũ��
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
	//int roarr[size];// �� ���⼭�� ������ �߻��ϳ�
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
			 // ���������� ���� , �ڵ������� �����ϸ� arr �ϳ� �� ���� �ϸ��
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