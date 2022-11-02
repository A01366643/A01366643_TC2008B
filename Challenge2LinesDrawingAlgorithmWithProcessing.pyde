def linedrawing(x1, y1, x2, y2):
    
    negpos = 1
    
    if x1 > x2:
        negpos = -1
    
    dx = x2 - x1
    dy = y2 - y1

    for x in range(x1, x2+1, negpos):
        y = y1 + dy * (x - x1) / dx
        point(x,y)
    
    
size(400, 400)
linedrawing(1, 2, 100, 20)
linedrawing(10,200,50,10)
linedrawing(300,300,10,10)
linedrawing(200,300,250,50)
linedrawing(350,350,100,300)
