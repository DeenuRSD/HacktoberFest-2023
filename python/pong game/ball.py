from turtle import Turtle

class Ball(Turtle):
    def __init__(self):
        super().__init__()
        self.color("white")
        self.shape("circle")
        self.penup()
        self.x_move = 10
        self.y_move = 10

    def move(self):
        new_x = self.xcor() + self.x_move
        new_y = self.ycor() + self.y_move
        self.goto(new_x, new_y)

    def bounce_y(self):
        # Reverse the y direction
        self.y_move *= -1

    def bounce_x(self):
        # Reverse the x direction
        self.x_move *= -1

    def reset_position(self):
        # Move the ball back to the center of the screen
        self.goto(0, 0)
        # Reverse the x direction to simulate a serve
        self.bounce_x()
