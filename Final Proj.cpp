#include <iostream>
using namespace std;

bool LYR(int year) {
    
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

string ZodiacSign(int month, int day) {
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "Pisces";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        return "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        return "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return "Sagittarius";
    } else {
        return "Capricorn";
    }
}

string Chinesezodiac(int year) {
    string chineseZodiacs[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"};
    return chineseZodiacs[year % 12];
}

int main() {
    int month, day, year;
    string zodiacSign, chineseZodiac;

    cout <<" Hello, I'd like to learn more about you. Would you like to share your birthday with me? Yes or No"<< endl;
    string response;
    cin >> response;

    if (response == "yes") {
        cout << "Enter your birth month 1-12: ";
        cin >> month;
        cout << "Enter your birth day 1-30: ";
        cin >> day;
        cout << "Enter your birth year: ";
        cin >> year;

        while (true) {
            cout << "Select from the options below:" << endl;
            cout << "0. End the program" << endl;
            cout << "1. Know your zodiac sign" << endl;
            cout << "2. Check if your birthday is a leap year" << endl;
            cout << "3. Update your birth year" << endl;
            cout << "4. Know your Chinese zodiac animal" << endl;
            cout << "Enter here: ";
            int choice;
            cin >> choice;

            switch (choice) {
                case 0:
                    cout << "Program terminated." << endl;
                    return 0;
                case 1:
                    zodiacSign = ZodiacSign(month, day);
                    cout << "Your zodiac sign is " << zodiacSign << "." << endl;
                    break;
                case 2:
                    if (LYR(year)) {
                        cout << "Your birthday is in a leap year." << endl;
                    } else {
                        cout << "Your birthday is not in a leap year." << endl;
                    }
                    break;
                case 3:
                    cout << "Enter your new birth year: ";
                    cin >> year;
                    cout << "Birth year updated!" << endl;
                    break;
                case 4:
                    chineseZodiac = Chinesezodiac(year);
                    cout << "Your Chinese zodiac animal is " << chineseZodiac << "." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please select again." << endl;
                    break;
            }
        }
    } else {
        cout << "You chose not to share your birthday. Program exiting." << endl;
    }










    return 0;
}