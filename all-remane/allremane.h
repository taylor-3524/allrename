#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_allremane.h"

class allremane : public QMainWindow
{
	Q_OBJECT

public slots:
	void openPath_btn_Clicked();
	void addLastName_btn_Clicked();
	void search_btn_Clicked();

public:
	allremane(QWidget *parent = Q_NULLPTR);

private:
	Ui::allremaneClass ui;
};
