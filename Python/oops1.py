class Shop:              #defining the class
    chocalates = 0
    def mycart(self):
        return self.chocalates*2


# Create an Instance for the class
melody = Shop()
print(melody.mycart())

melody.chocalates = 4
print(melody.mycart())