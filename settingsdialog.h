#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QCommonStyle>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QPushButton>
#include <QDialogButtonBox>
#include <QColor>
#include "nonobutton.h"
#include "defines.h"

class settingsDialog : public QDialog
{
    Q_OBJECT

public:
    settingsDialog(QWidget *parent, int w, int h, qnono::paintValues pVals);
    ~settingsDialog();
    int width, height;
    int sWidth();
    int sHeight();
    qnono::paintValues paintValues;
    qnono::paintValues sPaintValues();


private:
    QHBoxLayout *sizeBoxLayout;
    QVBoxLayout *dialogLayout;
    QGridLayout *optionsGrid;

    QLabel *heightLabel;
    QSpinBox *widthBox;
    QLabel *widthLabel;
    QSpinBox *heightBox;

    QCommonStyle *style;
    QLabel *colorSolidLabel;
    nonobutton_base *colorSolidButton;
    QLabel *colorBlankLabel;
    nonobutton_base *colorBlankButton;
    QLabel *colorUndecidedLabel;
    nonobutton_base *colorUndecidedButton;
    QLabel *colorHintSolidLabel;
    nonobutton_base *colorHintSolidButton;
    QLabel *colorHintBlankLabel;
    nonobutton_base *colorHintBlankButton;

    QLabel *fieldSizeLabel;
    QSpinBox *fieldSizeBox;

    QPushButton *resetButton;

    QDialogButtonBox *buttonBox;

    void paintColorButtons();
    void sizeColorButtons(int size);
    QColor getColor(QColor pColor);

private slots:
    void setSolid();
    void setBlank();
    void setUndecided();
    void setHintSolid();
    void setHintBlank();
    void setFieldSize();
    void reset();
};

#endif // SETTINGSDIALOG_H
