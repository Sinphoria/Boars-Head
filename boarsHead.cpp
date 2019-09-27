//Ethan Runstadler
//9-13-19

#include <iostream>	
#include <cstdlib>
#include <ctime>

using namespace std;

int bread();
int oneMeat();
int twoMeat();
int cheese();
int oneGreen();
int twoGreen();
int threeGreen();
int sauce();
int toast();

int main() {
	cout << "Boars Head Sandwhich Generator. \n";
	cout << "Do you wish to generate a combonation? [y/n] \n";
	char contBool;
	cin >> contBool;
	int breadType = 0;
	int meatOne = 0;
	int meatTwo = 0;
	int cheeseType = 0;
	int vegOne = 0;
	int vegTwo = 0;
	int vegThree = 0;
	int sauceType = 0;
	int toastOp = 0;

	if (contBool == 'y') {
		do {
			breadType = bread();
			
			cout << "1 or 2 meats? \n"; //meat calculation
			int meatNum;
			cin >> meatNum;
			if (meatNum == 1) {
				meatOne = oneMeat();

			}
			else if (meatNum == 2) {
				meatOne = oneMeat();
				meatTwo = twoMeat();
				if(meatTwo == meatOne)
					meatTwo = twoMeat();
			}
			else
				cout << "Invalid Input! \n";

			cheeseType = cheese(); //cheese calculation

			cout << "1, 2, or 3 vegetables? \n"; //vegie calculation
			int vegNum;
			cin >> vegNum;
			if (vegNum == 1) {
				vegOne = oneGreen();

			}
			else if (vegNum == 2) {
				vegOne = oneGreen();
				vegTwo = twoGreen();
				if(vegOne == vegTwo)
					vegTwo = twoGreen();
			}
			else if (vegNum == 3) {
				vegOne = oneGreen();
				vegTwo = twoGreen();
				if(vegOne == vegTwo)
					vegTwo = twoGreen();

				vegThree = threeGreen();
				if(vegThree == vegOne || vegThree == vegTwo)
					vegThree = threeGreen();

			}

			sauceType = sauce();

			toastOp = toast();

			cout << "Sandwhich: \n";
			cout << "Bread: \n";
			
			switch (breadType) {
			case(1):
				cout << "Ciabatta \n";
				break;

			case(2):
				cout << "Italian \n";
				break;

			case(3):
				cout << "Italian Panini \n";
				break;

			case(4):
				cout << "Multi-Grain \n";
				break;

			case(5):
				cout << "Whole Wheat \n";
				break;

			case(6):
				cout << "Pretzel \n";
				break;

			case(7):
				cout << "Rye \n";
				break;

			case(8):
				cout << "Sub Roll \n";
				break;

			case(9):
				cout << "Sweet Hawaiian Roll \n";
				break;

			case(10):
				cout << "Gluten-free Bread \n";
				break;

			case(11):
				cout << "Plain Bagel \n";
				break;

			case(12):
				cout << "Wheat Bagel \n";
				break;

			case(13):
				cout << "Everything Bagel \n";
				break;

			case(14):
				cout << "Blueberry Bagel \n";
				break;

			case(15):
				cout << "Cinnamon Raisin Bagel \n";
				break;

			case(16):
				cout << "Cinnamon Swirl Bagel \n";
				break;

			case(17):
				cout << "Onion Bagel \n";
				break;

			case(18):
				cout << "Garlic Wrap \n";
				break;

			case(19):
				cout << "Spinach Wrap \n";
				break;

			case(20):
				cout << "Cheesy Jalepeno Wrap \n";
				break;

			case(21):
				cout << "Gluten-free Wrap \n";
				break;

			case(0):
				cout << "- \n";
				break;

			}

			cout << "\nMeat(s): \n";
			int meatProg;
			meatProg = meatOne;

			for (int meatCount = 1; meatCount < 3; meatCount++) {
				switch (meatProg) {
				case(1):
					cout << "Turkey \n";
					break;

				case(2):
					cout << "Cajun Turkey \n";
					break;

				case(3):
					cout << "Aloha Turkey \n";
					break;

				case(4):
					cout << "Chicken \n";
					break;

				case(5):
					cout << "Buffalo Chicken \n";
					break;

				case(6):
					cout << "Chipotle Chicken \n";
					break;

				case(7):
					cout << "Corned Beef \n";
					break;

				case(8):
					cout << "Roast Beef \n";
					break;

				case(9):
					cout << "Sweet Ham \n";
					break;

				case(10):
					cout << "Tuna Salad \n";
					break;

				case(11):
					cout << "Chicken Salad \n";
					break;

				case(12):
					cout << "Pepperoni \n";
					break;

				case(13):
					cout << "Salami \n";
					break;

				case(14):
					cout << "Capricollo \n";
					break;

				case(15):
					cout << "Bacon \n";
					break;

				case(16):
					cout << "Blackforest Ham \n";
					break;

				case(0):
					cout << "- \n";
					break;

				}
				if (meatProg == meatOne)
					meatProg = meatTwo;

			}
			cout << "\nCheese: \n";

			switch (cheeseType) {
			case(1):
				cout << "Cheddar \n";
				break;

			case(2):
				cout << "American \n";
				break;

			case(3):
				cout << "Swiss \n";
				break;

			case(4):
				cout << "Colby Jack \n";
				break;

			case(5):
				cout << "Three Pepper Colby Jack \n";
				break;

			case(6):
				cout << "Provolone \n";
				break;

			case(7):
				cout << "Smoked Gouda \n";
				break;

			case(8):
				cout << "Chipotle Gouda \n";
				break;

			case(9):
				cout << "Pepperjack \n";
				break;

			case(10):
				cout << "Mazzerella \n";
				break;

			case(0):
				cout << "- \n";
				break;

			}

			cout << "\nVeggies: \n";

			int vegProg;
			vegProg = vegOne;

			for(int vegCount = 1; vegCount < 4; vegCount++) {
				switch (vegProg) {
				case(1):
					cout << "Lettuce \n";
					break;

				case(2):
					cout << "Tomato \n";
					break;

				case(3):
					cout << "Red Onion \n";
					break;

				case(4):
					cout << "Banana Pepper \n";
					break;

				case(5):
					cout << "Pickle Slices \n";
					break;

				case(6):
					cout << "Black Olives \n";
					break;

				case(7):
					cout << "Cucumber \n";
					break;

				case(8):
					cout << "Jalepeno \n";
					break;

				case(9):
					cout << "Carrots \n";
					break;

				case(10):
					cout << "Spinach \n";
					break;

				case(11):
					cout << "Green Pepper \n";
					break;

				case(12):
					cout << "Red Pepper \n";
					break;

				case(0):
					cout << "- \n";
					break;

				}
				if (vegProg == vegOne)
					vegProg = vegTwo;
				else if (vegProg == vegTwo)
					vegProg = vegThree;

			}

			cout << "\nSauce: \n";

			switch (sauceType) {
			case(1):
				cout << "Mayo \n";
				break;

			case(2):
				cout << "Chipotle Mayo \n";
				break;

			case(3):
				cout << "Balsamic \n";
				break;

			case(4):
				cout << "Deli Dressing \n";
				break;

			case(5):
				cout << "Ranch \n";
				break;

			case(6):
				cout << "Honey Mustard \n";
				break;

			case(7):
				cout << "Yellow Mustard \n";
				break;

			case(8):
				cout << "Deli Mustard \n";
				break;

			case(9):
				cout << "Horseradish \n";
				break;

			case(10):
				cout << "BBQ \n";
				break;

			case(11):
				cout << "Hot Sauce \n";
				break;

			case(12):
				cout << "Pepperhouse \n";
				break;

			case(13):
				cout << "Fiery Gourmaise \n";
				break;

			case(0):
				cout << "- \n";
				break;

			}

			cout << "\nToasted: \n";

			switch (toastOp) {
			case(1):
				cout << "Yes \n";
				break;

			case(2):
				cout << "Yes \n";
				break;

			case(4):
				cout << "No \n";
				break;

			case(0):
				cout << "No \n";
				break;

			}

			cout << "\nNew Sandwhich? [y/n] \n";
			cin >> contBool;

		} while (contBool == 'y');

	}

}

int bread() {
	srand(time(nullptr));
	int randVal1 = rand() % 21 + 1;
	return randVal1;

}

int oneMeat() {
	srand(time(nullptr) +1);
	int randVal1 = rand() % 16 + 1;
	return randVal1;

}

int twoMeat() {
	srand(time(nullptr) + 2);
	int randVal1 = rand() % 16 + 1;
	return randVal1;

}

int cheese() {
	srand(time(nullptr) + 3);
	int randVal1 = rand() % 10 + 1;
	return randVal1;

}

int oneGreen() {
	srand(time(nullptr) + 4);
	int randVal1 = rand() % 12 + 1;
	return randVal1;

}

int twoGreen() {
	srand(time(nullptr) + 5);
	int randVal1 = rand() % 12 + 1;
	return randVal1;

}

int threeGreen() {
	srand(time(nullptr) + 6);
	int randVal1 = rand() % 12 + 1;
	return randVal1;

}

int sauce() {
	srand(time(nullptr) + 7);
	int randVal1 = rand() % 13 + 1;
	return randVal1;

}

int toast() {
	srand(time(nullptr) + 8);
	int randVal1 = rand() % 3;
	return randVal1;

}