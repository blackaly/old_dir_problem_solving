#include <iostream>

struct branch{
    int id = 0;
    std::string name = " ";
    std::string manager = " ";

    branch* next = nullptr;
};

branch* branch_head = nullptr;


void add_new_branch(int id, std::string name, std::string manager){
    branch* new_branch = new branch;
    new_branch->id = id;
    new_branch->name = name;
    new_branch->manager = manager;
    new_branch->next = nullptr;

    if(branch_head == nullptr)
        branch_head = new_branch;

    else{
        branch* temp = branch_head;
        while(temp->next != nullptr)
            temp = temp->next;
        temp->next = new_branch;
    }

}

void display_branch(){
    branch* temp = branch_head;
    while(temp != nullptr){
        std::cout << temp->id << ' ' << temp->name << ' ' << temp->manager << '\n' << '\n';
        temp = temp->next;
    }

}

void remove_branch(int id){

    branch* temp = branch_head;
    branch* prev = temp;

    if(branch_head == nullptr)
        return;

    if(temp->id == id){
        branch_head = temp->next;
        delete temp;
        return;
    }

    else{

        while(temp->next != nullptr && temp->id != id){
                prev = temp;
                temp = temp->next;
            }

         if(temp->next = nullptr)
            return;

        else{
            prev->next = temp->next;
            delete temp;
        }

    }



}

void search_branch_id(int id){
    if(branch_head == nullptr)
        return;

    else{
    branch* temp = branch_head;
    while(temp->next != nullptr && temp->id != id)
        temp = temp->next;

    (temp->id == id? std::cout << temp->id << ' ' << temp->name << ' ' << temp->manager << '\n': std::cout << "There is no such id" << '\n');

    }
}


struct holder{
    int id = 0;
    std::string name = "";
    std::string address = "";
    int balance = 0;

    holder* next;

};
holder* holder_head = nullptr;

void add_new_holder(int id, std::string name, std::string address, int balance){
    holder* new_holder = new holder;
    new_holder->id = id;
    new_holder->name = name;
    new_holder->address = address;
    new_holder->balance = balance;

    if(holder_head == nullptr)
        holder_head = new_holder;

    else{
        holder* temp = holder_head;

        while(temp->next != nullptr)
            temp = temp->next;

        temp->next = new_holder;
        }
}

void remove_holder(int id){
    holder* temp = holder_head;
    holder* prev = temp;

    if(holder_head == nullptr)
        return;

    if(temp->id == id){
        holder_head = temp->next;
        delete temp;
        return;
    }


    else{
        while(temp->next != nullptr && temp->id != id){
            prev = temp;
            temp = temp->next;
        }

        if(temp == nullptr)
            return;
        else{
        prev->next = temp->next;
        delete temp;
        }

    }

}

void display_holder(){
    holder* temp = holder_head;

    while(temp != nullptr){
        std::cout << temp->id << ' ' << temp->name << ' ' << temp->address << ' '
                  << temp->balance << '\n';
        temp = temp->next;
    }


}

void update_holder(int id, std::string name, std::string address, int balance){
    if(holder_head == nullptr)
        return;

    else{
        holder* temp = holder_head;
        while(temp->next != nullptr && temp->id != id)
                temp = temp->next;

            if(temp->next == nullptr)
                return;

            else{
                temp->id = id;
                temp->name = name;
                temp->address = address;
                temp->balance = balance;
                }
    }

}

void search_holder_byname(std::string name){


    if(holder_head == nullptr)
        return;

    else{
    holder* temp = holder_head;
    while(temp->next != nullptr && temp->name != name)
            temp = temp->next;
        if(temp->next == nullptr)
            return;
       std::cout << temp->id << ' ' << temp->name << ' ' << temp->address << ' ' << temp->balance;

    }

}

int main()
{

    add_new_branch(1, "Ali", "Muhammad");
    add_new_branch(2, "Ali", "Muhammad");
    add_new_branch(3, "Ali", "Muhammad");
    add_new_branch(4, "Ali", "Muhammad");
    add_new_branch(5, "Ali", "Muhammad");
    add_new_branch(6, "Ali", "Muhammad");
    std::cout << "------------------------------" << '\n' << '\n';
    std::cout << "Branches: " << '\n' << '\n';
    display_branch();
    std::cout << "------------------------------" << '\n';
    std::cout << "Your searched id is: " << '\n';
    search_branch_id(7);

    std::cout << '\n' << '\n';

    add_new_holder(1, "Ali", "Maadi", 1000);
    add_new_holder(2, "Me", "Maadi", 1000);
    add_new_holder(3, "LO", "Maadi", 1000);
    add_new_holder(4, "Fo", "Maadi", 1000);
    add_new_holder(5, "Co", "Maadi", 1000);
    add_new_holder(6, " ", "Maadi", 1000);
    add_new_holder(7, "Muhammad", "Maadi", 1000);
    std::cout << "------------------------------" << '\n' << '\n';
    std::cout << "Holders: " << '\n' << '\n';
    display_holder();
    std::cout << "------------------------------" << '\n' << '\n';
    std::cout << "Your searched Name is: " << '\n';
    search_holder_byname("Hassan");
    std::cout << "------------------------------" << '\n' << '\n';
    update_holder(1, "Hassan", "Mat", 2000);
    std::cout << "------------------------------" << '\n' << '\n';
    display_holder();
    std::cout << "------------------------------" << '\n' << '\n';


    std::cout << "------------------------------" << '\n' << '\n';
    std::cout << "Branches: " << '\n' << '\n';
    remove_branch(1);
    remove_branch(2);
    remove_branch(4);
    display_branch();
    std::cout << "------------------------------" << '\n';


    return 0;
}
