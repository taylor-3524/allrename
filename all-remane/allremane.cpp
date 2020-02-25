#include "allremane.h"
#include"qfiledialog.h"
#pragma execution_character_set("utf-8")		//��ֹ����
#include<QFile>
allremane::allremane(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.openPath_btn, SIGNAL(clicked()), this, SLOT(openPath_btn_Clicked()));
	connect(ui.search_btn, SIGNAL(clicked()), this, SLOT(search_btn_Clicked()));
	connect(ui.addLastName_btn, SIGNAL(clicked()), this, SLOT(addLastName_btn_Clicked()));
}
QString filePath;

	void allremane::openPath_btn_Clicked(){
		filePath = QFileDialog::getExistingDirectory(this, "ѡ��Ŀ¼", "./", QFileDialog::ShowDirsOnly);
		ui.Path_text->setText(filePath);
		//��ʼ��ȡ�ļ����µ������ļ�
		QDir *dir = new QDir(filePath);
		QStringList filter;
		QList<QFileInfo> *fileInfo = new QList<QFileInfo>(dir->entryInfoList(filter));

/*
�ļ���Ŀ��fileInfo->count();

�ļ����ƣ�fileInfo->at(i).fileName();

�ļ�·���������ļ�������fileInfo->at(i).filePath();
*/
		ui.fileInfo_text->setText("");
		
		int unSignedFileCount= fileInfo->count()-2;
		for (int i = 2; i < fileInfo->count(); i++) {
			QByteArray fileName = fileInfo->at(i).fileName().toLatin1();
			ui.fileInfo_text->append(fileName.data());
			QString ss = fileName.data();
			if (ss.indexOf(".")!=-1)	unSignedFileCount--;
		}
		ui.fileInfo_text->append("-----------------------");
		ui.fileInfo_text->append("û�к�׺���ļ�����"+QString::number(unSignedFileCount));
		ui.fileInfo_text->append("��·�����ļ�������" + QString::number(fileInfo->count()-2));
		ui.fileInfo_text->append("-----------------------");
}
	void allremane::addLastName_btn_Clicked() {
		//bool ok = QFile::rename(path1,path2);  ������		
		//QFile::rename("D://file//Visual Studio 2015//Projects//all-remane//all-remane//text", "D://file//Visual Studio 2015//Projects//all-remane//all-remane//text.txt");

		QDir *dir = new QDir(filePath);
		QStringList filter;
		QList<QFileInfo> *fileInfo = new QList<QFileInfo>(dir->entryInfoList(filter));
		int flag = 0;
		for (int i = 2; i < fileInfo->count(); i++) {
			QByteArray fileName = fileInfo->at(i).fileName().toLatin1();
			QString ss = fileName.data();
			if (ss.indexOf(".") == -1) {
				//��λ����û�к�׺���ļ�
				QFile::rename(fileInfo->at(i).filePath(), fileInfo->at(i).filePath() + ".mp4");
			}
		}
		ui.fileInfo_text->setText("");
		ui.fileInfo_text->append("-----------------------\n��������ɣ�\n-----------------------");
	}

	void allremane::search_btn_Clicked() {
		ui.fileInfo_text->setText("");
		QDir *dir = new QDir(filePath);
		QStringList filter;
		QList<QFileInfo> *fileInfo = new QList<QFileInfo>(dir->entryInfoList(filter));
		int unSignedFileCount = fileInfo->count() - 2;
		for (int i = 2; i < fileInfo->count(); i++) {
			QByteArray fileName = fileInfo->at(i).fileName().toLatin1();
			ui.fileInfo_text->append(fileName.data());
			QString ss = fileName.data();
			if (ss.indexOf(".") != -1)	unSignedFileCount--;
		}
		ui.fileInfo_text->append("-----------------------");
		ui.fileInfo_text->append("û�к�׺���ļ�����" + QString::number(unSignedFileCount));
		ui.fileInfo_text->append("��·�����ļ�������" + QString::number(fileInfo->count() - 2));
		ui.fileInfo_text->append("-----------------------");
	}
