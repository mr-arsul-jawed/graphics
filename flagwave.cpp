// 
#include<graphics.h>

void flag(int x, int y){
	int arr[] = {200, 50,
				400 - y, 50 + x,
				400 - y, 200 + x,
				200, 200,
				200, 450,
				180, 450,
				180, 50,
				200, 50,
				200, 200};
	drawpoly (9, arr);
	circle(300 - y,125 + x,24);
	line(200,100,400 - y,100 + x);
	line(200,150,400 - y,150 + x);
}

//int main(){
//	int gd = DETECT;
//	int gm;
//	initgraph(&gd, &gm, (char*)"");
//	flag(0,0);
//	getch();
//	closegraph();
//	return 0;
//}

int main(){
	int gd = DETECT;
	int gm;
	initgraph(&gd, &gm, (char*)"");
	while(true){
		for(int i = 1 ; i < 2; i++){
			cleardevice();
			flag(i,i);
			delay(200);
			
		}
		for(int i = 3; i > 0; i--){
			cleardevice();
			flag(i,i);
			delay(200);
		}
		int j = 0;
		for(int i = 1; i > -2; i--,j--){
			cleardevice();
			flag(i, -j);
			delay(200);
			}
		}
	
	getch();
	closegraph();
	return 0;
}
