#include <stdio.h>
#include <conio.h>

void intro(){
	printf("2016004020 황한혁입니다 게임을 좋아합니다.")
}

void main(){
	char a;
	printf("type 1!");
	a = getch();
	if(a=='1'){
		printf("Hwang Hanhyeok!");
	}
	else if(a=='2'){
		intro();
	}
}