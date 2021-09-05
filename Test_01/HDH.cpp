////#define _CRT_SECURE_NO_WARNINGS
////#include <Windows.h>
////#include <stdio.h>
////#include <stdlib.h>
////DWORD Sum;
////
////DWORD WINAPI Summation(LPVOID Param)
////{
////    DWORD Upper = *(DWORD*)Param;
////    for (DWORD i = 1; i <= Upper; i++)
////        Sum += i;
////    return 0;
////}
////
////int main(int argc, char* argv[])
////{
////    DWORD ThreadId;
////    HANDLE ThreadHandle;
////    int Param;
////    //Nhap so luong phan tu
////    do
////    {
////        printf("Nhap n: ");
////        scanf("%d", &Param);
////    } while (Param <= 0);
////
////    ThreadHandle = CreateThread(NULL, 0, Summation, &Param, 0, &ThreadId);
////    WaitForSingleObject(ThreadHandle, INFINITE);
////    CloseHandle(ThreadHandle);
////    printf("sum = %d\n", Sum);
////    system("pause");
////}
//// C++ program for implementation of FCFS
//// scheduling
//#include<iostream>
//using namespace std;
//
//// Function to find the waiting time for all
//// processes
//void findWaitingTime(int processes[], int n,
//	int bt[], int wt[])
//{
//	// waiting time for first process is 0
//	wt[0] = 0;
//
//	// calculating waiting time
//	for (int i = 1; i < n; i++)
//		wt[i] = bt[i - 1] + wt[i - 1];
//}
//
//// Function to calculate turn around time
//void findTurnAroundTime(int processes[], int n,
//	int bt[], int wt[], int tat[])
//{
//	// calculating turnaround time by adding
//	// bt[i] + wt[i]
//	for (int i = 0; i < n; i++)
//		tat[i] = bt[i] + wt[i];
//}
//
////Function to calculate average time
//void findavgTime(int processes[], int n, int bt[])
//{
//	int wt[100], tat[100], total_wt = 0, total_tat = 0;
//
//	//Function to find waiting time of all processes
//	findWaitingTime(processes, n, bt, wt);
//
//	//Function to find turn around time for all processes
//	findTurnAroundTime(processes, n, bt, wt, tat);
//
//	//Display processes along with all details
//	cout << "Processes " << " Burst time "
//		<< " Waiting time " << " Turn around time\n";
//
//	// Calculate total waiting time and total turn
//	// around time
//	for (int i = 0; i < n; i++)
//	{
//		total_wt = total_wt + wt[i];
//		total_tat = total_tat + tat[i];
//		cout << " " << i + 1 << "\t\t" << bt[i] << "\t "
//			<< wt[i] << "\t\t " << tat[i] << endl;
//	}
//
//	cout << "Average waiting time = "
//		<< (float)total_wt / (float)n;
//	cout << "\nAverage turn around time = "
//		<< (float)total_tat / (float)n;
//}
//
//// Driver code
//int main()
//{
//	//process id's
//	int processes[] = { 1, 2, 3 };
//	int n = sizeof processes / sizeof processes[0];
//
//	//Burst time of all processes
//	int burst_time[] = { 10, 5, 8 };
//
//	findavgTime(processes, n, burst_time);
//	return 0;
//}
