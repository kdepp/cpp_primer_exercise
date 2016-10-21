#include <iostream>
#include <string>

using std::string;

struct Person {
  Person(string &strName, string &strAddress) : name(strName), address(strAddress) {}
  string getName() const { return name; }
  string getAddress() const { return address; }

  string name;
  string address;
};

istream &read(istream &is, Person &p) {
  is >> p.name >> p.address;
  return is;
}

ostream &print(ostream &os, Person &p) {
  os << p.name << " living at " << p.address;
  return os;
}
