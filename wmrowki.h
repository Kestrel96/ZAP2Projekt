#ifndef WMROWKI_H
#define WMROWKI_H

#include <QDialog>

namespace Ui {
class WMrowki;
}

class WMrowki : public QDialog
{
    Q_OBJECT
    
public:
    explicit WMrowki(QWidget *parent = 0);
    ~WMrowki();
    
private slots:
    void on_spinBox_editingFinished();

private:
    Ui::WMrowki *ui;
};

#endif // WMROWKI_H
