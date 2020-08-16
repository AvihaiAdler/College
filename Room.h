#ifndef __ROOM_H
#define __ROOM_H

class Room
{
private:
	enum class RoomType { regular_class, lab, auditorium };
	int roomNumber, num_of_seats;
	RoomType roomType;

public:
	Room(RoomType type, int number, int num_of_seats);
	int getRoomNUmber();
	int getNumOfSeats();
	RoomType getRoomType();

	bool setRoomNumber(int roomNumber);
	bool setNumOfSeats(int num_of_seats);
	bool setRoomType(RoomType roomType);

	void printDetails();
};

#endif
