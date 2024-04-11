#include <iostream>
#include <windows.h>
using namespace std;

//Global variables

	string tasks[10];
	int total = 0;
	int numtasks;

//FUNCTION FOR ADD TASKS
void addTasks()
{
	
	cout<<"\n\t_____| ADD NEW TASKS |_____\n\n";
	cout<<"\tHow many tasks you want to add? ";
	cin>>numtasks;
	cout<<"\n";
	
	if (total==0)
	{
		total += numtasks;
		
	    for (int i=0; i<numtasks; i++)
	    {
		   cout<<"\tAdd Task "<<i+1<<":\t";
		   cin>>tasks[i];
	    }
	}
	else
	{
	    for (int i=total; i<total+numtasks; i++)
	    {
		   cout<<"\tAdd Task "<<i+1<<":\t";
		   cin>>tasks[i];
	    }	
		total += numtasks;
	}
    cout<<"\n\t____________________________\t\n\n";
	
	return;
}
//FUNCTION FOR SHOW TASKS
void showTasks()
{
	cout<<"\n\t_____| CURRENT TASKS |_____\t\n\n";
	if (total==0)
	{
		cout<<"\tYou Do\'nt have any tasks currently\n";
	}
	for (int i=0; i<total; i++)
	{
		cout<<"\tTask "<<i+1<<"\t"<<tasks[i];
		cout<<"\n";
	}
	cout<<"\n\t____________________________\t\n\n";
	
	return;
}
//COMPLETED TASKS FUNCTION
void markCompleted()
{
	char c;
	cout<<"\n\t_____| MARK AS COMPLETED |_____\t\n\n";
	if (total==0)
	{
		cout<<"\tYou Do\'nt have any tasks currently\n";
	}
	for (int i=0; i<total; i++)
	{
		cout<<"\tTask "<<i+1<<"\t"<<tasks[i];
		cout<<"\n";
		cout<<"\tHave you Done this Task(Y/N): ";
		cin>>c;
		if (c=='Y' || c=='y')
		{
			cout<<"\n\t"<<tasks[i]<<" COMPLETED\n\n";
		}
		else
		{
			cout<<"\n\t"<<tasks[i]<<" NOT COMPLETED\n\n";
		}
	}
	cout<<"\n\t____________________________\t\n\n";
	
	return;
}
//MAIN FUNCTION
int main()
{
	//colorizing text
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 10);
	
	int choice;
	cout<<"\n\n\t_________________________________| TO-DO LIST |_________________________________\n\n";
	do {
		
		cout<<"\n\t______________________| 1. Add Tasks               |______________________\n";
		cout<<"\t______________________| 2. Show Tasks              |______________________\n";
		cout<<"\t______________________| 3. Mark as Completed       |______________________\n";
		cout<<"\t______________________| 0. Exit                    |______________________\n";
		
		cout<<"\n\tSelect any of these: ";
		cin>>choice;
		
		switch (choice)
		{
			case 1:
			    addTasks();
			    break;
			case 2:
			    showTasks();
			    break;
			case 3:
			    markCompleted();
			    break;
			case 0:
			    cout<<"\tExiting Program...\n";
			    break;
			default:
				cout<<"\tEnter a valid choice:\n";
		}
		
	}
	while (choice != 0);
	
	return 0;
}