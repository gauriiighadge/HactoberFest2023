import turtle

# Set up the screen
wn = turtle.Screen()
wn.title("Bouncing Ball Animation")
wn.bgcolor("white")
wn.setup(width=600, height=400)

# Create the ball
ball = turtle.Turtle()
ball.shape("circle")
ball.color("red")
ball.penup()
ball.speed(0)
ball.goto(0, 0)

# Set initial ball movement speed
ball_dx = 6  # Increased speed in the x-direction
ball_dy = -6  # Increased speed in the y-direction

# Function to move the ball
def move():
    global ball_dx, ball_dy
    ball.setx(ball.xcor() + ball_dx)
    ball.sety(ball.ycor() + ball_dy)

    # Bounce the ball when it hits the screen edges
    if ball.xcor() > 290:
        ball.setx(290)
        ball_dx *= -1

    if ball.xcor() < -290:
        ball.setx(-290)
        ball_dx *= -1

    if ball.ycor() > 190:
        ball.sety(190)
        ball_dy *= -1

    if ball.ycor() < -190:
        ball.sety(-190)
        ball_dy *= -1

    # Call the move function repeatedly
    wn.update()  # Manually update the screen
    wn.ontimer(move, 10)  # Delay in milliseconds for the animation speed

# Turn off automatic screen updates
wn.tracer(0)

# Start the ball movement
move()

# Close the turtle graphics window on click
wn.exitonclick()
