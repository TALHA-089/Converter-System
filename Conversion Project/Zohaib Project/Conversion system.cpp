#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<Windows.h>
#include<math.h>
#include<chrono>
#include<iomanip>

using namespace std;



void Main_menu();
void Number_System_converter();
void Length_converter();
void Time_converter();
void Temperature_converter();
float to_Celcius(float temperature);
float to_Fahranheit(float temperature);
int Binary_to_Decimal(long long user_number);
int Binary_to_Octal(long long user_number);
void Binary_to_Hexa(long long user_number);
void Decimal_to_Binary(int decimal);
int Decimal_to_Octal(int decimal);
void Decimal_to_Hexa(int decimal);
void Octal_to_Binary(int octal);
int Octal_to_Decimal(int  octal);
void Octal_to_Hexa(int octal);
void Hexa_to_Binary(string Hexa);
int Hexa_to_Decimal(string Hexa);
int Hexa_to_Octal(string Hexa);





int main()
{
	cout << endl << endl;

	char menu_choice;
	string menu = "----------------Converter System--------------\n\n1.Start (S)\n2.Quit (Q)\n\nEnter your Choice: ";

	
	for (int i = 0; i < menu.length(); i++)
	{
		Sleep(120);
		cout << menu[i];
	}

	cin >> menu_choice;

	if (menu_choice == 'S' || menu_choice=='s')
	{
		Main_menu();
	}

	else
	{
		cout << endl << endl;
		system("pause");
		return 0;
	}

	
}

void Main_menu()
{	
	    cout << endl << endl;
		int menu_1_choice;
		string menu_1 = "-------------------------Main Menu--------------------------\n\n1.Number System Conversion\n2.Length parameters conversion\n3.Time conversion\n4.Temperature conversion\n5.Exit\n\nEnter your Choice: ";

		for (int i = 0; i < menu_1.length(); i++)
		{
			Sleep(120);
			cout << menu_1[i];
		}

		cin >> menu_1_choice;

		switch (menu_1_choice)
		{
		case 1:
			Number_System_converter();
			break;
		case 2:
			Length_converter();
			break;
		case 3:
			Time_converter();
			break;
		case 4:
			Temperature_converter();
			break;
		case 5:
			cout << endl << endl;
			system("pause");
			exit(0);
		default:
			cout << "\n\nInvalid Input\n\n";
			Main_menu();
			break;
		}
	
		Main_menu();
}

void Number_System_converter()
{
	cout << endl << endl;

	int user_choice;
	string menu = "---------------------Your Input-----------------\n\n1.Binary\n2.Decimal\n3.Octal\n4.Hexa-Decimal\n\nEnter your Choice: ";

	for (int i = 0; i < menu.length(); i++)
	{
		Sleep(120);
		cout << menu[i];
	}

	cin >> user_choice;

	cout << endl << endl;

	if (user_choice == 1)
	{
		int conversion_choice;
		long long user_number;
		string output_choice = "------------------Select your Choice------------\n\n1.Decimal\n2.Octal\n3.Hexa-Decimal\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Binary to Decimal------------\n\nEnter Binary Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			int answer = Binary_to_Decimal(user_number);

			cout << "\n\nDecimal Equvilent of " << user_number << " is " << answer;
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Binary to Octal------------\n\nEnter Binary Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			int answer = Binary_to_Octal(user_number);

			cout << "\n\nOctal Equvilent of " << user_number << " is " << answer;
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Binary to Hexa-Decimal------------\n\nEnter Binary Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			 Binary_to_Hexa(user_number);

			
		}
	}
	else if (user_choice == 2)
	{
		int conversion_choice;
		int user_number;
		string output_choice = "------------------Select your Choice------------\n\n1.Binary\n2.Octal\n3.Hexa-Decimal\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Decimal to Binary------------\n\nEnter Decimal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			Decimal_to_Binary(user_number);

			
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Decimal to Octal------------\n\nEnter Decimal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			int answer = Decimal_to_Octal(user_number);

			cout << "\n\nOctal Equvilent: " << answer;
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Decimal to Hexa------------\n\nEnter Decimal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			Decimal_to_Hexa(user_number);
		}
	}
	else if (user_choice == 3)
	{
		int conversion_choice;
		int user_number;
		string output_choice = "------------------Select your Choice------------\n\n1.Binary\n2.Decimal\n3.Hexa-Decimal\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Octal to Binary------------\n\nEnter Octal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			Octal_to_Binary(user_number);
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Octal to Decimal------------\n\nEnter Octal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			int answer = Octal_to_Decimal(user_number);

			cout << "\n\nDecimal Equvilent: " << answer;
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Octal to Hexa------------\n\nEnter Octal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin >> user_number;

			Octal_to_Hexa(user_number);

			
		}
	}
	else if (user_choice == 4)
	{
		int conversion_choice;
		string user_number;
		string output_choice = "------------------Select your Choice------------\n\n1.Binary\n2.Decimal\n3.Octal\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Hexa to Binary------------\n\nEnter Octal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin.ignore();
			getline(cin,user_number);

			Hexa_to_Binary(user_number);
			
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Hexa to Decimal------------\n\nEnter Octal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin.ignore();
			getline(cin, user_number);

			int answer = Hexa_to_Decimal(user_number);

			cout << "\n\nDecimal Equvilent: " << answer;
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Hexa to Octal------------\n\nEnter Octal Number : ";
			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}
			cin.ignore();
			getline(cin, user_number);

			int answer = Hexa_to_Octal(user_number);

			cout << "\n\nOctal Equvilent: " << answer;
		}
	}
}

