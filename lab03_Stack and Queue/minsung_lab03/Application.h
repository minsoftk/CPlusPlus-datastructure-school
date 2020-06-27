/*
 *	@brief	���ø����̼� Ŭ������ ���
 *	@date	2019.10.06
 *	@author	��μ�
 */


#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "ItemType.h"
#include  "PlayItem.h"
//#include "SortedLinkedList.h"	
#include "CircularQueue.h" ����ť
#include "SortedList.h" //������ ����Ʈ
#include "CircularQueueDoublyLinkedList.h"
#include "CircularQueueDoublyIterator.h"

#define FILENAMESIZE 1024
using namespace std;

class Application
{
private:
	ifstream m_InFile; //input file descriptor
	ofstream m_OutFile;//output file descriptor
	SortedList<ItemType> MasterList;//������ ����Ʈ
	CircularQueue<PlayItem> PlayList;//���ø��� PlayItem Class�� ���� m_PlayList
	CircularQueueDoublyLinkedList<PlayItem> LinkedPlayList;
	
	int m_Command;//current command number
	int Order; //PlayList�� ��ϵ� ������ ���� ����
	
public:
	Application() {
		m_Command = 0;
		Order = 0;
		
	}
	~Application() {}
	void Run();

	int GetCommand();
	int AddMusic();//���� �߰�
	void DisPlayAllMusic();//��� ���� ���
	int OpenInFile(char* fileName);
	int OpenOutFile(char* fileName);
	int ReadDataFromFile();//���Ͽ��� ���� �о����
	int WriteDataToFile();//���� ���Ͽ� ����
	int RetrieveMusic();// ����Ÿ��,����,�帣 ���� �����ϴ� Sorted Array �ҷ����� �Լ�.
	int DeleteMusic();	//Master List���� ���� ����
	void ReplaceMusic();//Master List���� ���� ���� ����
	int AddToPlayList();//Ű���ε�� ID�� �о master���� �˻��ϰ�
						//�����ϸ� Play List�� �߰�
						//���� PlayList�� Full�̸� �����Ȱ�
						//������ ���ο� �� �߰�.
	void PlayInsertOrder();//Play List ��� ����� ����� ��ȣ ����
							//������ ��ȣ numPlay +1
							// ���� �Է� ������ ���ѹݺ�
	
	void DeletePlayList();//PlayList���� �� ����
	
			
};