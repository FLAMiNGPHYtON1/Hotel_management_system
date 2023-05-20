#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int Room_Cost_Function(int Room_ID)
{
	int Price_Per_Day = 0;
	switch (Room_ID)
	{
	case 101:
	{
		Price_Per_Day = 180;
		break;
	}
	case 102:
	{
		Price_Per_Day = 200;
		break;
	}
	case 103:
	{
		Price_Per_Day = 250;
		break;
	}
	case 104:
	{
		Price_Per_Day = 400;
		break;
	}
	case 105:
	{
		Price_Per_Day = 500;
		break;
	}
	case 201:
	{
		Price_Per_Day = 180;
		break;
	}
	case 202:
	{
		Price_Per_Day = 200;
		break;
	}
	case 203:
	{
		Price_Per_Day = 250;
		break;
	}
	case 204:
	{
		Price_Per_Day = 400;
		break;
	}
	case 205:
	{
		Price_Per_Day = 500;
		break;
	}
	default:
	{
		break;
	}
	
	}
	return Price_Per_Day;
}

void flushline(void)
{
	int ch;
	while ((ch = getchar() != '\n') && (ch != EOF));
}

int RoomID_Duplicate_Checker(int Room_ID)
{
	int Array_Count = 0;
	int Room_ID_2;
	char* Token5 = NULL;
	char* Next_Token5 = NULL;
	char Delimeter[] = ": ";
	char Booking_Detail_string[1001];
	int Room_ID_Array[11];
	int Iteration = 0;

	FILE* Booking_File;
	errno_t err;
	err = fopen_s(&Booking_File, "Booking_Details.txt", "r");
	if (err == 0)
	{
		;
	}
	else
	{
		printf("\nError opening file\n");
		exit(1);
	}
	while (fgets(Booking_Detail_string, 1000, Booking_File) != NULL)
	{

		int Count = 0;
		Token5 = strtok_s(Booking_Detail_string, Delimeter, &Next_Token5);
		Count++;

		while (Token5 && Count < 5)
		{
			Token5 = strtok_s(NULL, Delimeter, &Next_Token5);
			Count++;
		}
		Room_ID_2 = atoi(Token5);
		Room_ID_Array[Array_Count] = Room_ID_2;
		Array_Count++;
	}
	for (Iteration = 0; Iteration < (sizeof(Room_ID_Array) / sizeof(Room_ID_Array[0])); Iteration++)
	{
		if (Room_ID == Room_ID_Array[Iteration])
		{
			fclose(Booking_File);
			return 0;
		}
		else
		{
			;
		}

	}
	fclose(Booking_File);
	return 1;



}

