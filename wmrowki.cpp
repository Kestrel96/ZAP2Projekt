#include "wmrowki.h"
#include "ui_wmrowki.h"

#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include "lista.h"
#include "global.h"


int i=0;

bool got_x=0;
bool got_y=0;

 Mrowki::WMrowki(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WMrowki)
{
    ui->setupUi(this);
}

WMrowki::~WMrowki()
{
    delete ui;
}

void WMrowki::on_spinBox_editingFinished()
{

}
