PI = 3.14159
n_points = 12
for i in range(n_points):
    radius = 1.0 * i
    surface = 4.0 * PI * radius**2
    volume = (4.0/3.0) * PI * radius**3
    print radius, surface, volume
