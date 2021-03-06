#ifndef NONOGRAM_H
#define NONOGRAM_H
#include <ctime> 
#include <cstdlib>
#include "nonosolver.h"

class nonoengine {
 private:
	size_t width, height;
	int solids, dots;
	size_t *field;
	vector<size_t> **xAxis;
	vector<size_t> **yAxis;
	void generateField();
	void generatePuzzle();
	double probability(int above, int left);

 public:
	nonoengine(int w, int h);
	~nonoengine();
	void print();
	vector<size_t>** getXAxis();
	vector<size_t>** getYAxis();
	size_t* getField();
};
#endif
