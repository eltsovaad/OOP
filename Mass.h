#pragma once
class Mass
{
public:
	Mass();
	~Mass();
	void show();
	int find_min();
	int sum_after_zero();
	void update_mass();
private:
	int N;
	int* massive;

};

