class Car {
	int _year;
	int _engine;
	int _speed;
	char* _manufacturer;
public:
	Car(int year, int engine, int speed, const char* manufacturer);

	// Destructor
	~Car();

	void move();

	void printModel();
};