#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

// Function to find the youngest person
Person findYoungest(const vector<Person>& people) {
    if (people.empty()) {
        throw runtime_error("No persons in the list.");
    }

    Person youngest = people[0];
    for (const Person& p : people) {
        if (p.age < youngest.age) {
            youngest = p;
        }
    }
    return youngest;
}

int main() {
    int n;
    cout << "Enter the number of persons: ";
    cin >> n;

    vector<Person> persons(n);

    // Input details
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for person " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> ws; // clear input buffer
        getline(cin, persons[i].name);
        cout << "Age: ";
        cin >> persons[i].age;
    }

    try {
        Person youngest = findYoungest(persons);

        // Output
        cout << "\n--- Youngest Person ---\n";
        cout << "Name: " << youngest.name << "\n";
        cout << "Age : " << youngest.age << "\n";
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