int Email_Checker(char Dynamic_Email_Address[])
{
	const char Gmail[] = "gmail.com\n";
	const char Yahoo[] = "yahoo.com\n";
	const char Outlook[] = "outlook.com\n";
	char Email_Domain_Checking[15];
	char Character_Checking;
	int Position_of_At;
	int Step1, Step2 = 0, Step3;
	int Iteration = 0;
	for (Iteration = 0; Iteration < 999; Iteration++)
	{
		if (Dynamic_Email_Address[Iteration] == '@')
		{
			Step1 = 1;
			Position_of_At = Iteration;
			break;
		}
		else
		{
			Step1 = 0;
		}
	}

	if (Step1 == 1)
	{
		for (Iteration = 0; Iteration < Position_of_At; Iteration++)
		{
			Character_Checking = Dynamic_Email_Address[Iteration];
			switch (Character_Checking)
			{
			case '@':
				return 0;
				break;
			case '!':
				return 0;
				break;
			case '#':
				return 0;
				break;
			case '$':
				return 0;
				break;
			case '%':
				return 0;
				break;
			case '^':
				return 0;
				break;
			case '&':
				return 0;
				break;
			case '*':
				return 0;
				break;
			case '(':
				return 0;
				break;
			case ')':
				return 0;
				break;
			case '=':
				return 0;
				break;
			case '-':
				return 0;
				break;
			case '+':
				return 0;
				break;
			case '}':
				return 0;
				break;
			case '{':
				return 0;
				break;
			case ']':
				return 0;
				break;
			case '[':
				return 0;
				break;
			case '|':
				return 0;
				break;
			case ' ':
				return 0;
				break;
			case ';':
				return 0;
				break;
			case ':':
				return 0;
				break;
			case '?':
				return 0;
				break;
			case '.':
				return 0;
				break;
			case '>':
				return 0;
				break;
			case '<':
				return 0;
				break;
			case ',':
				return 0;
				break;
			case '/':
				return 0;
				break;
			case '"':
				return 0;
				break;
			default:
				Step2 = 1;
			}
		}
		if (Step2 == 1)
		{
			memset(Email_Domain_Checking, '\0', sizeof(Email_Domain_Checking));
			strncpy_s(Email_Domain_Checking, 15, (Dynamic_Email_Address + Position_of_At + 1), 12);
			Step3 = strncmp(Email_Domain_Checking, Gmail, sizeof(Gmail));
			if (Step3 != 0)
			{
				Step3 = strncmp(Email_Domain_Checking, Yahoo, sizeof(Yahoo));
				if (Step3 != 0)
				{
					Step3 = strncmp(Email_Domain_Checking, Outlook, sizeof(Outlook));
					if (Step3 != 0)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}

	}
	else
	{
		return 0;
	}
}

int Username_Checker(char Name[], int sizeofarray)
{
	int Step1 = NULL, Step2 = NULL;
	char Character_Checking;
	int Iteration = 0;
	for (Iteration = 0; Iteration < sizeofarray; Iteration++)
	{
		Character_Checking = Name[Iteration];
		switch (Character_Checking)
		{
		case '!':
			return 0;
			break;
		case '@':
			return 0;
			break;
		case '#':
			return 0;
			break;
		case '$':
			return 0;
			break;
		case '%':
			return 0;
			break;
		case '^':
			return 0;
			break;
		case '&':
			return 0;
			break;
		case '*':
			return 0;
			break;
		case '(':
			return 0;
			break;
		case ')':
			return 0;
			break;
		case '-':
			return 0;
			break;
		case '=':
			return 0;
			break;
		case '+':
			return 0;
			break;
		case '[':
			return 0;
			break;
		case ']':
			return 0;
			break;
		case '|':
			return 0;
			break;
		case '{':
			return 0;
			break;
		case '}':
			return 0;
			break;
		case ' ':
			return 0;
			break;
		case ';':
			return 0;
			break;
		case ':':
			return 0;
			break;
		case '"':
			return 0;
			break;
		case ',':
			return 0;
			break;
		case '<':
			return 0;
			break;
		case '.':
			return 0;
			break;
		case '>':
			return 0;
			break;
		case '/':
			return 0;
			break;
		case '?':
			return 0;
			break;
		default:
			Step1 = 1;
		}
	}
	if (Step1 == 1)
	{
		for (Iteration = 0; Iteration < sizeofarray; Iteration++)
		{
			if (isdigit(Name[Iteration]))
			{
				Step2 = 0;
				return 0;
				break;
			}
			else
			{
				Step2 = 1;
			}
		}
		if (Step2 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

void Update_Booking_Details(void)
{
	while (1) /*While State 3*/
	{
		struct Booking_Info
		{
			char Name[1001];
			char Email[101];
			char Contact_Number[51];
			int Days_of_Stay;
			char Passport_number[51];
			int Room_ID;
		};
		struct Booking_Info Customer;

		FILE* Booking_File3;
		FILE* Output_File;

		int Room_ID_2;
		int Room_ID;
		int Return_to_Main_Menu = 0;
		int State = 0;
		int line_position = 0;
		int Line_Position2 = 0;
		int Iteration = 0;
		int Room_ID_Numbers[10] = { 101, 102, 103, 104, 105,
								201, 202, 203, 204, 205 };
		int Room_Found = 0;
		char* Token = NULL;
		char* Token2 = NULL;
		char* Next_Token = NULL;
		char* Next_Token2 = NULL;
		char Delimeter[] = ": ";
		char Booking_Detail_string[1001];
		char Booking_Detail_string2[1001];
		char Temp[] = "Temp.txt";
		char Booking_Detail_string3[1001];
		char Modified_Line[1001];



		printf("\n--------------------------------------------------\n");
		printf("Please enter a ROOM ID to updates its booking details\n");
		printf("Or enter '3' to return to the main menu:- ");
		scanf_s("%d", &Room_ID);
		flushline();
		switch (Room_ID)
		{
		case 3:
		{
			Return_to_Main_Menu = 1;
			break;
		}

		default:
		{
			;
		}
		}
		if (Return_to_Main_Menu == 1)
		{
			break;
		}

		/*Error checking in file being opened*/

		errno_t err;
		err = fopen_s(&Booking_File3, "Booking_Details.txt", "r");
		if (err == 0)
		{
			;
		}
		else
		{
			printf("\nError opening file\n");
			perror("Error Message:-");
			exit(1);
		}
		err = fopen_s(&Output_File, Temp, "w+");
		if (err == 0)
		{
			;
		}
		else
		{
			printf("\nError opening file\n");
			perror("Error Message:-");
			exit(1);
		}

		/*Checking if file is empty, then resetting pointer position*/

		fseek(Booking_File3, 0, SEEK_END);
		if (ftell(Booking_File3) == 0)
		{
			printf("---------------------------------------\n");
			printf("No bookings have been made as of yet!\n");
			printf("-------------------------------------\n");
			if (Booking_File3)
			{
				err = fclose(Booking_File3);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Booking_File3)\n");
				}
			}
			if (Output_File)
			{
				err = fclose(Output_File);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Output_File)\n");
				}
			}
			break;
		} /*Checking if file is empty, then resetting pointer position*/
		else
		{
			fseek(Booking_File3, 0, SEEK_SET);
		}
		/*While loop to take each individual string as input*/
		 /*While State 2*/
		while (fgets(Booking_Detail_string, 1000, Booking_File3) != NULL)
		{
			int Count = 0;
			int While_State2 = 0;
			++line_position;
			strncpy_s(Booking_Detail_string2, 1001, Booking_Detail_string, 1000);	
			Token = strtok_s(Booking_Detail_string, Delimeter, &Next_Token);
			Count++;
			while (Token && Count < 5)
			{
				Token = strtok_s(NULL, Delimeter, &Next_Token);
				Count++;
			}
			Room_ID_2 = atoi(Token);

			/* Checks if Room ID from line is equal to inputted Room ID*/

			if (Room_ID == Room_ID_2)
			{
				Token2 = strtok_s(Booking_Detail_string2, Delimeter, &Next_Token2);
				strncpy_s(Customer.Name, 1001, Token2, 1000);			
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				strncpy_s(Customer.Email, 101, Token2, 100);
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				strncpy_s(Customer.Passport_number, 51, Token2, 50);
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				strncpy_s(Customer.Contact_Number, 51, Token2, 50);
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				Customer.Room_ID = atoi(Token2);
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				Customer.Days_of_Stay = atoi(Token2);

				while (1) /*While_State 1*/
				{
					int While_State1 = 0;
					int Answer = 0;
					printf("\n\n-------------------------------------\n");
					printf("||1. Email\n");
					printf("||2. Contact Number\n");
					printf("||3. Days of Stay\n");
					printf("||4. Room ID\n");
					printf("||5. Return to the previous menu\n");
					printf("||-----------------------------------\n");
					printf("Which detail do you wish to modify?:- ");
					scanf_s("%d", &Answer);
					flushline();
					switch (Answer)
					{
					case 1:
						{
							while (1)
							{
								int state;
								char* Dynamic_Email_Address = NULL;
								Dynamic_Email_Address = malloc(20 * sizeof(Customer.Email));
								if (Dynamic_Email_Address == NULL)
								{
									printf("Unable to allocated required memory\n");
								}
								else
								{
									printf("\n-------------------------------------\n");
									printf("Please enter your new email address:- ");
									fgets(Dynamic_Email_Address, 1000, stdin);
								}
								state = Email_Checker(Dynamic_Email_Address);
								if (state == 1)
								{
									strncpy_s(Customer.Email, 101, Dynamic_Email_Address, 101);
									Customer.Email[strcspn(Customer.Email, "\n")] = 0;
									sprintf_s(Modified_Line, 1001, "%s : %s : %s : %s : %d : %d\n", Customer.Name, Customer.Email, Customer.Passport_number, Customer.Contact_Number, Customer.Room_ID, Customer.Days_of_Stay);
									While_State1 = 1;
									While_State2 = 1;
									printf("\n-----------------\n");
									printf("Update successful!\n");
									printf("------------------\n");
									break;
								}
								else
								{
									printf("\n---------------------------------------\n");
									printf("Incorrect email format, please try again.\n");
									printf("-----------------------------------------\n");
								}
							}
							State = 1;
							break;
						}
					case 2:
						{
							while (1)
							{
								int state = 0;
								printf("\n--------------------------------------------------\n");
								printf("Please enter your new contact number (only digits):- ");
								fgets(Customer.Contact_Number, 51, stdin);
								Customer.Contact_Number[strcspn(Customer.Contact_Number, "\n")] = 0;
								for (Iteration = 0; Customer.Contact_Number[Iteration] != '\0'; Iteration++)
								{
									if (!isdigit(Customer.Contact_Number[Iteration]))
									{
										printf("\n---------------------------------------------------------\n");
										printf("Invalid phone number, please try again with only numbers.\n");
										printf("---------------------------------------------------------\n");
										state = 0;
										break;
									}
									else
									{
										state = 1;
									}
								}
								if (state == 0)
								{
									/*Loop Repeats*/
									;
								}
								else
								{
									if (strnlen_s(Customer.Contact_Number, 50) > 20 || strnlen_s(Customer.Contact_Number, 50) < 10)
									{
										printf("\n-----------------------------------------------------\n");
										printf("Contact Number is not of sufficient size, please enter \n");
										printf("a number less than 20 digits And greater than 10 digits\n");
										printf("-------------------------------------------------------\n");
									}
									else
									{									
										Customer.Contact_Number[strcspn(Customer.Contact_Number, "\n")] = 0;
										sprintf_s(Modified_Line, 1001, "%s : %s : %s : %s : %d : %d\n", Customer.Name, Customer.Email, Customer.Passport_number, Customer.Contact_Number, Customer.Room_ID, Customer.Days_of_Stay);
										While_State1 = 1;
										While_State2 = 1;
										printf("\n-----------------\n");
										printf("Update successful!\n");
										printf("------------------\n");
										break;									
									}

								}

							}
							State = 1;
							break;
						}
					case 3:
						{
						while (1)
							{
								printf("-------------------------------------------------\n");
								printf("How many days would you like to rebook your stay?\n");
								printf("You can only book a room for up to 1 to 7 days.:- ");
								scanf_s("%d", &Customer.Days_of_Stay);
								flushline();
								if (Customer.Days_of_Stay < 8 && Customer.Days_of_Stay > 0)
								{
									sprintf_s(Modified_Line, 1001, "%s : %s : %s : %s : %d : %d\n", Customer.Name, Customer.Email, Customer.Passport_number, Customer.Contact_Number, Customer.Room_ID, Customer.Days_of_Stay);
									While_State1 = 1;
									While_State2 = 1;
									printf("\n-----------------\n");
									printf("Update successful!\n");
									printf("------------------\n");
									break;
								}
								else
								{
									printf("\n-----------------------------------------------------\n");
									printf("You have entered an invalid answer, please try again.\n");
									printf("-----------------------------------------------------\n");
								}
							}
							State = 1;
							break;
						}
					case 4:
						{
						while (1)
						{
							int state = 0;
							int Room_ID;
							printf("\n----------------------------------------\n");
							printf("Which room would you like to rebook to?:- ");
							scanf_s("%d", &Room_ID);
							flushline();
							for (Iteration = 0; Iteration < 10; Iteration++)
							{
								if (Room_ID == Room_ID_Numbers[Iteration])
								{
									Room_Found = 1;
									break;
								}
								else
								{
									Room_Found = 0;
								}
							}
							if (Room_Found == 1)
							{
								state = RoomID_Duplicate_Checker(Room_ID);
								if (state == 1)
								{
									sprintf_s(Modified_Line, 1001, "%s : %s : %s : %s : %d : %d\n", Customer.Name, Customer.Email, Customer.Passport_number, Customer.Contact_Number, Room_ID, Customer.Days_of_Stay);
									While_State1 = 1;
									While_State2 = 1;
									printf("\n-----------------\n");
									printf("Update successful!\n ");
									printf("------------------\n");
									break;
								}
								else
								{
									printf("\n--------------------------------------------------------------------\n");
									printf("This room has already been booked!, please type in another room's ID\n");
									printf("--------------------------------------------------------------------\n");
								}

							}
							else
							{
								printf("\n-------------------------------------------------\n");
								printf("Room ID not found, please type in the correct ID.\n");
								printf("-------------------------------------------------\n");
							}
						}
							State = 1;
							break;
						}
					case 5:
						{
							While_State1 = 1;
							While_State2 = 1;
							break;
						}
					default:
						{
							printf("\n------------------------------------------------------\n");
							printf("You have entered an incorrect value, please try again.\n");
							printf("------------------------------------------------------\n");
							break;
						}
					}
					if (While_State1 == 1)
					{
						break;
					}						
				}
			}
			else
			{
				State = 0;
			}
			if (While_State2 == 1)
			{
				break;
			}
		}
		if (State == 0)
		{
			printf("\n----------------------------------\n");
			printf("This room has not been booked yet!\n");
			printf("----------------------------------\n");
			if (Booking_File3)
			{
				err = fclose(Booking_File3);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Booking_File3)\n");
				}
			}
			if (Output_File)
			{
				err = fclose(Output_File);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Output_File)\n");
				}
			}
		}
		else
		{
			/* Program prints line from orignal txt file onto temporary text file, along with modified booking details*/
			fseek(Booking_File3, 0, SEEK_SET);
			while (fgets(Booking_Detail_string3, 1000, Booking_File3) != NULL)
			{
				Line_Position2++;
				if (Line_Position2 != line_position)
				{
					fprintf(Output_File, "%s", Booking_Detail_string3);
				}
				else
				{
					fprintf(Output_File, "%s", Modified_Line);
				}
			}
			if (Booking_File3)
			{
				err = fclose(Booking_File3);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Booking_File3)\n");
				}
			}
			if (Output_File)
			{
				err = fclose(Output_File);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Output_File)\n");
				}
			}
			err = remove("Booking_Details.txt");
			if (err == 0)
			{
				;
			}
			else
			{
				printf("\nError removing file\n");
				perror("Error Message:-");
				exit(1);
			}
			err = rename(Temp, "Booking_Details.txt");
			if (err == 0)
			{
				;
			}
			else
			{
				printf("\nError renaming file\n");
				perror("Error Message:-");
				exit(1);
			}

			break;
		}
	}
}