void Length_converter()
{
	cout << endl << endl;

	int user_choice;
	string menu = "---------------------Your Input-----------------\n\n1.Inch\n2.Foot\n3.Meter\n4.Mile\n\nEnter your Choice: ";

	for (int i = 0; i < menu.length(); i++)
	{
		Sleep(120);
		cout << menu[i];
	}

	cin >> user_choice;

	cout << endl << endl;

	if (user_choice == 1)
	{
		int conversion_choice;
		float user_length;
		string output_choice = "------------------Select your Choice------------\n1.Foot\n2.Meter\n3.Mile\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Inch to Foot------------\n\nEnter Length (I) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " inches is " << user_length / 12.0 <<" foot";
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Inch to Meter------------\n\nEnter Length (I) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " inches is " << user_length / 39.37 << " Meter";
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Inch to Mile------------\n\nEnter Length (I) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " inches is " << user_length / 63360.0 << " Mile";
		}
	}
	else if (user_choice == 2)
	{
		int conversion_choice;
		float user_length;
		string output_choice = "------------------Select your Choice------------\n1.Inch\n2.Meter\n3.Mile\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Foot to Inch------------\n\nEnter Length (F) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " Foot is " << user_length * 12.0 << " Inch";
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Foot to Meter------------\n\nEnter Length (F) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " foot is " << user_length / 3.281 << " Meter";
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Foot to Mile------------\n\nEnter Length (F) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " foot is " << user_length / 5280.0 << " Mile";
		}

	}
	else if (user_choice == 3)
	{
		int conversion_choice;
		float user_length;
		string output_choice = "------------------Select your Choice------------\n1.Inch\n2.Foot\n3.Mile\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Meter to Inch------------\n\nEnter Length (meter) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " Meter is " << user_length * 39.37 << " Inch";
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Meter to Foot------------\n\nEnter Length (meter) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " Meter is " << user_length * 3.281 << " foot";
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Meter to Mile------------\n\nEnter Length (meter) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			cout << "\n\n" << user_length << " Meter is " << user_length / 1609.0 << " Mile";
		}
	}
	else if (user_choice == 4)
	{
		int conversion_choice;
		float user_length;
		string output_choice = "------------------Select your Choice------------\n1.Inch\n2.Foot\n3.Meter\n\nEnter your choice : ";

		for (int i = 0; i < output_choice.length(); i++)
		{
			Sleep(120);
			cout << output_choice[i];
		}

		cin >> conversion_choice;
		cout << "\n\n";

		if (conversion_choice == 1)
		{
			string output = "------------------Mile to Inch------------\n\nEnter Length (miles) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;

			double answer = user_length * 63360.0;

			cout << "\n\n" << user_length << " Mile is " << answer << " Inch";
		}
		else if (conversion_choice == 2)
		{
			string output = "------------------Mile to Foot------------\n\nEnter Length (meter) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;
			double answer = user_length * 5280.0;

			cout << "\n\n" << user_length << " Mile is " << answer << " foot";
		}
		else if (conversion_choice == 3)
		{
			string output = "------------------Mile to Meter------------\n\nEnter Length (meter) : ";

			for (int i = 0; i < output.length(); i++)
			{
				Sleep(120);
				cout << output[i];
			}

			cin >> user_length;
			double answer = user_length * 1609.0;

			cout << "\n\n" << user_length << " Mile is " << answer << " meter";
		}
	}

}						

