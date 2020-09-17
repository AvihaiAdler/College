#ifndef __ROOM_H
#define __ROOM_H

class Room
{
public:
	enum class eRoomType { regular_class, lab, auditorium };
private:
	int roomNumber, num_of_seats;
	eRoomType roomType;

public:
	Room(const eRoomType type, int roomNumber, int num_of_seats);
	virtual ~Room();

	int getRoomNUmber() const;
	int getNumOfSeats() const;
	const eRoomType getRoomType() const;

	bool setRoomNumber(int roomNumber);
	bool setNumOfSeats(int num_of_seats);
	bool setRoomType(eRoomType roomType);

	const Room& operator=(const Room& other);
	friend std::ostream& operator<<(std::ostream& o, const Room& other);
};

#endif