void Search_Booking_Details(void)
{
	while (1)
	{
		struct Booking_Info
		{
			char Name[1001];
			char Email[101];
			char Contact_Number[51];
			int Days_of_Stay;
			char Passport_number[51];
			int Room_ID;
		};
		struct Booking_Info Customer;
		FILE* Booking_File2;
		int Room_ID_2;
		int Room_ID;
		int Return_to_Main_Menu = 0;
		int State = 0;
		char* Token = NULL;
		char* Token2 = NULL;
		char* Next_Token = NULL;
		char* Next_Token2 = NULL;
		char Delimeter[] = ": ";		
		char Booking_Detail_string[1001];
		char Booking_Detail_string2[1001];
		printf("\n--------------------------------------------------\n");
		printf("Please enter a ROOM ID to view its booking details:-\n");
		printf("Or enter '3' to return to the main menu:- ");
		scanf_s("%d", &Room_ID);
		flushline();
		switch (Room_ID)
		{
			case 3:
			{
				Return_to_Main_Menu = 1;
				break;
			}
	
			default:
			{
				;
			}
		}
		if (Return_to_Main_Menu == 1)
		{
			break;
		}
		errno_t err;
		err = fopen_s(&Booking_File2, "Booking_Details.txt", "r");
		if (err == 0)
		{
			;
		}
		else
		{
			printf("\nError opening file\n");
			perror("Error Message:-");
			exit(1);
		}
		fseek(Booking_File2, 0, SEEK_END);
		if (ftell(Booking_File2) == 0)
		{
			printf("---------------------------------------\n");
			printf("No bookings have been made as of yet!\n");
			printf("-------------------------------------\n");
			break;
		}
		else
		{
			fseek(Booking_File2, 0, SEEK_SET);
		}
		while (fgets(Booking_Detail_string, 1000, Booking_File2) != NULL)
		{

			strncpy_s(Booking_Detail_string2, 1001, Booking_Detail_string, 1000);
			int Count = 0;
			Token = strtok_s(Booking_Detail_string, Delimeter, &Next_Token);
			Count++;

			while (Token && Count < 5)
			{
				Token = strtok_s(NULL, Delimeter, &Next_Token);
				Count++;
			}
			Room_ID_2 = atoi(Token);
			if (Room_ID == Room_ID_2)
			{
				Token2 = strtok_s(Booking_Detail_string2, Delimeter, &Next_Token2);
				strncpy_s(Customer.Name, 1001, Token2, 1000);
				
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				strncpy_s(Customer.Email, 101, Token2, 101);
				
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				strncpy_s(Customer.Passport_number, 51, Token2, 50);
				
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				strncpy_s(Customer.Contact_Number, 51, Token2, 50);
				
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				Customer.Room_ID = atoi(Token2);
				
				Token2 = strtok_s(NULL, Delimeter, &Next_Token2);
				Customer.Days_of_Stay = atoi(Token2);
				
				printf("\n------------------------------------------------------\n");
				printf("||Room ID Number:-  %d\n", Customer.Room_ID);
				printf("||Name:-            %s\n", Customer.Name);
				printf("||Email:-          %s\n", Customer.Email);
				printf("||Passport Number:-%s\n", Customer.Passport_number);
				printf("||Contact Number:- %s\n", Customer.Contact_Number);
				printf("||Days of Stay:-    %d\n", Customer.Days_of_Stay);
				printf("------------------------------------------------------\n");
				State = 1;
				break;
			}
			else
			{
				State = 0;
			}
			
		}
		if (State == 0)
		{
			printf("----------------------------------\n");
			printf("This room has not been booked yet!\n");
			printf("----------------------------------\n");
		}
		if (Booking_File2)
		{
			err = fclose(Booking_File2);
			if (err == 0)
			{
				;
			}
			else
			{
				printf("\nError closing file\n");
			}
		}
	}
}