void Time_converter()
{

	// Get the current system time
	auto currentTime = chrono::system_clock::now();

	// Define time zones
	const chrono::hours timeZones[] = 
	{
		chrono::hours(-12),chrono::hours(-8),
		chrono::hours(-5),chrono::hours(0),
		chrono::hours(2), chrono::hours(5),
		chrono::hours(8), chrono::hours(10),
		chrono::hours(12),chrono::hours(15)
	};

	cout << endl << endl;
	// Display available time zones
	cout << "-----------------Available Time Zones--------------"<<endl << endl;

	for (int i = 0; i < 10; ++i)
	{
		Sleep(120);
		cout << i + 1 << ". GMT" << (timeZones[i] >= chrono::hours(0) ? "+" : "") << timeZones[i].count() << endl;
	}

	// Get user input for source and destination time zones
	int sourceTimeZone, destinationTimeZone;
	cout << "\n\n-----------------Source Time Zone--------------\n\n";
	cout << "\n\nEnter source time zone (1-10): ";
	cin >> sourceTimeZone;
	cout << "\n\n-----------------Destination Time Zone--------------\n\n";
	cout << "Enter destination time zone (1-10): ";
	cin >> destinationTimeZone;

	if (sourceTimeZone < 1 || sourceTimeZone > 10 || destinationTimeZone < 1 || destinationTimeZone > 10) 
	{
		cout << "Invalid time zone input. Please enter a number between 1 and 10." << endl;
		return;
	}

	// Get user input for the time to be converted
	cout << "\n\n-----------------Enter the Time --------------\n\n";
	cout << "Enter the time in HH:MM:SS format: ";
	int hours, minutes, seconds;
	char colon;
	cin >> hours >> colon >> minutes >> colon >> seconds;

	// Calculate the time in the source time zone
	auto sourceTime = currentTime + timeZones[sourceTimeZone - 1];
	auto userTime = chrono::system_clock::from_time_t(chrono::system_clock::to_time_t(sourceTime));
	userTime += chrono::hours(hours) + chrono::minutes(minutes) + chrono::seconds(seconds);

	// Convert the time to the destination time zone
	auto destinationTime = userTime - timeZones[destinationTimeZone - 1];
    
	cout << "\n\n-----------------Converted Time--------------\n\n";

	// Display the converted time using std::put_time and std::localtime
	auto convertedTime = chrono::system_clock::to_time_t(destinationTime);
	cout << "Converted time: " << std::put_time(std::localtime(&convertedTime), "%Y-%m-%d %H:%M:%S") << '\n';

}

void Temperature_converter()
{
	cout << endl << endl;

	char user_choice;
	string menu = "---------------------Your Input-----------------\n\n1.Fahrenheit (F)\n2.Celcius (C)\n\nEnter your Choice: ";

	for (int i = 0; i < menu.length(); i++)
	{
		Sleep(120);
		cout << menu[i];
	}

	cin >> user_choice;

	cout << endl << endl;

	if (user_choice == 'F' || user_choice == 'f')
	{
		float user_temperature;
		float converted_temperature;

		string input_value = "-----------------Fahrenheit to Celcius-----------\n\nEnter temperature (F): ";

		for (int i = 0; i < input_value.length(); i++)
		{
			Sleep(120);
			cout << input_value[i];
		}

		cin >> user_temperature;

		converted_temperature = to_Celcius(user_temperature);

		cout << "\n\n" << user_temperature << " Fahranheit is " << converted_temperature << " Celcius.";
	}

	else
	{

		float user_temperature;
		float converted_temperature;

		string input_value = "-----------------Celcius to Fahrenheit-----------\n\nEnter temperature (C): ";

		for (int i = 0; i < input_value.length(); i++)
		{
			Sleep(120);
			cout << input_value[i];
		}

		cin >> user_temperature;

		converted_temperature = to_Fahranheit(user_temperature);

		cout << "\n\n" << user_temperature << " Celcius is " << converted_temperature << " Fahranheit.";
	}
}

float to_Celcius(float temperature)
{
	float answer;

	answer = (temperature - 32.0) * (5.0 / 9.0);							//(32°F ? 32) × 5/9 = 0°C

	return answer;
}

float to_Fahranheit(float temperature)
{
	float answer;

	answer = ((temperature) *(9.0 / 5.0)) + 32.0 ;							//(0°C × 9/5) + 32 = 32°F

	return answer;
}

