#ifndef MINE_H
class Mine
{
private:
	int prev_row;
	int prev_col;
	void field();
	void set_mines();
	void move();
	void find_mines();
public:
	Mine();
	void start_mine();
	~Mine();
};
#endif
