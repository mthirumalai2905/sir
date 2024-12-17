#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define the structure for an Item
struct Item {
    int itemCode;
    string name;
    float cost;
    int quantity;

    // Constructor to initialize an item
    Item(int code, string n, float c, int q) : itemCode(code), name(n), cost(c), quantity(q) {}
};

// Function to print item details
void printItems(const vector<Item>& items) {
    for (const Item& item : items) {
        cout << "Code: " << item.itemCode << ", Name: " << item.name
             << ", Cost: " << item.cost << ", Quantity: " << item.quantity << endl;
    }
}

int main() {
    // Create a list of items
    vector<Item> items = {
        Item(101, "Item A", 50.0, 10),
        Item(102, "Item B", 20.0, 5),
        Item(103, "Item C", 30.0, 8),
        Item(104, "Item D", 60.0, 12)
    };
    
    cout << "Original Items:" << endl;
    printItems(items);

    // Sort items by cost in ascending order
    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.cost < b.cost;
    });

    cout << "\nItems Sorted by Cost:" << endl;
    printItems(items);

    // Search for an item by its code
    int searchCode = 103;
    auto it = find_if(items.begin(), items.end(), [searchCode](const Item& item) {
        return item.itemCode == searchCode;
    });

    // Check if the item was found and print the result
    if (it != items.end()) {
        cout << "\nItem found: " << it->name << " with Code " << it->itemCode << endl;
    } else {
        cout << "\nItem not found!" << endl;
    }

    return 0;
}