int Binary_to_Decimal(long long user_number)
{
	int decimalNumber = 0, i = 0, remainder;

	while (user_number != 0) 
	{
		remainder = user_number % 10;
		decimalNumber += remainder * pow(2, i);
		++i;
		user_number /= 10;
	}

	return decimalNumber;
}

int Binary_to_Octal(long long user_number)
{
	int decimal = Binary_to_Decimal(user_number);

	int octal = Decimal_to_Octal(decimal);

	return octal;
}

void Binary_to_Hexa(long long user_number)
{
	int decimal = Binary_to_Decimal(user_number);

	Decimal_to_Hexa(decimal);

	
}

void Decimal_to_Binary(int decimal)
{
	int Binary[50];
	int i = 0, count=0;
	while ( decimal != 0 && decimal !=1)
	{
		Binary[i] = decimal % 2;
		decimal /= 2;
		count++;
		i++;
	}

	int j = count ;
	
	Binary [j] = decimal;

	cout << "\n\nBinary Equvilent: ";

	for(int i = j; i >= 0; i--)
	{
		cout << Binary[i];
	}
}

int Decimal_to_Octal(int decimal)
{
	int octal = 0;
	int i = 1;
	
	while (decimal != 0)
	{
		octal = (decimal % 8) * i;
		decimal /= 8;
		i *= 10;
	}

	return octal;
}

void Decimal_to_Hexa(int decimal)
{
	int n = decimal;
	int i = 0, j;
	int hex[100];
	
	
	if (n == 0)
	{
		cout << "\nHexa Equvilant: 0" << "\n\n";

	}
	do
	{
		hex[i] = n % 16;
		i++;
		n = n / 16;
	} while (n >= 16);
	j = i - 1;
	cout << "\nHexa Equvilant: ";
	if (n > 9)
	{
		switch (n)
		{
		case 10: cout << "A";
			break;
		case 11: cout << "B";
			break;
		case 12: cout << "C";
			break;
		case 13: cout << "D";
			break;
		case 14: cout << "E";
			break;
		case 15: cout << "F";
			break;
		case 16: cout << "G";
			break;

		default:
			break;
		}
	}
	else
	{
		cout << n;
	}
	do
	{
		if (hex[j] > 9)

			switch (hex[j])
			{
			case 10: cout << "A";
				break;
			case 11: cout << "B";
				break;
			case 12: cout << "C";
				break;
			case 13: cout << "D";
				break;
			case 14: cout << "E";
				break;
			case 15: cout << "F";
				break;
			case 16: cout << "G";
				break;

			default:
				break;
			}
		else
		{
			cout << hex[j];
		}
		j--;
	} while (j >= 0);
}

void Octal_to_Binary(int octal)
{
	int decimal = Octal_to_Decimal(octal);

	Decimal_to_Binary(decimal);

}

int Octal_to_Decimal(int  octal)
{
	int decimalNumber = 0, i = 0, remainder;

	
	while (octal != 0) {
		remainder = octal % 10;
		decimalNumber += remainder * pow(8, i);
		++i;
		octal /= 10;
	}

	return decimalNumber;
}

void Octal_to_Hexa(int octal)
{
	int decimal = Octal_to_Decimal(octal);

	Decimal_to_Hexa(decimal);
}

void Hexa_to_Binary(string Hexa)
{
	int decimal = Hexa_to_Decimal(Hexa);

	Decimal_to_Binary(decimal);
}

int Hexa_to_Decimal(string Hexa)
{
	int decimalNumber = 0, hexDigit, power = 0;

	// Iterate through each character in reverse order
	for (int i = Hexa.length() - 1; i >= 0; --i) {
		char hexChar = Hexa[i];

		// Convert hexadecimal character to decimal digit
		if (hexChar >= '0' && hexChar <= '9') {
			hexDigit = hexChar - '0';
		}
		else if (hexChar >= 'A' && hexChar <= 'F') {
			hexDigit = hexChar - 'A' + 10;
		}
		else if (hexChar >= 'a' && hexChar <= 'f') {
			hexDigit = hexChar - 'a' + 10;
		}
		else {
			cout << "Invalid hexadecimal character: " << hexChar << endl;
			return -1; // Exit with error code
		}

		// Calculate decimal equivalent
		decimalNumber += hexDigit * pow(16, power);
		++power;
	}

	return decimalNumber;
}

int Hexa_to_Octal(string Hexa)
{
	int octal_D = Hexa_to_Decimal(Hexa);

	int octal = Decimal_to_Octal(octal_D);

	return octal;
}





