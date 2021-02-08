#include<iostream>//library
#include<random>//library
#include<windows.h>//library
#include<string>//library
using namespace std;
string input;

int main() {

	int room = 1;
	char input = 'a';
	int doExit = 1;
	int randomhour = 10;
	int randomminute = 9;
	int randomnumber = 0;
	string randomphrase = "might be";

	void clear(); {
		COORD topLeft = { 0, 0 };
		HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO screen;
		DWORD written;
		GetConsoleScreenBufferInfo(console, &screen);
		FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
		FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE, screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
		SetConsoleCursorPosition(console, topLeft);
	}//wipes screen and keeps it easy to read

	while (doExit != 0) {

		void clear();
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "you try to remember where youve been and whats already happened, but you dont seem to be able too,," << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "--------------------------------" << endl << endl;

		//stuff here will be randomized EVERY game loop
		randomhour = rand() % 12 + 1;
		randomminute = rand() % 60;
		randomnumber = rand() % 8 + 1;
		if (randomnumber == 1)
			randomphrase = "could be ";
		else if (randomnumber == 2)
			randomphrase = "might of been ";
		else if (randomnumber == 3)
			randomphrase = "was maybe ";
		else if (randomnumber == 4)
			randomphrase = "isnt ";
		else if (randomnumber == 5)
			randomphrase = "was ";
		else if (randomnumber == 6)
			randomphrase = "wasnt ";
		else if (randomnumber == 7)
			randomphrase = "is probably ";
		else if (randomnumber == 8)
			randomphrase = "was roughly ";


		//stuff here will be printed EVERY game loop
		if (randomhour >= 10)
			if (randomminute <= 9)
				cout << "the time " << randomphrase << randomhour << ":0" << randomminute << endl << endl;
			else
				cout << "the time " << randomphrase << randomhour << ":" << randomminute << endl << endl;
		else
			if (randomminute <= 9)
				cout << "the time " << randomphrase << "0" << randomhour << ":0" << randomminute << endl << endl;
			else
				cout << "the time " << randomphrase << "0" << randomhour << ":" << randomminute << endl << endl;

		switch (room) {
			
		case 1://living room
			cout << "you are in the living room, the only light here is the sun snaking in from behind your blinds, and the harsh white glow of the broken tv's static screen,,it feels like your head is screaming,,,," << endl << endl;
			cout << "you can go to [S] your bedroom, [A] their bedroom, or [W] the dining room" << endl << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			else if (input == 'a')
				room = 3;
			else if (input == 'w')
				room = 4;
			else
				cout << "please input a choice provided (the letter in the [ ] brackets)" << endl << endl;
			break;

		case 2://your bedroom
			cout << "you are in your bedroom, its a mess, but you know it cant be fixed, so you instead focus your attention up, to the unpainted star shaped spots on your ceiling,,,somewhere stick on glow stars used to call their home,,,,this isnt home" << endl << endl;
			cout << "your phone faintly glows on your bed, you can text him [X], and this will end, you can only do this here though, anywhere else is uncomfortable,," << endl << "or you can go back to [W] the living room" << endl << endl;
			cin >> input;
			if (input == 'w')
				room = 1;
			else if (input == 'x')
				doExit = 0;
			else
				cout << "please input a choice provided (the letter in the [ ] brackets)" << endl << endl;
			break;

		case 3: //their bedroom
			cout << "you are in their bedroom,,,they left,,some time earlier,,,it smells like the bathroom,,,,you dont want to be here anymore,," << endl << endl;
			cout << "you can go back to [D] the living room" << endl << endl;
			cin >> input;
			if (input == 'd')
				room = 1;
			else
				cout << "please input a choice provided (the letter in the [ ] brackets)" << endl << endl;
			break;

		case 4: //dining room
			cout << "you are in the dining room, they brought home take out,,earlier? you arent sure when exactly, but a small container of rice sits abandoned in the center of the table still,,youre uncomfortable here,,,," << endl << endl;
			cout << "you can go to [S] the living room, [W] the kitchen, or [D] the bathroom" << endl << endl;
			cin >> input;
			if (input == 's')
				room = 1;
			else if (input == 'w')
				room = 5;
			else if (input == 'd')
				room = 6;
			else
				cout << "please input a choice provided (the W/A/S/D letter in the [ ] brackets)" << endl << endl;
			break;

		case 5: //kitchen
			cout << "you are in the kitchen, you might of had a responsibility here, but youve long since forgotten,,,,the creaky wooden floor wont give your mind peace,,you wish to leave" << endl << endl;
			cout << "you can go back to [S] the dining room" << endl << endl;
			cin >> input;
			if (input == 's')
				room = 4;
			else
				cout << "please input a choice provided (the W/A/S/D letter in the [ ] brackets)" << endl << endl;
			break;

		case 6: //bathroom
			cout << "you are in the bathroom, the sink has made itself a habitat of unknown stains, some a faint reddish brown, others pitch black,,,this place smells foul and skunky,,,,,,it hurts your head to be in here for even a second,," << endl << endl;
			cout << "you can go back to [A] the dining room" << endl << endl;
			cin >> input;
			if (input == 'a')
				room = 4;
			else
				cout << "please input a choice provided (the W/A/S/D letter in the [ ] brackets)" << endl << endl;
			break;

		}//end switch


	}//end of game loop

	//stuff here will ONLY print at the end of the game
	cout << "hes here, youre safe, you can go now, he will make things okay again" << endl;

}//end of main