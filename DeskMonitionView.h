#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DeskMonition.h"

class DeskMonitionView : public QMainWindow
{
    Q_OBJECT

public:
	DeskMonitionView(QWidget *parent = Q_NULLPTR);

private:
    Ui::DeskMonitionClass ui;
};
