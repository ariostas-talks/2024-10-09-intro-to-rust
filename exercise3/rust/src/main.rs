struct Item {
    name: String,
    quantity: u32,
}

impl Item {
    fn new(name: String, quantity: u32) -> Item {
        Item { name, quantity }
    }
}

struct ShoppingList<'a> {
    items: Vec<&'a Item>,
}

impl<'a> ShoppingList<'a> {
    fn new() -> ShoppingList<'a> {
        ShoppingList { items: Vec::new() }
    }

    fn add_item(&mut self, name: String, quantity: u32) {
        // Write your code here
    }

    fn remove_item(&mut self, index: Option<usize>) {
        // Write your code here
    }

    fn print(&self) {
        println!("Shopping List:");
        for item in &self.items {
            println!("{}: {}", item.name, item.quantity);
        }
        println!();
    }

    fn find_index(&self, name: &str) -> Option<usize> {
        for (i, item) in self.items.iter().enumerate() {
            if item.name == name {
                return Some(i);
            }
        }
        None
    }
}

fn main() {
    let mut list = ShoppingList::new();

    list.add_item("Apples".to_string(), 5);
    list.add_item("Bananas".to_string(), 10);
    list.add_item("Oranges".to_string(), 3);

    list.print();

    let bananas_index = list.find_index("Bananas");
    let grapes_index = list.find_index("Grapes");

    list.remove_item(bananas_index);
    list.remove_item(grapes_index);

    list.print();
}
