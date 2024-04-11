#include <iostream>
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
	cout<<"\n\t_____| COMPLETED TASKS |_____\t\n\n";
	if (total==0)
	{
		cout<<"\tYou Do\'nt have any completed tasks\n";
	}
	for (int i=0; i<total; i++)
	{
		cout<<"\tTask "<<i+1<<"\t"<<tasks[i];
		cout<<"\n";
		cout<<"\tHave you Done this Task(Y/N): ";
		cin>>c;
	}
	cout<<"\n\t____________________________\t\n\n";
	
	return;
}
//MAIN FUNCTION
int main()
{
	int choice;
	cout<<"\n\t_________________________________| TO-DO LIST |_________________________________\n\n";
	do {
		
		cout<<"\n\t\t\t\t| 1. Add Tasks               |\n";
		cout<<"\t\t\t\t| 2. Show Tasks              |\n";
		cout<<"\t\t\t\t| 3. Mark as Completed       |\n";
		cout<<"\t\t\t\t| 0. Exit                    |\n";
		
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