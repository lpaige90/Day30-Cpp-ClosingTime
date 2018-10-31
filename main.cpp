#include <iostream>
#include <Windows.h>
#include <MMSystem.h>
#include <string>

void displayProject(std::string project, int delay) {
	std::cout << "\n" << project << std::endl;
	Sleep(delay);
}

int main() {
	PlaySound(TEXT("../closingtime.wav"), NULL, SND_ASYNC);

	Sleep(10000);
	displayProject("**Closing Time by Semisonic**", 3000);
	displayProject("I worked on a lot of projects this month...", 3000);
	displayProject("Day 1: Hello World", 2600);
	displayProject("Day 2: Have Some Tea", 2600);
	displayProject("Day 3: Alphanumeric Sorter", 2600);
	displayProject("Day 4: File I/O", 2600);
	displayProject("Day 5: Monster Hunter", 2600);
	displayProject("Day 6: Vectors", 2600);
	displayProject("Day 7: Monster Hunter Revisited", 2600);
	displayProject("Day 8: Surprise", 2600);
	displayProject("Day 9: Door Prize", 2600);
	displayProject("Day 10: Weather", 2600);
	displayProject("Day 11: Destroy World", 2600);
	displayProject("Day 12: Paint Mixer", 2600);
	displayProject("Day 13: Bakery Shop", 2600);
	displayProject("'You don't have to go home, but you can't stay here.'", 8000);
	displayProject("Day 14: Matrix Solver", 2600);
	displayProject("Day 15: Smart Monsters", 2600);
	displayProject("Day 16: Minions", 2600);
	displayProject("Day 17: Using OpenGL", 2600);
	displayProject("Day 18: Shapes", 2600);
	displayProject("Day 19: Ice Cream", 2600);
	displayProject("Day 20: Happy", 2600);
	displayProject("Day 21: Add Me", 2600);
	displayProject("Day 22: Happy Dead", 2600);
	displayProject("Day 23: Loading", 2600);
	displayProject("Day 24: Diary", 2600);
	displayProject("Day 25: Calendar", 2600);
	displayProject("Day 26: Using Visual Studio", 2600);
	displayProject("Day 27: Move Shape", 2600);
	displayProject("Day 28: Click", 2600);
	displayProject("Day 29: Ghost", 7800);
	displayProject("Day 30: Closing Time", 7800);
	displayProject("'Every new beginning comes from some other beginning's end...'", 7800);

	system("pause");

	return 0;
}
