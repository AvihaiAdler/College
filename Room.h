#ifndef __ROOM_H
#define __ROOM_H

class Room
{
private:
	enum class eRoomType { regular_class, lab, auditorium };
	int roomNumber, num_of_seats;
	eRoomType roomType;

public:
	Room(const eRoomType type, int roomNumber, int num_of_seats);
	Room(Room& other);
	Room(Room&& room);
	~Room();

	const int getRoomNUmber() const;
	const int getNumOfSeats() const;
	const eRoomType getRoomType() const;

	bool setRoomNumber(int roomNumber);
	bool setNumOfSeats(int num_of_seats);
	bool setRoomType(eRoomType roomType);

	const Room& operator=(const Room& other);
	friend std::ostream& operator<<(std::ostream& o, const Room& other);
};

#endif
