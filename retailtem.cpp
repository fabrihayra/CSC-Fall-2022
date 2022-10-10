// Student: Hayra Fabri Guimaraes 
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class retailItem
{
private:
    // private data members
    string description;
    int unitsOnHand;
    double price;

public:
    // parameterized constructor to initialize data members
    retailItem(string d, int u, double p)
    {
        description = d,
        unitsOnHand = u,
        price = p;
    }

    // setter methods
    void setDescription(string d)
    {
        description = d;
    }
    void setUnitsOnHand(int u)
    {
        unitsOnHand = u;
    }
    void setPrice(double p)
    {
        price = p;
    }

    // getter methods
    string getDescription()
    {
        return description;
    }
    int getUnitsOnHand()
    {
        return unitsOnHand;
    }
    double getPrice()
    {
        return price;
    }
};

void displayItem(retailItem);

int main()
{
    // creating three objects of retailItem class with three
    // different arguments
    retailItem item1("Jacket", 12, 59.95);
    retailItem item2("Designer Jeans", 40, 34.95);
    retailItem item3("Shirt", 20, 24.95);

    // calling function to display three objects data
    displayItem(item1);
    displayItem(item2);
    displayItem(item3);

    return 0;
}

// function to accept an retailItem object item and display its data
void displayItem(retailItem item)
{
    // call getter method for each variable and display them
    cout << "Description of item: " << item.getDescription() << endl;
    cout << "Units on hand: " << item.getUnitsOnHand() << endl;
    cout << "Price: $" << item.getPrice() << endl;
  }