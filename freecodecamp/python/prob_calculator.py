import copy
import random
# Consider using the modules imported above.


class Hat:
    # Initialize the hat with the number of balls of each color.
    def __init__(self, **kwargs):
        self.contents = []
        for key, value in kwargs.items():
            for i in range(value):
                self.contents.append(key)

        self._initial_contents = copy.copy(self.contents)

    # reset the hat to its initial state
    def reset(self):
        self.contents = copy.copy(self._initial_contents)

    # Draw a number of balls from the hat.
    def draw(self, num_balls):
        try:
            drawn = random.sample(self.contents, num_balls)
        except ValueError:
            drawn = copy.copy(self.contents)

        for item in drawn:
            self.contents.remove(item)

        if len(self.contents) == 0:
            self.contents = copy.copy(self._initial_contents)

        return drawn


def experiment(hat, expected_balls, num_balls_drawn, num_experiments):

    success = 0
    # Loop through the experiments.
    for i in range(num_experiments):
        working_copy = copy.copy(expected_balls)
        hat.reset()
        drawn_balls = hat.draw(num_balls_drawn)
            
        for color, count in expected_balls.items():
            for _ in range(count):
                if color in drawn_balls:
                    drawn_balls.remove(color)
                    working_copy[color] -= 1

        if sum(v for v in working_copy.values()) == 0:
            success += 1
            
    return success / num_experiments
