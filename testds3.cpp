
#include <iostream>
#include <string>
using namespace std;

// Structure to represent an item in the order
struct MenuItem {
    string itemName;
    double price;
    MenuItem *next;
};

// Structure to represent an order
struct Order {
    int orderId;
    int tableNumber;
    MenuItem *itemsList;
    double totalAmount;
    string status; // "ordered", "preparing", "served"
    Order *next;
};

// Function to create a new MenuItem
MenuItem* createMenuItem(string itemName, double price) {
    MenuItem *newItem = new MenuItem;
    newItem->itemName = itemName;
    newItem->price = price;
    newItem->next = NULL;
    return newItem;
}

// Function to create a new Order
Order* createOrder(int orderId, int tableNumber, string status) {
    Order *newOrder = new Order;
    newOrder->orderId = orderId;
    newOrder->tableNumber = tableNumber;
    newOrder->itemsList = NULL; // Initialize items list as empty
    newOrder->totalAmount = 0.0;
    newOrder->status = status;
    newOrder->next = NULL;
    return newOrder;
}

// Function to add a MenuItem to an Order
void addMenuItem(Order *order, string itemName, double price) {
    MenuItem *newItem = createMenuItem(itemName, price);

    // Insert newItem at the beginning of itemsList
    newItem->next = order->itemsList;
    order->itemsList = newItem;

    // Update total amount of the order
    order->totalAmount += price;
}

// Function to display details of an Order
void displayOrder(Order *order) {
    cout << "Order ID: " << order->orderId << endl;
    cout << "Table Number: " << order->tableNumber << endl;
    cout << "Status: " << order->status << endl;
    cout << "Items Ordered:" << endl;
    MenuItem *currentItem = order->itemsList;
    while (currentItem != NULL) {
        cout << "- " << currentItem->itemName << " ($" << currentItem->price << ")" << endl;
        currentItem = currentItem->next;
    }
    cout << "Total Amount: $" << order->totalAmount << endl;
    cout << "-----------------------" << endl;
}

// Function to display all orders in the circular linked list
void displayAllOrders(Order *head) {
    if (head == NULL) {
        cout << "No orders in the system." << endl;
        return;
    }

    Order *current = head;
    do {
        displayOrder(current);
        current = current->next;
    } while (current != head);
}

// Function to insert a new order at the end of the circular linked list
void insertOrder(Order *&head, int orderId, int tableNumber, string status) {
    Order *newOrder = createOrder(orderId, tableNumber, status);

    if (head == NULL) {
        head = newOrder;
        head->next = head; // Circular link
    } else {
        Order *last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = newOrder;
        newOrder->next = head;
    }
}

// Function to remove an order with a specific order ID from the circular linked list
void removeOrder(Order *&head, int orderId) {
    if (head == NULL) {
        cout << "No orders in the system." << endl;
        return;
    }

    Order *current = head, *prev = NULL;
    do {
        if (current->orderId == orderId) {
            if (current == head) {
                // If current node is head node
                Order *last = head;
                while (last->next != head) {
                    last = last->next;
                }
                if (head->next == head) {
                    // Only one node in the list
                    head = NULL;
                } else {
                    head = head->next;
                    last->next = head;
                }
                delete current;
                cout << "Order ID " << orderId << " removed successfully." << endl;
                return;
            } else {
                // If current node is not head node
                prev->next = current->next;
                delete current;
                cout << "Order ID " << orderId << " removed successfully." << endl;
                return;
            }
        }
        prev = current;
        current = current->next;
    } while (current != head);

    cout << "Order ID " << orderId << " not found." << endl;
}

// Function to update the status of an order with a specific order ID
void updateOrderStatus(Order *head, int orderId, string newStatus) {
    if (head == NULL) {
        cout << "No orders in the system." << endl;
        return;
    }

    Order *current = head;
    do {
        if (current->orderId == orderId) {
            current->status = newStatus;
            cout << "Order ID " << orderId << " status updated to " << newStatus << " successfully." << endl;
            return;
        }
        current = current->next;
    } while (current != head);

    cout << "Order ID " << orderId << " not found." << endl;
}

// Function to simulate a restaurant order management system
int main() {
    Order *orders = NULL;

    // Adding some sample orders
    insertOrder(orders, 101, 1, "ordered");
    addMenuItem(orders, "Pizza", 12.5);
    addMenuItem(orders, "Cola", 2.0);

    insertOrder(orders, 102, 2, "preparing");
    addMenuItem(orders, "Burger", 8.0);
    addMenuItem(orders, "Fries", 4.0);

    insertOrder(orders, 103, 3, "served");
    addMenuItem(orders, "Steak", 20.0);
    addMenuItem(orders, "Wine", 15.0);

    // Display all orders
    displayAllOrders(orders);

    // Update order status and display updated orders
    updateOrderStatus(orders, 101, "preparing");
    displayAllOrders(orders);

    // Remove an order and display updated orders
    removeOrder(orders, 102);
    displayAllOrders(orders);

    return 0;
}

