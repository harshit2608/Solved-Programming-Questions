#includeiostrema.h
#includemath.h
#includegraphics.h
#includeconio.h
void main()
{
int gd = DETECT, gm;
int x1, x2, x3, y1, y2, y3, nx1, nx2, nx3, ny1, ny2, ny3;
int xt, yt;
initgraph(&gd, &gm, CTurboC3BGI);
setcolor(5);
coutEnter the co-ordinates of the Triangle ;
cinx1y1x2y2x3y3;
line(x1,y1, x2, y2);
line(x2,y2, x3, y3);
line(x3,y3, x1, y1);
coutEnter the Translation Factor ;
cinxtyt;
nx1 = x1 + xt;
nx2 = x2 + xt;
nx3 = x3 + xt;
ny1 = y1 + yt;
ny2 = y2 + yt;
ny3 = y3 + yt;
line(nx1, ny1, nx2, ny2);
line(nx2, ny2, nx3, ny3);
line(nx3, ny3, nx1, ny1);
getch();
closegraph;
}