void Booking_Function(void)
{
	struct Booking_Info
	{
		char Name[1001];
		char Email[101];
		char Contact_Number[51];
		int Days_of_Stay;
		char Passport_number[51];
		int Room_ID;
	};
	struct Booking_Info Customer;
	FILE *Booking_File;
	int Return_to_Main_Menu = 0;
	int Iteration;
	int State;
	int Room_ID_Numbers[10] = { 101, 102, 103, 104, 105,
								201, 202, 203, 204, 205 };
	int Room_Found = 0;
	while (1)
	{
		printf("\n--------------------------------------------------------");
		printf("\n   Welcome to Ali's Hotel Online Room Booking System");
		printf("\n--------------------------------------------------------\n");
		printf("|   Room ID    |    Room Type    |    Price Per Day    |\n");
		printf("|     101      |    Superior     |       RM180         |\n");
		printf("|     102      |     Deluxe      |       RM180         |\n");
		printf("|     103      |     Studio      |       RM180         |\n");
		printf("|     104      | Executive Suite |       RM180         |\n");
		printf("|     105      |  Deluxe Suite   |       RM180         |\n");
		printf("|     201      |    Superior     |       RM180         |\n");
		printf("|     202      |     Deluxe      |       RM180         |\n");
		printf("|     203      |     Studio      |       RM180         |\n");
		printf("|     204      | Executive Suite |       RM180         |\n");
		printf("|     205      |  Deluxe Suite   |       RM180         |\n");
		printf("--------------------------------------------------------\n");
		/*User Enters Room ID*/
		while (1)
		{
			int State;
			printf("\n----------------------------------------------------------------------------\n");
			printf("Which room would you like to book? Please enter the Room's ID from the list.\n");
			printf("----------------------------------------------------------------------------\n");
			printf("Or Enter '3' to return to the main menu:- ");
			scanf_s("%d", &Customer.Room_ID);
			flushline();
			switch (Customer.Room_ID)
			{
				case 3:
				{
					Return_to_Main_Menu = 1;
					break;
				}

				default:
				{
					;
					break;
				}
			}
			if (Customer.Room_ID == 3)
			{
				break;
			}
			for (Iteration = 0; Iteration < 10; Iteration++)
			{
				if (Customer.Room_ID == Room_ID_Numbers[Iteration])
				{
					Room_Found = 1;
					break;
				}
				else
				{
					Room_Found = 0;
				}
			}
			if (Room_Found == 1)
			{
				State = RoomID_Duplicate_Checker(Customer.Room_ID);
				if (State == 1)
				{
					break;
				}
				else
				{
					printf("\n--------------------------------------------------------------------\n");
					printf("This room has already been booked!, please type in another room's ID\n");
					printf("--------------------------------------------------------------------\n");
				}

			}
			else
			{
				printf("\n-------------------------------------------------------------------\n");
				printf("Room ID not found, please type in the correct ID given in the list.\n");
				printf("-------------------------------------------------------------------\n");
			}
		}
		if (Return_to_Main_Menu == 1)
		{
			break;
		}
		/*User Enters Name*/
		while (1)
		{
			char Character_Checker;
			int sizeofarray = 0;
			printf("---------------------------------------------------------------------\n");
			printf("Please enter your Name (Only certain special characters are allowed):- ");
			fgets(Customer.Name, 1001, stdin);
			Customer.Name[strcspn(Customer.Name, "\n")] = 0;
			for (Iteration = 0; Customer.Name[Iteration] != '\0'; Iteration++)
			{
				Character_Checker = Customer.Name[Iteration];
				sizeofarray++;
			}
			State = Username_Checker(Customer.Name, sizeofarray);
			if (State == 1)
			{
				break;
			}
			else
			{
				printf("\n----------------------------------------\n");
				printf("Incorrect Name format, please try again.\n");
				printf("----------------------------------------\n");

			}
		}
		/*User Enters Email Address*/
		while (1)
		{
			int state;
			char* Dynamic_Email_Address = NULL;
			Dynamic_Email_Address = malloc(20 * sizeof(Customer.Email));
			if (Dynamic_Email_Address == NULL)
			{
				printf("Unable to allocated required memory\n");
			}
			else
			{
				printf("----------------------------------\n");
				printf("Please enter your email address:- ");
				fgets(Dynamic_Email_Address, 1000, stdin);
			}
			state = Email_Checker(Dynamic_Email_Address);
			if (state == 1)
			{			
				strncpy_s(Customer.Email, 101, Dynamic_Email_Address, 101);
				Customer.Email[strcspn(Customer.Email, "\n")] = 0;
				break;
			}
			else
			{
				printf("\n---------------------------------------\n");
				printf("Incorrect email format, please try again.\n");
				printf("-----------------------------------------\n");
			}
		}
		/*User Enters Contact Number*/
		while (1)
		{
			State = 0;
			printf("-----------------------------------------------\n");
			printf("Please enter your contact number (only digits):- ");
			fgets(Customer.Contact_Number, 51, stdin);
			Customer.Contact_Number[strcspn(Customer.Contact_Number, "\n")] = 0;
			for (Iteration = 0; Customer.Contact_Number[Iteration] != '\0'; Iteration++)
			{
				if (!isdigit(Customer.Contact_Number[Iteration]))
				{
					printf("\n---------------------------------------------------------\n");
					printf("Invalid phone number, please try again with only numbers.\n");
					printf("---------------------------------------------------------\n");
					State = 0;
					break;
				}
				else
				{
					State = 1;
				}
			}
			if (State == 0)
			{
				/*Loop Repeats*/
				;
			}
			else
			{
				if (strnlen_s(Customer.Contact_Number, 50) > 20 || strnlen_s(Customer.Contact_Number, 50) < 10)
				{
					printf("\n-----------------------------------------------------\n");
					printf("Contact Number is not of sufficient size, please enter \n");
					printf("a number less than 20 digits And greater than 10 digits\n");
					printf("-------------------------------------------------------\n");
				}
				else
				{
					Customer.Contact_Number[strcspn(Customer.Contact_Number, "\n")] = 0;
					break;
				}
			}
		}
		/*User Enters Passport Number*/	
		while (1)
		{
			printf("----------------------------------\n");
			printf("Please enter your passport number:- ");
			fgets(Customer.Passport_number, 51, stdin);
			Customer.Passport_number[strcspn(Customer.Passport_number, "\n")] = 0;
			for (Iteration = 0; Iteration < 51; Iteration++)
			{
				if (isalnum(Customer.Passport_number[Iteration] == 0))
				{
					printf("\n-----------------------------------------------------------------------\n");
					printf("Passport number contains a non alphanumeric character, please try again\n");
					printf("-----------------------------------------------------------------------\n");
					State = 0;
					break;
				}
				else
				{
					State = 1;
				}
			}
			if (State == 0)
			{
				;
			}
			else
			{
				if (strnlen_s(Customer.Passport_number, 50) > 13 || strnlen_s(Customer.Passport_number, 50) < 8)
				{
					printf("\n-----------------------------------------------------------------------\n");
					printf("Passport number is of insufficient size, please enter a passport number\n");
					printf("greater than 8 digits/characters and less than 14 digits/characters.   \n");
					printf("-----------------------------------------------------------------------\n");
				}
				else
				{
					if (State == 1)
					{
						break;
					}
					else
					{
						;
					}
				}
			}
			
		}
		/*User Enters the number of days they will stay in the hotel*/		
		while (1)
		{
			printf("-----------------------------------------------\n");
			printf("How many days would you like to book your stay?\n");
			printf("You can only book a room for up to 7 days.:- ");
			scanf_s("%d", &Customer.Days_of_Stay);
			flushline();
			if (Customer.Days_of_Stay < 8 && Customer.Days_of_Stay > 0)
			{
				break;
			}
			else
			{
				printf("\n-----------------------------------------------------\n");
				printf("You have entered an invalid answer, please try again.\n");
				printf("-----------------------------------------------------\n");
			}
		}
		/*Program checks for error in opening Booking_Details file*/
		errno_t err;
		err = fopen_s(&Booking_File,"Booking_Details.txt", "a+");
		if (err == 0)
		{
			;
		}
		else
		{
			printf("\nError opening file\n");
			perror("Error Message:-");
			exit(1);
		}
		fprintf(Booking_File, "%s : %s : %s : %s : %d : %d\n", Customer.Name, Customer.Email, Customer.Passport_number, Customer.Contact_Number, Customer.Room_ID, Customer.Days_of_Stay);
		printf("\n-------------------\n");
		printf("Booking successful!\n");
		printf("-------------------\n");
		/*Program checks for error in closing Booking_Details file*/
		if (Booking_File) 
		{
			err = fclose(Booking_File);
			if (err == 0)
			{
				;
			}
			else
			{
				printf("\n------------------\n");
				printf("Error closing file123\n");
				printf("------------------\n");
			}
		}
		break;
	}
}

