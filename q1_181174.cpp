// q1_181174.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"q1_181174.h"
#include "pch.h"
#include"fstream"

void readDataFromFile(GitHubUser *&users)//reading from file or taking input from file
{
	int *num = new int;
	//*users = new GitHubUser[num];
	users = new GitHubUser[*num];
	ifstream in;
	in.open("q1_181174.txt");
		in >> *num;
		for (int i = 0;i <= *num;i++)
		{
			in >> users[i].FirstName;
			in >> users[i].UserName;
			in >> users[i].email;
			in >> users[i].FolderCount;
			for (int j = 0;j < users[i].FolderCount;j++)
			{
				in >> users[i].folders;
			}
		}
		in.close;
}
void setEduBckGrnd(GitHubUser &user)
{
	cout << "enter your institute name" << endl;
	cin >> *user.institute_name;
	cout << "enter your qualificationlevel" << endl;
	cin >> *user.qualification_level;
}
void print(GitHubUser &user)
{


}



int main()
{
	int size;
	GitHubUser *users;
	int a;
	cout << "how many users you want to enter";
	cin >> size;
	for (int i = 0;i < size;i++)
	{

		cout << "enter your username";

		cin >> users[i].UserName;

		cout << "enter your First Name";

		cin >> users[i].FirstName;

		cout << "enter your email";

		cin >> users[i].email;

		cout << "enter your password";

		cin >> users[i].password;

		cout << "enter your folder count";

		cin >> users[i].FolderCount;
		for (int i = 0;i < users[i].FolderCount;i++)
		{
			cin >> users[i].folders;
		}
		cout << "if you want to enter information about your educational background enter 1 " << endl;
		cin >> a;
		if (a == 1)
			setEduBckGrnd(users[i]);

	}

}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
