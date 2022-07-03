
class Rectangle:

    # Constructor
    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height

    # get string representation of rectangle
    def __repr__(self):
        return "Rectangle(width={}, height={})".format(self.width, self.height)

    # set width to new value
    def set_width(self, width):
        self.width = width

    # set height to new value
    def set_height(self, height):
        self.height = height

    # get area of rectangle
    def get_area(self):
        area = self.width * self.height
        return area

    # get perimeter of rectangle
    def get_perimeter(self):
        perimeter = 2 * (self.width + self.height)
        return perimeter

    # get diagonal of rectangle
    def get_diagonal(self):
        diagonal = (self.width ** 2 + self.height ** 2) ** 0.5
        return diagonal

    # get picture of rectangle
    def get_picture(self):
        picture = ""
        # check if rectangle is big enough to be drawn
        if self.width > 30 or self.height > 30:
            return "Too big for picture."
        # draw rectangle
        for i in range(self.height):
            picture += "*" * self.width
            picture += "\n"
        return picture

    # get amount of times rectangle fits in other rectangle
    def get_amount_inside(self, shape):
        amount_inside = 0
        # check how many times rectangle fits in other rectangle
        if self.width > shape.width and self.height > shape.height:
            amount_inside = (self.width // shape.width) * \
                (self.height // shape.height)
        return amount_inside


class Square(Rectangle):
    # Constructor
    def __init__(self, side=0):
        super().__init__(side, side)

    # get string representation of square
    def __repr__(self):
        return "Square(side={})".format(self.width)

    # set side to new value
    def set_height(self, side):
        super().set_height(side)
        super().set_width(side)
    
    # set side to new value
    def set_width(self, side):
        super().set_height(side)
        super().set_width(side)

    # set side to new value
    def set_side(self, side):
        self.set_height(side)
        self.set_width(side)
