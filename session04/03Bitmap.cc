/*

000000000000000000000000000000000
000000000000000000000000000000000
000000000000000000000000000000000
000000001100000000011000000000000
000000001100000000011000000000000
000000000000010000000000000000000
000000000000010000000000000000000
000000000000010000000000000000000
000000000000000000000000000000000
000000010000000000010000000000000
000000001111111111100000000000000
000000000000000000000000000000000
000000000000000000000000000000000
000000000000000000000000000000000
000000000000000000000000000000000


 */




class Bitmap {
private:
	enum { ROWS = 30, COLS = 40 };
	int a[ROWS][COLS];
public:
  Bitmap() {
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				a[i][j] = 0;
	}
};

int main() {
	Bitmap b1;
	Bitmap b2(3);
	// no sizes yet...	Bitmap b3(100,200);
	// each method has a last parameter (color) which is an integer (32-bit)
	b2.horizLine(5, 1, 27, 99); // row=5, col 1 to 27, set every pixel to 99
	b2.vertLine(19, 5, 20, 45); // col 19, row 5 to 20, set every pixel to 45
  b2.rect(9,9, 5, 8, 205); // x=9, y = 9, w=5, h=8, set every pixel to 205
	b2.line(28, 7, 8, 25, 92); // diagonal line using Bresenham, set every pixel to 92
	cout << b2;
}