void Cost_Function(void)
{
	struct Booking_Info
	{
		char Name[1001];
		char Email[101];
		char Contact_Number[51];
		int Days_of_Stay;
		char Passport_number[51];
		int Room_ID;
	};
	struct Booking_Info Customer;
	FILE* Booking_File4;
	FILE* Room_Costs;
	int Return_to_Main_Menu = 0;
	int Iteration;
	int Room_ID_Numbers[10] = { 101, 102, 103, 104, 105,
								201, 202, 203, 204, 205 };
	int Price_Per_Day;
	int Room_Found = 0;
	int Room_ID_2;
	char* Token = NULL;
	char* Token2 = NULL;
	char* Next_Token = NULL;
	char* Next_Token2 = NULL;
	char* Token3 = NULL;
	char* Token4 = NULL;
	char* Next_Token3 = NULL;
	char* Next_Token4 = NULL;
	char Delimeter[] = ": ";
	char Room_Costs_string[1001];
	char Booking_Detail_string[1001];
	char Room_Costs_string2[1001];
	float Total_Price = 0;

	errno_t err;
	err = fopen_s(&Booking_File4, "Booking_Details.txt", "r");
	if (err == 0)
	{
		;
	}
	else
	{
		printf("\nError opening file\n");
		perror("Error Message:-");
		exit(1);
	}
	err = fopen_s(&Room_Costs, "Room_Costs.txt", "r+");
	if (err == 0)
	{
		;
	}
	else
	{
		printf("\nError opening file\n");
		perror("Error Message:-");
		exit(1);
	}

	fseek(Booking_File4, 0, SEEK_SET);
	while (fgets(Booking_Detail_string, 1000, Booking_File4) != NULL)
	{
		int Count = 0;
		int Count2 = 0;
		Token = strtok_s(Booking_Detail_string, Delimeter, &Next_Token);
		strncpy_s(Customer.Name, 1001, Token, 1000);
		Count++;
		while (Token && Count < 5)
		{
			Token = strtok_s(NULL, Delimeter, &Next_Token);
			Count++;
		}
		Customer.Room_ID = atoi(Token);
		Token = strtok_s(NULL, Delimeter, &Next_Token);
		Count++;
		Customer.Days_of_Stay = atoi(Token);
		Price_Per_Day = Room_Cost_Function(Customer.Room_ID);
		Total_Price = ((Price_Per_Day * Customer.Days_of_Stay) + (0.1 * (Price_Per_Day * Customer.Days_of_Stay)) + (10 * Customer.Days_of_Stay));

		fprintf(Room_Costs, "%s : %d : %d : %d : %.2f\n", Customer.Name, Customer.Room_ID, Customer.Days_of_Stay, Price_Per_Day, Total_Price);
	}
	fseek(Booking_File4, 0, SEEK_SET);
	while (1)
	{
		int While_State1 = 0;
		int State = 0;
		printf("\n-----------------------------------------------------\n");
		printf("Enter ID of room of which you want to see reciept of:-\n");
		printf("Or Enter '3' to return to the main menu:- ");
		scanf_s("%d", &Customer.Room_ID);
		flushline();
		switch (Customer.Room_ID)
		{
		case 3:
		{
			Return_to_Main_Menu = 1;
			break;
		}

		default:
		{
			;
			break;
		}
		}
		if (Return_to_Main_Menu == 1)
		{
			if (Room_Costs)
			{
				err = fclose(Room_Costs);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Room_Costs)\n");
				}
			}
			if (Booking_File4)
			{
				err = fclose(Booking_File4);
				if (err == 0)
				{
					;
				}
				else
				{
					printf("\nError closing file (Booking_File4)\n");
				}
			}
			break;
		}
		for (Iteration = 0; Iteration < 10; Iteration++)
		{
			if (Customer.Room_ID == Room_ID_Numbers[Iteration])
			{
				Room_Found = 1;
				break;
			}
			else
			{
				Room_Found = 0;
			}
		}
		if (Room_Found == 1)
		{
			State = RoomID_Duplicate_Checker(Customer.Room_ID);
			if (State == 1)
			{
				printf("\n----------------------------------------------------------------\n");
				printf("This room has not been booked!, please type in another room's ID\n");
				printf("----------------------------------------------------------------\n");
			}
			else
			{
				fseek(Room_Costs, 0, SEEK_SET);
				while (fgets(Room_Costs_string, 1000, Room_Costs) != NULL)
				{
					int Count = 0;
					strncpy_s(Room_Costs_string2, 1001, Room_Costs_string, 1000);
					Token3 = strtok_s(Room_Costs_string, Delimeter, &Next_Token3);
					Count++;
					while (Token3 && Count < 2)
					{
						Token3 = strtok_s(NULL, Delimeter, &Next_Token3);
						Count++;
					}
					Room_ID_2 = atoi(Token3);
					if (Customer.Room_ID == Room_ID_2)
					{
						Token4 = strtok_s(Room_Costs_string2, Delimeter, &Next_Token4);
						strncpy_s(Customer.Name, 1001, Token4, 1000);
						Token4 = strtok_s(NULL, Delimeter, &Next_Token4);
						Token4 = strtok_s(NULL, Delimeter, &Next_Token4);
						Customer.Days_of_Stay = atoi(Token4);
						Token4 = strtok_s(NULL, Delimeter, &Next_Token4);
						Price_Per_Day = atoi(Token4);
						Token4 = strtok_s(NULL, Delimeter, &Next_Token4);
						Total_Price = atoi(Token4);
						printf("\nx------------------------------------x\n");
						printf("| Name         :- %s \n", Customer.Name);
						printf("| Room ID      :- %d \n", Customer.Room_ID);
						printf("| Days of Stay :- %d \n", Customer.Days_of_Stay);
						printf("| Price per day:- RM%d\n", Price_Per_Day);
						printf("| Total Costs  :- RM%.2f\n", Total_Price);
						printf("x------------------------------------x\n");
						break;
					}	
				}
			}
		}
		else
		{
			printf("\n-------------------------------------------------------------------\n");
			printf("Room ID not found, please type in the correct ID given in the list.\n");
			printf("-------------------------------------------------------------------\n");
		}
	}
}
	
int main(void)
{
	
	int Answer = 0;
	
	while (1)
	{
		printf("\n-----------------------------------------\n");
		printf("Welcome user, what would you like to do?\n");
		printf("-----------------------------------------\n");
		printf("\n");
		printf("1. Book a room\n");
		printf("2. Search a room's booking details.\n");
		printf("3. Update a customer's booking details.\n");
		printf("4. View a customer's booking reciept.\n");
		printf("5. Exit the program.\n\n");
		printf("-----------------------------------------\n");
		printf("Enter choice here:- ");
		scanf_s("%d", &Answer);
		flushline();
		switch (Answer)
		{
			case 1:
			{
				Booking_Function();
				break;
			}
			case 2:
			{
				Search_Booking_Details();
				break;
			}
			case 3:
			{
				Update_Booking_Details();
				break;
			}
			case 4:
			{
				Cost_Function();
				break;
			}
			case 5:
				printf("Program has been terminated\n");
				exit(0);
			default:
			{
				printf("\n-----------------------------------\n");
				printf("Invalid choice, please enter again.\n");
				printf("-----------------------------------\n");
				break;
			}
		}
	}
}