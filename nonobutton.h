#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H
#include <QPushButton>
#include <QDrag>
#include <QDragEnterEvent>
#include <QMouseEvent>
#include <QMimeData>

#define SIZE 20

class nonobutton : public QPushButton {
    Q_OBJECT

public:
    nonobutton(QWidget *parent, int *b, bool *f);

private:
   int *button;
   bool *first;
   bool processed;

protected:
	void dragEnterEvent(QDragEnterEvent *e);
	void mousePressEvent(QMouseEvent *e);
	
 signals:
	void solid();
	void dot();
};
#endif
