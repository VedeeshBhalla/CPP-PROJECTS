#include<bits/stdc++.h>
using namespace std;
void ShowMenu(){
    cout << "          To Do List               " <<endl;
    cout << "1. View All Tasks" <<endl;
    cout << "2. Add New Task" <<endl;
    cout << "3. Delete Task" <<endl;
    cout << "4. Exit" <<endl;
}
int main(){
    int choice;
    vector<string> Tasks;
    do{
        ShowMenu();  
        cout << "Enter choice : ";     
        cin >> choice;
        cin.ignore();
        switch(choice){
            case 1:{
                cout << <<endl "Tasks to be completed : "<<endl;
                for(int i=0 ; i<Tasks.size() ; i++)
                cout <<i+1 <<". " << Tasks[i] <<endl;
                cout<<endl;
                break;
            }
        
            case 2:{
                int n;
                cout << "Enter no of tasks : ";
                cin >> n;
                cin.ignore();
                for(int i=0 ; i<n ; i++)
                {
                string task;
                cout << "Enter task " <<i+1 <<". : ";
                getline(cin,task);
                Tasks.push_back(task);  
                }
                cout << "Task Added" <<endl; 
                break;
            }
            case 3:{
                int index;
                cout << "Enter Task No : ";
                cin >> index;
                if(index>=1 && index<=Tasks.size()){
                    Tasks.erase(Tasks.begin() + index - 1);
                    cout << "Task Deleted" <<endl;
                }
                else{
                    cout << "Invalid Task number" <<endl;
                }
                break;
            }
            case 4:{
                cout << "Exiting ToDo List" <<endl;
                break;
            }
            default:
            cout<<"Invalid choice" <<endl;
        }
    }while(choice!=4);
    return 0;
}