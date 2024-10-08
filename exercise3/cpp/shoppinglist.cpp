#include <iostream>
#include <string>
#include <vector>
#include <optional>

struct Item {
    std::string name;
    unsigned int quantity;

    Item(std::string name, unsigned int quantity) : name(name), quantity(quantity) {}
};

class ShoppingList {
    private:
        std::vector<Item*> items;

    public:
        ShoppingList() {}

        void add_item(std::string name, unsigned int quantity) {
            items.push_back(new Item(name, quantity));
        }

        void remove_item(std::optional<size_t> index) {
            if (index < items.size()) {
                items.erase(items.begin() + *index);
            }
        }

        void print() {
            std::cout << "Shopping List:" << std::endl;
            for (Item* item : items) {
                std::cout << item->name << ": " << item->quantity << std::endl;
            }
            std::cout << std::endl;
        }

        std::optional<size_t> find_index(std::string name) {
            for (size_t i = 0; i < items.size(); i++) {
                if (items[i]->name == name) {
                    return i;
                }
            }
            return std::nullopt;
        }
};


int main() {
    ShoppingList list;

    list.add_item("Apples", 5);
    list.add_item("Bananas", 10);
    list.add_item("Oranges", 3);

    list.print();

    auto bananas_index = list.find_index("Bananas");
    auto grapes_index = list.find_index("Grapes");

    list.remove_item(bananas_index);
    list.remove_item(grapes_index);

    list.print();

    return 0;
}