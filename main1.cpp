#include <iostream>

class Point
{
private:
	int x, y;

public:
	Point(int x=0, int y=0) { setX(x); setY(y); }
	const int getX() const { return x; }
	const int getY() const { return y; }

	void setX(int x) { this->x = x;  }
	void setY(int y) { this->y = y;  }

	const void printDetails() const { std::cout << "X: " << x << "\tY: " << y << std::endl; }
};

class Shape
{
private:
	int point_capacity;
	int points_size;		//logical size
	Point* points;

public:
	Shape(int points_size = 0) 
	{ 
		point_capacity = 10;
		setSize(points_size); 
		points = new Point[point_capacity];
	}

	const int getNumOfPonts() const { return points_size; }
	const Point* getPoints() const { return points; }

	void setSize(int size)
	{
		if (size < point_capacity)
			this->points_size = size;
		else
		{
			this->points_size = size;
			point_capacity = size;
		}
	}
	void setPoints(Point* points) { this->points = points; }

	void addPoint(Point point) 
	{ 
		if (points_size >= point_capacity)
		{
			resizePoints(point);
		}
		else
		{
			points[points_size] = point;
			points_size++;
		}
	}
	void resizePoints(Point point)
	{
		point_capacity += 10;
		Point* tmp = new Point[point_capacity];
		for (int i = 0; i < points_size; i++)
		{
			tmp[i] = points[i];
		}
		points_size++;
		delete[] points;
		points = tmp;
	}

	const void printDetails() const
	{
		for (int i = 0; i < points_size; i++)
			points[i].printDetails();
	}

	~Shape()
	{
		std::cout << "in d'tor\n";
		delete[] points;
	}
};


int main()
{
	Point point = Point(1,1);
	std::cout << "Point:\n";
	point.printDetails();

	Shape shape = Shape(0);
	std::cout << "Shape before:\n";
	shape.printDetails();

	shape.addPoint(point);
	std::cout << "Shape after:\n";
	shape.printDetails();

	for (int i = 0, x = 2, y = 3; i < 4; i++, x++, y++)
	{
		shape.addPoint(Point(x, y));
	}

	std::cout << "After 3 more:\n";
	shape.printDetails();

	std::cout << "Get:\n";
	for (int i = 0; i < shape.getNumOfPonts(); i++)
	{
		std::cout << shape.getPoints()[i].getX() << "\t" << shape.getPoints()[i].getY() << std::endl;
	}

	return 0;
}