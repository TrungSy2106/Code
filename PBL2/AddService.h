#ifndef ADDSERVICE_H
#define ADDSERVICE_H

#include <QDialog>

namespace Ui {
class AddService;
}

class AddService : public QDialog
{
    Q_OBJECT

public:
    explicit AddService(QWidget *parent = nullptr);
    ~AddService();

private slots:
    void on_AddSerbtn_clicked();

private:
    Ui::AddService *ui;
};

#endif // ADDSERVICE_H
