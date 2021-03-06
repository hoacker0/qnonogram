#ifndef DIMENSIONDIALOG_H
#define DIMENSIONDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QDialogButtonBox>

class dimensionDialog : public QDialog        
{
    Q_OBJECT

public:
    //dimensionDialog(QWidget *parent);
    dimensionDialog(QWidget *parent, int *w, int *h);
    int *width, *height;
    int pWidth();
    int pHeight();

private:
    QHBoxLayout *sizeBoxLayout;
    QVBoxLayout *dialogLayout;
    QLabel *heightLabel;
    QSpinBox *widthBox;
    QLabel *widthLabel;
    QSpinBox *heightBox;
    QDialogButtonBox *buttonBox;
};

#endif // DIMENSIONDIALOG_H
