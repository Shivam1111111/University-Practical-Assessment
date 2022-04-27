class Train:
    
    def __init__(self, name, number,seats):
        self.name = name
        self.number = number
        self.seats = seats
        self.s_num = list()
        for i in range(seats):
            self.s_num.append(i)


    def get_status(self):
        print(f"Train name is {self.name}")
        print(f"Number is {self.number}")
        print(f"seats are {self.seats}")
        print(f"Available seat numbers {self.s_num}")


    def book_seat(self):

        if(self.seats > 0):
            print(f"your seat is Booked and seat number is {self.seats}")
            self.seats = self.seats - 1
            self.s_num.remove(self.seats)
        else:
            print("Sory there is no seat")


    def cancal_seat(self, seat_n):

        print("Your seat is cancled: ")
        self.seats = self.seats + 1
        self.s_num.append(seat_n)
        print(f"Seats availabe {self.s_num}")



interCity = Train("Inter City", 1234, 10)

interCity.get_status()
interCity.book_seat()
interCity.get_status()
interCity.book_seat()
interCity.book_seat()
interCity.book_seat()
interCity.get_status()
interCity.cancal_seat(10)
    

