#include <iostream>
#include <vector>

using namespace std;

class Ham
{
private:
    string name;
    string deadDate;

public:
    // Métodos getters e setters
    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setDate(string date)
    {
        this->deadDate = date;
    }

    string getDate()
    {
        return deadDate;
    }
};

class Mausoleum
{
private:
    string location;
    vector<Ham> hams;

public:
    // Métodos getters e setters
    void setLocation(string location)
    {
        this->location = location;
    }

    string getLocation()
    {
        return location;
    }

    void setHamInMausoleum(Ham ham)
    {
        this->hams.push_back(ham);
    }

    void listHams()
    {
        cout << "Hams in Mausoleum at " << location << ":" << endl;
        for (const Ham &ham : hams)
        {
            cout << "Name: " << ham.getName() << ", Dead Date: " << ham.getDate() << endl;
        }
    }
};

int main(void)
{
    Mausoleum mausoleum;

    cout << "Enter the location of the mausoleum: ";
    string location;
    cin >> location;

    mausoleum.setLocation(location);

    while (true)
    {
        cout << "Enter the name of the Ham (or 'exit' to quit): ";
        string name;
        cin.ignore(); // Limpar o buffer de entrada
        getline(cin, name);

        if (name == "exit")
        {
            break;
        }

        cout << "Enter the dead date of the Ham: ";
        string date;
        cin >> date;

        Ham ham;
        ham.setName(name);
        ham.setDate(date);

        mausoleum.setHamInMausoleum(ham);
    }

    mausoleum.listHams();

    return 0;
}
