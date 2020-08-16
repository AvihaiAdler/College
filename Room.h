#ifndef __ROOM_H
#define __ROOM_H

class Room
{
private:
	enum class eRoomType { regular_class, lab, auditorium };
	int roomNumber, num_of_seats;
	eRoomType roomType;

public:
	const int getRoomNUmber() const;
	const int getNumOfSeats() const;
	const eRoomType getRoomType() const;

	bool setRoomNumber(int roomNumber);
	bool setNumOfSeats(int num_of_seats);
	bool setRoomType(eRoomType roomType);

	const void printDetails() const;
};

#endif
