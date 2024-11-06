#include <iostream>
#include "yourgraphics.h"
#include <fstream>

using namespace std;

void movements_after_breaks(int& movement) { //this function changes movements of the ball upon collision with horizontal sides of the bricks
	if (movement == 2)  
		movement = 1;
	else if (movement == 3)
		movement = 5;
	else if (movement == 4)
		movement = 6;
	else if (movement == 5)
		movement = 3;
	else if (movement == 6)
		movement = 4;
}

void brick_x_movement(int& movement) { //this function changes movements of the ball upon collision with vertical sides of the bricks
	if (movement == 3)
		movement = 4;
	else if (movement == 4)
		movement = 3;
	else if (movement == 5)
		movement = 6;
	else if (movement == 6)
		movement = 5;
}


int main() {

	cls();

	showConsoleCursor(true);
	bool flag = true;
	int bat_x1, bat_y1, bat_x2, bat_y2;
	int ball_x1, ball_y1, ball_x2, ball_y2;
	int movement;
	int bricks_row1_x1, bricks_row1_x2, bricks_row2_x1, bricks_row2_x2, bricks_row3_x1, bricks_row3_x2, bricks_row4_x1, bricks_row4_x2, bricks_row5_x1, bricks_row5_x2;
	int lives;
	int score;
	bool b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20, b21, b22, b23, b24, b25, b26, b27, b28, b29, b30, b31, b32, b33, b34, b35, b36, b37, b38, b39, b40, b41, b42, b43, b44, b45, b46, b47, b48, b49, b50;

	bricks_row1_x1 = 50, bricks_row1_x2 = 170, bricks_row2_x1 = 50, bricks_row2_x2 = 170, bricks_row3_x1 = 50, bricks_row3_x2 = 170, bricks_row4_x1 = 50, bricks_row4_x2 = 170, bricks_row5_x1 = 50, bricks_row5_x2 = 170;
	char ch;

	int h31, h32, h33, h34, h35, h36, h37, h38, h39, h40;
	int scores[6];
	int high1, high2, high3, high4, high5;
	int option;
	ofstream save_game;
	ifstream load_game;

	

	cout << "W";
	delay(200);

	cout << "E";
	delay(200);

	cout << "L";
	delay(200);

	cout << "C";
	delay(200);

	cout << "O";
	delay(200);

	cout << "M";
	delay(200);

	cout << "E!";
	delay(500);


	cout << endl << endl;
	cout << "INSTRUCTIONS " << endl;
	cout << "\t\t\t\t\t\tKEYS" << "\t\t" << "    FUNCTIONS" << endl << endl;
	cout << "\t\t\t\t\t\t a" << "\t\t" << " Paddle moves LEFT" << endl;
	cout << "\t\t\t\t\t\t d" << "\t\t" << " Paddle moves RIGHT" << endl;
	cout << "\t\t\t\t\t\t s" << "\t\t" << " SAVE and QUIT" << endl;
	cout << "\t\t\t\t\t\t p" << "\t\t" << " PAUSES the game" << endl;
	cout << "\t\t\t\t\t\t r" << "\t\t" << " RESUMES the game" << endl << endl << endl << endl;

	cout << "AVAILABLE OPTIONS" << endl << endl;
	cout << "\t\t\t\t\t\tOPTIONS" << "\t\t" << "       MENU" << endl << endl;
	cout << "\t\t\t\t\t\t   1" << "\t\t" << "Start a NEW GAME" << endl;
	cout << "\t\t\t\t\t\t   2" << "\t\t" << "Start the SAVED GAME" << endl << endl << endl;
	cout << "SELECT AN OPTION: ";
	cin >> option;

	while (option < 1 || option > 2) {
		cout << "ERROR! ENTER A VALID OPTION: ";
		cin >> option;
	}


	gotoxy(0, 0);
	cls();

	if (option == 1) {
		bat_x1 = 525, bat_y1 = 675, bat_x2 = 725, bat_y2 = 685;
		ball_x1 = 610, ball_y1 = 380, ball_x2 = 630, ball_y2 = 400;
		movement = 1;
		lives = 3;
		score = 0;
		b1 = false, b2 = false, b3 = false, b4 = false, b5 = false, b6 = false, b7 = false, b8 = false, b9 = false, b10 = false, b11 = false, b12 = false, b13 = false, b14 = false, b15 = false, b16 = false, b17 = false, b18 = false, b19 = false, b20 = false, b21 = false, b22 = false, b23 = false, b24 = false, b25 = false, b26 = false, b27 = false, b28 = false, b29 = false, b30 = false, b31 = false, b32 = false, b33 = false, b34 = false, b35 = false, b36 = false, b37 = false, b38 = false, b39 = false, b40 = false, b41 = false, b42 = false, b43 = false, b44 = false, b45 = false, b46 = false, b47 = false, b48 = false, b49 = false, b50 = false;
		h31 = 2, h32 = 2, h33 = 2, h34 = 2, h35 = 2, h36 = 2, h37 = 2, h38 = 2, h39 = 2, h40 = 2;
	
	
	}
	else if (option == 2) {

		load_game.open("Save.txt");

		load_game >> bat_x1;
		load_game >> bat_x2;
		load_game >> bat_y1;
		load_game >> bat_y2;
		load_game >> ball_x1;
		load_game >> ball_x2;
		load_game >> ball_y1;
		load_game >> ball_y2;
		load_game >> b1;
		load_game >> b2;
		load_game >> b3;
		load_game >> b4;
		load_game >> b5;
		load_game >> b6;
		load_game >> b7;
		load_game >> b8;
		load_game >> b9;
		load_game >> b10;
		load_game >> b11;
		load_game >> b12;
		load_game >> b13;
		load_game >> b14;
		load_game >> b15;
		load_game >> b16;
		load_game >> b17;
		load_game >> b18;
		load_game >> b19;
		load_game >> b20;
		load_game >> b21;
		load_game >> b22;
		load_game >> b23;
		load_game >> b24;
		load_game >> b25;
		load_game >> b26;
		load_game >> b27;
		load_game >> b28;
		load_game >> b29;
		load_game >> b30;
		load_game >> b31;
		load_game >> b32;
		load_game >> b33;
		load_game >> b34;
		load_game >> b35;
		load_game >> b36;
		load_game >> b37;
		load_game >> b38;
		load_game >> b39;
		load_game >> b40;
		load_game >> b41;
		load_game >> b42;
		load_game >> b43;
		load_game >> b44;
		load_game >> b45;
		load_game >> b46;
		load_game >> b47;
		load_game >> b48;
		load_game >> b49;
		load_game >> b50;
		load_game >> movement;
		load_game >> lives;
		load_game >> score;
		load_game >> h31;
		load_game >> h32;
		load_game >> h33;
		load_game >> h34;
		load_game >> h35;
		load_game >> h36;
		load_game >> h37;
		load_game >> h38;
		load_game >> h39;
		load_game >> h40;

	}

		for (int i = 0; i < 10; i++) {

			drawRectangle(bricks_row1_x1, 50, bricks_row1_x2, 90, 0, 0, 0, 0, 150, 255);
			bricks_row1_x1 = bricks_row1_x1 + 120;
			bricks_row1_x2 = bricks_row1_x2 + 120;
			drawRectangle(bricks_row2_x1, 90, bricks_row2_x2, 130, 0, 0, 0, 0, 255, 0);
			bricks_row2_x1 = bricks_row2_x1 + 120;
			bricks_row2_x2 = bricks_row2_x2 + 120;
			drawRectangle(bricks_row3_x1, 130, bricks_row3_x2, 170, 0, 0, 0, 0, 150, 255);
			bricks_row3_x1 = bricks_row3_x1 + 120;
			bricks_row3_x2 = bricks_row3_x2 + 120;
			drawRectangle(bricks_row4_x1, 170, bricks_row4_x2, 210, 0, 0, 0, 255, 0, 0);
			bricks_row4_x1 = bricks_row4_x1 + 120;
			bricks_row4_x2 = bricks_row4_x2 + 120;
			drawRectangle(bricks_row5_x1, 210, bricks_row5_x2, 250, 0, 0, 0, 0, 255, 0);
			bricks_row5_x1 = bricks_row5_x1 + 120;
			bricks_row5_x2 = bricks_row5_x2 + 120;

		}

	if (option == 2) {
		if (b1 == true) {
			drawRectangle(50, 50, 170, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b2 == true) {
			drawRectangle(170, 50, 290, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b3 == true) {
			drawRectangle(290, 50, 410, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b4 == true) {
			drawRectangle(410, 50, 530, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b5 == true) {
			drawRectangle(530, 50, 650, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b6 == true) {
			drawRectangle(650, 50, 770, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b7 == true) {
			drawRectangle(770, 50, 890, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b8 == true) {
			drawRectangle(890, 50, 1010, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b9 == true) {
			drawRectangle(1010, 50, 1130, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b10 == true) {
			drawRectangle(1130, 50, 1250, 90, 0, 0, 0, 0, 0, 0);
		}
		if (b11 == true) {
			drawRectangle(50, 90, 170, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b12 == true) {
			drawRectangle(170, 90, 290, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b13 == true) {
			drawRectangle(290, 90, 410, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b14 == true) {
			drawRectangle(410, 90, 530, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b15 == true) {
			drawRectangle(530, 90, 650, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b16 == true) {
			drawRectangle(650, 90, 770, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b17 == true) {
			drawRectangle(770, 90, 890, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b18 == true) {
			drawRectangle(890, 90, 1010, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b19 == true) {
			drawRectangle(1010, 90, 1130, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b20 == true) {
			drawRectangle(1130, 90, 1250, 130, 0, 0, 0, 0, 0, 0);
		}
		if (b21 == true) {
			drawRectangle(50, 130, 170, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b22 == true) {
			drawRectangle(170, 130, 290, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b23 == true) {
			drawRectangle(290, 130, 410, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b24 == true) {
			drawRectangle(410, 130, 530, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b25 == true) {
			drawRectangle(530, 130, 650, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b26 == true) {
			drawRectangle(650, 130, 770, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b27 == true) {
			drawRectangle(770, 130, 890, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b28 == true) {
			drawRectangle(890, 130, 1010, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b29 == true) {
			drawRectangle(1010, 130, 1130, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b30 == true) {
			drawRectangle(1130, 130, 1250, 170, 0, 0, 0, 0, 0, 0);
		}
		if (b31 == true) {
			drawRectangle(50, 170, 170, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b32 == true) {
			drawRectangle(170, 170, 290, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b33 == true) {
			drawRectangle(290, 170, 410, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b34 == true) {
			drawRectangle(410, 170, 530, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b35 == true) {
			drawRectangle(530, 170, 650, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b36 == true) {
			drawRectangle(650, 170, 770, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b37 == true) {
			drawRectangle(770, 170, 890, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b38 == true) {
			drawRectangle(890, 170, 1010, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b39 == true) {
			drawRectangle(1010, 170, 1130, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b40 == true) {
			drawRectangle(1130, 170, 1250, 210, 0, 0, 0, 0, 0, 0);
		}
		if (b41 == true) {
			drawRectangle(50, 210, 170, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b42 == true) {
			drawRectangle(170, 210, 290, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b43 == true) {
			drawRectangle(290, 210, 410, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b44 == true) {
			drawRectangle(410, 210, 530, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b45 == true) {
			drawRectangle(530, 210, 650, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b46 == true) {
			drawRectangle(650, 210, 770, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b47 == true) {
			drawRectangle(770, 210, 890, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b48 == true) {
			drawRectangle(890, 210, 1010, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b49 == true) {
			drawRectangle(1010, 210, 1130, 250, 0, 0, 0, 0, 0, 0);
		}
		if (b50 == true) {
			drawRectangle(1130, 210, 1250, 250, 0, 0, 0, 0, 0, 0);
		}


	}

	drawRectangle(0, 0, 50, 700, 150, 150, 150, 150, 150, 150);
	drawRectangle(50, 0, 1250, 50, 150, 150, 150, 150, 150, 150);
	drawRectangle(1250, 25, 1300, 700, 150, 150, 150, 150, 150, 150);

	if (lives == 3) {
		drawRectangle(5, 30, 25, 45, 0, 255, 0, 255, 0, 0);
		drawRectangle(30, 30, 50, 45, 0, 255, 0, 255, 0, 0);
		drawRectangle(55, 30, 75, 45, 0, 255, 0, 255, 0, 0);
	}
	else if (lives == 2) {
		drawRectangle(5, 30, 25, 45, 0, 255, 0, 255, 0, 0);
		drawRectangle(30, 30, 50, 45, 0, 255, 0, 255, 0, 0);
		drawRectangle(55, 30, 75, 45, 0, 255, 0, 0, 0, 0);
	}
	else if (lives == 1) {
		drawRectangle(5, 30, 25, 45, 0, 255, 0, 255, 0, 0);
		drawRectangle(30, 30, 50, 45, 0, 255, 0, 0, 0, 0);
		drawRectangle(55, 30, 75, 45, 0, 255, 0, 0, 0, 0);
	}

	cout << "lives " << lives << "                                                                                                    score " << score;

	while (lives != 0) {

		while (flag == true) {

			drawRectangle(bat_x1, bat_y1, bat_x2, bat_y2, 255, 255, 255, 255, 255, 255);


			ch = getKey();

			if (bat_x2 < 1250) {

				if (ch == 'd') {
					bat_x1 = bat_x1 + 25;
					bat_x2 = bat_x2 + 25;
					drawRectangle(bat_x1 - 25, bat_y1, bat_x2 - 25, bat_y2, 0, 0, 0, 0, 0, 0);
					drawRectangle(bat_x1, bat_y1, bat_x2, bat_y2, 255, 255, 255, 255, 255, 255);
				}
			}
			if (bat_x1 > 50) {
				if (ch == 'a') {
					bat_x1 = bat_x1 - 25;
					bat_x2 = bat_x2 - 25;
					drawRectangle(bat_x1 + 25, bat_y1, bat_x2 + 25, bat_y2, 0, 0, 0, 0, 0, 0);
					drawRectangle(bat_x1, bat_y1, bat_x2, bat_y2, 255, 255, 255, 255, 255, 255);
				}
			}
			if (ch == 'p') {
				while (ch != 'r') {
					ch = getKey();
					delay(1);
				}
			}

			if (ch == 's') {


				save_game.open("Save.txt");
				save_game << bat_x1 << endl;
				save_game << bat_x2 << endl;
				save_game << bat_y1 << endl;
				save_game << bat_y2 << endl;
				save_game << ball_x1 << endl;
				save_game << ball_x2 << endl;
				save_game << ball_y1 << endl;
				save_game << ball_y2 << endl;
				save_game << b1 << endl;
				save_game << b2 << endl;
				save_game << b3 << endl;
				save_game << b4 << endl;
				save_game << b5 << endl;
				save_game << b6 << endl;
				save_game << b7 << endl;
				save_game << b8 << endl;
				save_game << b9 << endl;
				save_game << b10 << endl;
				save_game << b11 << endl;
				save_game << b12 << endl;
				save_game << b13 << endl;
				save_game << b14 << endl;
				save_game << b15 << endl;
				save_game << b16 << endl;
				save_game << b17 << endl;
				save_game << b18 << endl;
				save_game << b19 << endl;
				save_game << b20 << endl;
				save_game << b21 << endl;
				save_game << b22 << endl;
				save_game << b23 << endl;
				save_game << b24 << endl;
				save_game << b25 << endl;
				save_game << b26 << endl;
				save_game << b27 << endl;
				save_game << b28 << endl;
				save_game << b29 << endl;
				save_game << b30 << endl;
				save_game << b31 << endl;
				save_game << b32 << endl;
				save_game << b33 << endl;
				save_game << b34 << endl;
				save_game << b35 << endl;
				save_game << b36 << endl;
				save_game << b37 << endl;
				save_game << b38 << endl;
				save_game << b39 << endl;
				save_game << b40 << endl;
				save_game << b41 << endl;
				save_game << b42 << endl;
				save_game << b43 << endl;
				save_game << b44 << endl;
				save_game << b45 << endl;
				save_game << b46 << endl;
				save_game << b47 << endl;
				save_game << b48 << endl;
				save_game << b49 << endl;
				save_game << b50 << endl;
				save_game << movement << endl;
				save_game << lives << endl;
				save_game << score << endl;
				save_game << h31 << endl;
				save_game << h32 << endl;
				save_game << h33 << endl;
				save_game << h34 << endl;
				save_game << h35 << endl;
				save_game << h36 << endl;
				save_game << h37 << endl;
				save_game << h38 << endl;
				save_game << h39 << endl;
				save_game << h40;

			}
			if (ch == 's') {
				break;
			}




			if (ball_y2 == 675 && ball_x1 + 10 >= bat_x1 + 80 && ball_x2 - 25 <= bat_x2 - 80) {
				movement = 2;
			}
			else if (ball_y2 == 675 && ball_x1 + 10 >= bat_x1 - 10 && ball_x2 - 10 <= bat_x2 - 120) {
				movement = 3;
			}
			else if (ball_y2 == 675 && ball_x1 + 10 >= bat_x1 + 120 && ball_x2 - 10 <= bat_x2 + 10)
				movement = 4;

			if (movement == 1) {  //movement = 1 moves the ball in downwards direction
				ball_y1 = ball_y1 + 5;
				ball_y2 = ball_y2 + 5;
				delay(8);
				drawEllipse(ball_x1, ball_y1 - 5, ball_x2, ball_y2 - 5, 0, 0, 0, 0, 0, 0);
				drawEllipse(ball_x1, ball_y1, ball_x2, ball_y2, 255, 255, 255, 255, 255, 255);
			}

			if (movement == 2) {  //movement = 2 moves the ball in upwards direction
				ball_y1 = ball_y1 - 5;
				ball_y2 = ball_y2 - 5;
				delay(8);
				drawEllipse(ball_x1, ball_y1 + 5, ball_x2, ball_y2 + 5, 0, 0, 0, 0, 0, 0);
				drawEllipse(ball_x1, ball_y1, ball_x2, ball_y2, 255, 255, 255, 255, 255, 255);
			}

			if (movement == 3) { //movement = 3 moves the ball in up-left direction
				ball_y1 = ball_y1 - 5;
				ball_y2 = ball_y2 - 5;
				ball_x1 = ball_x1 - 5;
				ball_x2 = ball_x2 - 5;
				delay(14);
				drawEllipse(ball_x1 + 5, ball_y1 + 5, ball_x2 + 5, ball_y2 + 5, 0, 0, 0, 0, 0, 0);
				drawEllipse(ball_x1, ball_y1, ball_x2, ball_y2, 255, 255, 255, 255, 255, 255);
			}

			if (movement == 4) { //movement = 4 moves the ball in up-right direction
				ball_y1 = ball_y1 - 5;
				ball_y2 = ball_y2 - 5;
				ball_x1 = ball_x1 + 5;
				ball_x2 = ball_x2 + 5;
				delay(14);
				drawEllipse(ball_x1 - 5, ball_y1 + 5, ball_x2 - 5, ball_y2 + 5, 0, 0, 0, 0, 0, 0);
				drawEllipse(ball_x1, ball_y1, ball_x2, ball_y2, 255, 255, 255, 255, 255, 255);
			}

			if (movement == 5) { //movement = 5 moves the ball in down-left direction
				ball_y1 = ball_y1 + 5;
				ball_y2 = ball_y2 + 5;
				ball_x1 = ball_x1 - 5;
				ball_x2 = ball_x2 - 5;
				delay(14);
				drawEllipse(ball_x1 + 5, ball_y1 -5, ball_x2 + 5, ball_y2 - 5, 0, 0, 0, 0, 0, 0);
				drawEllipse(ball_x1, ball_y1, ball_x2, ball_y2, 255, 255, 255, 255, 255, 255);
			}

			if (movement == 6) { //movement = 6 moves the ball in down-right direction
				ball_y1 = ball_y1 + 5;
				ball_y2 = ball_y2 + 5;
				ball_x1 = ball_x1 + 5;
				ball_x2 = ball_x2 + 5;
				delay(14);
				drawEllipse(ball_x1 - 5, ball_y1 - 5, ball_x2 - 5, ball_y2 - 5, 0,0,0,0,0,0);
				drawEllipse(ball_x1, ball_y1, ball_x2, ball_y2, 255, 255, 255, 255, 255, 255);
			}

			if (ball_x2 >= 1245) {
				if (movement == 4)
					movement = 3;
				else if (movement == 6)
					movement = 5;
			}
			else if (ball_x1 <= 50) {
				if (movement == 3)
					movement = 4;
				else if (movement == 5)
					movement = 6;
			}

			if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b41 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b41 == false)) {
				drawRectangle(50, 210, 170, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b41 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b42 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b42 == false)) {
				drawRectangle(170, 210, 290, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b42 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b43 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b43 == false)) {
				drawRectangle(290, 210, 410, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b43 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b44 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b44 == false)) {
				drawRectangle(410, 210, 530, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b44 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b45 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b45 == false)) {
				drawRectangle(530, 210, 650, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b45 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b46 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b46 == false)) {
				drawRectangle(650, 210, 770, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b46 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b47 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b47 == false)) {
				drawRectangle(770, 210, 890, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b47 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b48 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b48 == false)) {
				drawRectangle(890, 210, 1010, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b48 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b49 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b49 == false)) {
				drawRectangle(1010, 210, 1130, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b49 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 250 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b50 == false) || ((movement == 5 || movement == 6) && ball_y2 == 210 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b50 == false)) {
				drawRectangle(1130, 210, 1250, 250, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b50 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b31 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b31 == false)) {
				h31--;
				if (h31 == 0) {
					drawRectangle(50, 170, 170, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b31 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b32 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b32 == false)) {
				h32--;
				if (h32 == 0) {
					drawRectangle(170, 170, 290, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b32 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b33 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b33 == false)) {
				h33--;
				if (h33 == 0) {
					drawRectangle(290, 170, 410, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b33 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b34 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 420 && ball_x2 - 10 <= 540 && b34 == false)) {
				h34--;
				if (h34 == 0) {
					drawRectangle(410, 170, 530, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b34 = true;
				}

				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b35 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 540 && ball_x2 - 10 <= 660 && b35 == false)) {
				h35--;
				if (h35 == 0) {
					drawRectangle(530, 170, 650, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b35 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b36 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b36 == false)) {
				h36--;
				if (h36 == 0) {
					drawRectangle(650, 170, 770, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b36 = true;
				}
				if (h36 == 1) {
					drawLine(650, 170, 770, 210, 0, 0, 0);
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b37 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b37 == false)) {
				h37--;
				if (h37 == 0) {
					drawRectangle(770, 170, 890, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b37 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b38 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b38 == false)) {
				h38--;
				if (h38 == 0) {
					drawRectangle(890, 170, 1010, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b38 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b39 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b39 == false)) {
				h39--;
				if (h39 == 0) {
					drawRectangle(1010, 170, 1130, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b39 = true;
				}

				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 210 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b40 == false) || ((movement == 5 || movement == 6) && ball_y2 == 170 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b40 == false)) {
				h40--;
				if (h40 == 0) {
					drawRectangle(1130, 170, 1250, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b40 = true;
				}
				movements_after_breaks(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b21 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b21 == false)) {
				drawRectangle(50, 130, 170, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b21 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b22 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b22 == false)) {
				drawRectangle(170, 130, 290, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b22 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b23 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b23 == false)) {
				drawRectangle(290, 130, 410, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b23 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b24 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b24 == false)) {
				drawRectangle(410, 130, 530, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b24 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b25 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b25 == false)) {
				drawRectangle(530, 130, 650, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b25 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b26 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 660 && ball_x2 - 10 <= 780 && b26 == false)) {
				drawRectangle(650, 130, 770, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b26 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b27 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b27 == false)) {
				drawRectangle(770, 130, 890, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b27 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b28 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b28 == false)) {
				drawRectangle(890, 130, 1010, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b28 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b29 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b29 == false)) {
				drawRectangle(1010, 130, 1130, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b29 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 170 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b30 == false) || ((movement == 5 || movement == 6) && ball_y2 == 130 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b30 == false)) {
				drawRectangle(1130, 130, 1250, 170, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b30 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b11 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b11 == false)) {
				drawRectangle(50, 90, 170, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);

				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b11 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b12 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b12 == false)) {
				drawRectangle(170, 90, 290, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b12 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b13 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b13 == false)) {
				drawRectangle(290, 90, 410, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b13 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b14 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b14 == false)) {
				drawRectangle(410, 90, 530, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b14 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b15 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b15 == false)) {
				drawRectangle(530, 90, 650, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b15 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b16 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b16 == false)) {
				drawRectangle(650, 90, 770, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b16 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b17 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b17 == false)) {
				drawRectangle(770, 90, 890, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b17 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b18 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1040 && b18 == false)) {
				drawRectangle(890, 90, 1010, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b18 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b19 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b19 == false)) {
				drawRectangle(1010, 90, 1130, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b19 = true;
			}
			else if (((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 130 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b20 == false) || ((movement == 5 || movement == 6) && ball_y2 == 90 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b20 == false)) {
				drawRectangle(1130, 90, 1250, 130, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b20 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 50 && ball_x2 - 10 <= 180 && b1 == false) {
				drawRectangle(50, 50, 170, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b1 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 160 && ball_x2 - 10 <= 300 && b2 == false) {
				drawRectangle(170, 50, 290, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b2 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 280 && ball_x2 - 10 <= 420 && b3 == false) {
				drawRectangle(290, 50, 410, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b3 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 400 && ball_x2 - 10 <= 540 && b4 == false) {
				drawRectangle(410, 50, 530, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b4 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 520 && ball_x2 - 10 <= 660 && b5 == false) {
				drawRectangle(530, 50, 650, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b5 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 640 && ball_x2 - 10 <= 780 && b6 == false) {
				drawRectangle(650, 50, 770, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b6 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 760 && ball_x2 - 10 <= 900 && b7 == false) {
				drawRectangle(770, 50, 890, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b7 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 880 && ball_x2 - 10 <= 1020 && b8 == false) {
				drawRectangle(890, 50, 1010, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b8 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 1000 && ball_x2 - 10 <= 1140 && b9 == false) {
				drawRectangle(1010, 50, 1130, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b9 = true;
			}
			else if ((movement == 2 || movement == 3 || movement == 4) && ball_y1 == 90 && ball_x1 + 10 >= 1120 && ball_x2 - 10 <= 1250 && b10 == false) {
				drawRectangle(1130, 50, 1250, 90, 0, 0, 0, 0, 0, 0);
				movements_after_breaks(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b10 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b41 == false && ball_x1 == 170) {
				drawRectangle(50, 210, 170, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b41 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b42 == false && (ball_x2 == 170 || ball_x1 == 290)) {
				drawRectangle(170, 210, 290, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b42 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b43 == false && (ball_x2 == 290 || ball_x1 == 410)) {
				drawRectangle(290, 210, 410, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b43 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b44 == false && (ball_x2 == 410 || ball_x1 == 530)) {
				drawRectangle(410, 210, 530, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b44 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b45 == false && (ball_x2 == 530 || ball_x1 == 650)) {
				drawRectangle(530, 210, 650, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b45 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b46 == false && (ball_x2 == 650 || ball_x1 == 770)) {
				drawRectangle(650, 210, 770, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

				b46 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b47 == false && (ball_x2 == 770 || ball_x1 == 890)) {
				drawRectangle(770, 210, 890, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b47 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b48 == false && (ball_x2 == 890 || ball_x1 == 1010)) {
				drawRectangle(890, 210, 1010, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b48 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b49 == false && (ball_x2 == 1010 || ball_x1 == 1130)) {
				drawRectangle(1010, 210, 1130, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b49 = true;
			}
			else if (ball_y1 + 10 >= 200 && ball_y2 - 10 <= 260 && b50 == false && ball_x2 == 1130) {
				drawRectangle(1130, 210, 1250, 250, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b50 = true;
			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b31 == false && ball_x1 == 170) {
				h31--;
				if (h31 == 0) {
					drawRectangle(50, 170, 170, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b31 = true;
				}
				if (h31 == 1) {
					drawLine(50, 170, 170, 210, 0, 0, 0);
				}
				brick_x_movement(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b32 == false && (ball_x2 == 170 || ball_x1 == 290)) {
				h32--;
				if (h32 == 0) {
					drawRectangle(170, 170, 290, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b32 = true;
				}
				if (h32 == 1) {
					drawLine(170, 170, 290, 210, 0, 0, 0);
				}

				brick_x_movement(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b33 == false && (ball_x2 == 290 || ball_x1 == 410)) {
				h33--;
				if (h33 == 0) {
					drawRectangle(290, 170, 410, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b33 = true;
				}
				if (h33 == 1) {
					drawLine(290, 170, 410, 210, 0, 0, 0);
				}


				brick_x_movement(movement);

				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b34 == false && (ball_x2 == 410 || ball_x1 == 530)) {
				h34--;
				if (h34 == 0) {
					drawRectangle(410, 170, 530, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b34 = true;
				}
				if (h34 == 1) {
					drawLine(410, 170, 530, 210, 0, 0, 0);
				}

				brick_x_movement(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b35 == false && (ball_x2 == 530 || ball_x1 == 650)) {
				h35--;
				if (h35 == 0) {
					drawRectangle(530, 170, 650, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b35 = true;
				}
				if (h35 == 1) {
					drawLine(530, 170, 650, 210, 0, 0, 0);
				}

				brick_x_movement(movement);

				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b36 == false && (ball_x2 == 650 || ball_x1 == 770)) {
				h36--;
				if (h36 == 0) {
					drawRectangle(650, 170, 770, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b36 = true;
				}

				if (h36 == 1) {
					drawLine(650, 170, 770, 210, 0, 0, 0);
				}
				brick_x_movement(movement);

				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b37 == false && (ball_x2 == 770 || ball_x1 == 890)) {
				h37--;
				if (h37 == 0) {
					drawRectangle(770, 170, 890, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b37 = true;
				}
				if (h37 == 1) {
					drawLine(770, 170, 890, 210, 0, 0, 0);
				}

				brick_x_movement(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b38 == false && (ball_x2 == 890 || ball_x1 == 1010)) {
				h38--;
				if (h38 == 0) {

					drawRectangle(890, 170, 1010, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b38 = true;
				}
				if (h38 == 1) {
					drawLine(890, 170, 1010, 210, 0, 0, 0);
				}
				brick_x_movement(movement);

				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b39 == false && (ball_x2 == 1010 || ball_x1 == 1130)) {
				h39--;
				if (h31 == 0) {
					drawRectangle(1010, 170, 1130, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b39 = true;
				}

				if (h39 == 1) {
					drawLine(1010, 170, 1130, 210, 0, 0, 0);
				}
				brick_x_movement(movement);
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;

			}
			else if (ball_y1 + 10 >= 160 && ball_y2 - 10 <= 220 && b40 == false && ball_x2 == 1130) {
				h40--;
				if (h40 == 0) {
					drawRectangle(1130, 170, 1250, 210, 0, 0, 0, 0, 0, 0);
					score = score + 30;
					b40 = true;
				}
				if (h39 == 1) {
					drawLine(1130, 170, 1250, 210, 0, 0, 0);
				}
				brick_x_movement(movement);

				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b21 == false && ball_x1 == 170) {
				drawRectangle(50, 130, 170, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b21 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b22 == false && (ball_x2 == 170 || ball_x1 == 290)) {
				drawRectangle(170, 130, 290, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b22 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b23 == false && (ball_x2 == 290 || ball_x1 == 410)) {
				drawRectangle(290, 130, 410, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b23 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b24 == false && (ball_x2 == 410 || ball_x1 == 530)) {
				drawRectangle(410, 130, 530, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b24 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b25 == false && (ball_x2 == 530 || ball_x1 == 650)) {
				drawRectangle(530, 130, 650, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b25 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b26 == false && (ball_x2 == 650 || ball_x1 == 770)) {
				drawRectangle(650, 130, 770, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b26 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b27 == false && (ball_x2 == 770 || ball_x1 == 890)) {
				drawRectangle(770, 130, 890, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b27 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b28 == false && (ball_x2 == 890 || ball_x1 == 1010)) {
				drawRectangle(890, 130, 1010, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b28 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b29 == false && (ball_x2 == 1010 || ball_x1 == 1130)) {
				drawRectangle(1010, 130, 1130, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b29 = true;
			}
			else if (ball_y1 + 10 >= 120 && ball_y2 - 10 <= 180 && b30 == false && ball_x2 == 1130) {
				drawRectangle(1130, 130, 1250, 170, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b30 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b11 == false && ball_x1 == 170) {
				drawRectangle(50, 90, 170, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b11 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b12 == false && (ball_x2 == 170 || ball_x1 == 290)) {
				drawRectangle(170, 90, 290, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b12 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b13 == false && (ball_x2 == 290 || ball_x1 == 410)) {
				drawRectangle(290, 90, 410, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b13 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b14 == false && (ball_x2 == 410 || ball_x1 == 530)) {
				drawRectangle(410, 90, 530, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b14 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b15 == false && (ball_x2 == 530 || ball_x1 == 650)) {
				drawRectangle(530, 90, 650, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b15 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b16 == false && (ball_x2 == 650 || ball_x1 == 770)) {
				drawRectangle(650, 90, 770, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b16 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b17 == false && (ball_x2 == 770 || ball_x1 == 890)) {
				drawRectangle(770, 90, 890, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b17 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b18 == false && (ball_x2 == 890 || ball_x1 == 1010)) {
				drawRectangle(890, 90, 1010, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b18 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b19 == false && (ball_x2 == 1010 || ball_x1 == 1130)) {
				drawRectangle(1010, 90, 1130, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b19 = true;
			}
			else if (ball_y1 + 10 >= 80 && ball_y2 - 10 <= 140 && b20 == false && ball_x2 == 1130) {
				drawRectangle(1130, 90, 1250, 130, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 10;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b20 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b1 == false && ball_x1 == 170) {
				drawRectangle(50, 50, 170, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b1 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b2 == false && (ball_x2 == 170 || ball_x1 == 290)) {
				drawRectangle(170, 50, 290, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b2 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b3 == false && (ball_x2 == 290 || ball_x1 == 410)) {
				drawRectangle(290, 50, 410, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b3 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b4 == false && (ball_x2 == 410 || ball_x1 == 530)) {
				drawRectangle(410, 50, 530, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b4 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b5 == false && (ball_x2 == 530 || ball_x1 == 650)) {
				drawRectangle(530, 50, 650, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b5 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b6 == false && (ball_x2 == 650 || ball_x1 == 770)) {
				drawRectangle(650, 50, 770, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b6 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b7 == false && (ball_x2 == 770 || ball_x1 == 890)) {
				drawRectangle(770, 50, 890, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b7 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b8 == false && (ball_x2 == 890 || ball_x1 == 1010)) {
				drawRectangle(890, 50, 1010, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 30;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b8 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b9 == false && (ball_x2 == 1010 || ball_x1 == 1130)) {
				drawRectangle(1010, 50, 1130, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b9 = true;
			}
			else if (ball_y1 + 10 >= 48 && ball_y2 - 10 <= 100 && b10 == false && ball_x2 == 1130) {
				drawRectangle(1130, 50, 1250, 90, 0, 0, 0, 0, 0, 0);
				brick_x_movement(movement);
				score = score + 20;
				gotoxy(0, 0);
				cout << "lives " << lives << "                                                                                                    score " << score;
				b10 = true;
			}

			if (ball_y1 == 50) {
				movements_after_breaks(movement);
			}

			if (h31 == 1) {
				drawLine(50, 170, 170, 210, 0, 0, 0);
			}
			if (h32 == 1) {
				drawLine(170, 170, 290, 210, 0, 0, 0);
			}
			if (h33 == 1) {
				drawLine(290, 170, 410, 210, 0, 0, 0);
			}
			if (h34 == 1) {
				drawLine(410, 170, 530, 210, 0, 0, 0);
			}
			if (h35 == 1) {
				drawLine(530, 170, 650, 210, 0, 0, 0);
			}
			if (h37 == 1) {
				drawLine(770, 170, 890, 210, 0, 0, 0);
			}
			if (h38 == 1) {
				drawLine(890, 170, 1010, 210, 0, 0, 0);
			}
			if (h39 == 1) {
				drawLine(1010, 170, 1130, 210, 0, 0, 0);
			}

			if (h40 == 1) {
				drawLine(1130, 170, 1250, 210, 0, 0, 0);
			}

			if (ball_y1 > 750) {
				ball_x1 = 610, ball_y1 = 380, ball_x2 = 630, ball_y2 = 400;
				drawRectangle(bat_x1, bat_y1, bat_x2, bat_y2, 0, 0, 0, 0, 0, 0);
				bat_x1 = 525, bat_y1 = 675, bat_x2 = 725, bat_y2 = 685;
				movement = 1;
				lives--;

				if (lives == 2) {
					drawRectangle(55, 30, 75, 45, 0, 255, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "lives " << lives << "                                                                                                    score " << score;
				}
				else if (lives == 1) {
					drawRectangle(30, 30, 50, 45, 0, 255, 0, 0, 0, 0);
					gotoxy(0, 0);
					cout << "lives " << lives << "                                                                                                    score " << score;

				}
				break;
			}

			if ((b1 == true) && (b2 == true) && (b3 == true) && (b4 == true) && (b5 == true) && (b6 == true) && (b7 == true) && (b8 == true) && (b9 == true) && (b10 == true) && (b11 == true) && (b12 == true) && (b13 == true) && (b14 == true) && (b15 == true) && (b16 == true) && (b17 == true) && (b18 == true) && (b19 == true) && (b20 == true) && (b21 == true) && (b22 == true) && (b23 = true) && (b24 == true) && (b25 == true) && (b26 == true) && (b27 == true) && (b28 == true) && (b29 == true) && (b30 == true) && (b31 == true) && (b32 == true) && (b33 == true) && (b34 == true) && (b35 == true) && (b36 == true) && (b37 == true) && (b38 == true) && (b39 == true) && (b40 == true) && (b41 == true) && (b42 == true) && (b43 == true) && (b44 == true) && (b45 == true) && (b46 == true) && (b47 == true) && (b48 == true) && (b49 == true) && (b50 == true)) {
				break;
			}

		}
		if ((b1 == true) && (b2 == true) && (b3 == true) && (b4 == true) && (b5 == true) && (b6 == true) && (b7 == true) && (b8 == true) && (b9 == true) && (b10 == true) && (b11 == true) && (b12 == true) && (b13 == true) && (b14 == true) && (b15 == true) && (b16 == true) && (b17 == true) && (b18 == true) && (b19 == true) && (b20 == true) && (b21 == true) && (b22 == true) && (b23 = true) && (b24 == true) && (b25 == true) && (b26 == true) && (b27 == true) && (b28 == true) && (b29 == true) && (b30 == true) && (b31 == true) && (b32 == true) && (b33 == true) && (b34 == true) && (b35 == true) && (b36 == true) && (b37 == true) && (b38 == true) && (b39 == true) && (b40 == true) && (b41 == true) && (b42 == true) && (b43 == true) && (b44 == true) && (b45 == true) && (b46 == true) && (b47 == true) && (b48 == true) && (b49 == true) && (b50 == true)) {
			break;
		}

		if (ch == 's')
			break;
	}

	cls();
	gotoxy(0, 0);
	cout << endl;

	int temp;

	if (lives == 0) {
		cout << endl<< endl<< "\t\t\t\t\t\t\t*********GAME OVER*********" << endl;
	}
	else if ((b1 == true) && (b2 == true) && (b3 == true) && (b4 == true) && (b5 == true) && (b6 == true) && (b7 == true) && (b8 == true) && (b9 == true) && (b10 == true) && (b11 == true) && (b12 == true) && (b13 == true) && (b14 == true) && (b15 == true) && (b16 == true) && (b17 == true) && (b18 == true) && (b19 == true) && (b20 == true) && (b21 == true) && (b22 == true) && (b23 = true) && (b24 == true) && (b25 == true) && (b26 == true) && (b27 == true) && (b28 == true) && (b29 == true) && (b30 == true) && (b31 == true) && (b32 == true) && (b33 == true) && (b34 == true) && (b35 == true) && (b36 == true) && (b37 == true) && (b38 == true) && (b39 == true) && (b40 == true) && (b41 == true) && (b42 == true) && (b43 == true) && (b44 == true) && (b45 == true) && (b46 == true) && (b47 == true) && (b48 == true) && (b49 == true) && (b50 == true)) {
		cout << endl << endl << "\t\t\t\t\t\t\t*********YOU WON*********" << endl;
	}
	else if (ch == 's') {
		cout << endl << endl << "\t\t\t\t\t\t\t*********SAVED*********" << endl;
	}
	cout << endl << endl << "\t\t\t\t\t\t\t      YOUR SCORE: " << score << endl << endl << endl<< endl<< endl;

	ifstream high_scores_reading;

	high_scores_reading.open("Scores.txt");

	for (int i = 0; i < 6; i++) 
	{
		high_scores_reading >> scores[i];
	}

	if (score > scores[4])
		scores[4] = score;

	int m;
	for (int i = 0; i < 5; i++) {
		m = i;
		for (int j = i; j < 5; j++) {
			if (scores[j] > scores[m]) {
				swap(scores[j], scores[m]);
			}
		}
		i = m;
	}

	cout << "\t\t\t\t\t\tPOSITIONS \t\t HIGH SCORES"<< endl;

	ofstream high_scores_writing;
	high_scores_writing.open("Scores.txt");
	for (int i = 0; i < 5; i++) {
		high_scores_writing << scores[i] << endl;
		cout <<"\t\t\t\t\t\t"<< i + 1 << "\t\t\t     " << scores[i] << endl;
	}

	
	system("pause");
	return 0;

}
