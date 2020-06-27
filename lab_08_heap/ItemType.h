/*
 *	@brief	ItemType Ŭ������ ��� �Լ� ���
 *	@date	2019.10.06
 *	@author	��μ�
 */

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
//enum RelationType{Less,Greater,Equal};
class ItemType
{
protected:
	string SongName;
	string Singer;
	string SongMaker;
	string genre;
	string MusicNumber;   //Primary key
	int InTime;
	int Playnum;

public:
	ItemType();
	~ItemType();


	string GetSongName();	//�뷡����
	string GetSinger();		//����
	string GetSongMaker();	//�۰
	string Getgenre();		//�帣
	string GetMusicNumber(); //������ ���� ID
	int GetPlaynum();
	int GetInTime();
	
	
	//Set ������ ���� �Է�����
	void SetSongName(string inName);
	void SetSinger(string inSinger);
	void SetSongMaker(string inMaker);
	void Setgenre(string ingenre);
	void SetMusicNumber(string inMN);
	void SetPlaynum(int inPlaynum);
	void SetInTime(int inInTime);
	void SetRecord(string inName, string inMaker, string inSinger, string ingenre, string inMN,int inPlaynum,int inInTime);

	//���� ���� �������.
	void DisPlaySongNameOnScreen();
	void DisPlaySingerOnScreen();
	void DisPlaySongMakerOnScreen();
	void DisPlaygenreOnScreen();
	void DisPlayMusicNumberOnScreen();
	void DisPlayPlaynumOnScreen();
	void DisPlayInTimeOnScreen();

	void DisPlayRecordOnScreen();

	//Ű����κ��� �Է¹��� �� �־���.
	void SetSongNameFromKB();
	void SetSingerFromKB();
	void SetSongMakerFromKB();
	void SetgenreFromKB();
	void SetMusicNumberFromKB();


	void SetRecordFromKB();
	int ReadDataFromFile(ifstream& fin);
	int WriteDataToFile(ofstream& fout);

	//������ �����ε�
	
	bool operator==(ItemType& item); //Music Number �񱳸� ���� ������ �����ε�
	bool operator+=(ItemType& data); //genrer �񱳸� ���� ������ �����ε�
	bool operator-=(ItemType& data); //Singer �񱳸� ���� ������ �����ε�
	bool operator*=(ItemType& data); //SongName �񱳸� ���� ������ �����ε�
	bool operator>(ItemType& data);	//Music Number�� ũ�⸦ ���ϱ� ���� �����ε�
	bool operator<(ItemType& data);	//Music Number�� ũ�⸦ ���ϱ� ���� �����ε�
	//RelationType CompareById(const ItemType& data);
	friend ostream& operator << (ostream& out, ItemType& item) {
		out <<"data's MusicNumber :" << item.GetMusicNumber() << endl;
		out << "data's Song Name :  " << item.GetSongName() << endl;
		out << "data's Singer :  " << item.GetSinger() << endl;
		out << "data's SongMaker :  " << item.GetSongMaker() << endl;
		return out;
	}
};

