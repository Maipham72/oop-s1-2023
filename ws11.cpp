#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Records;
class RecordsManager {
  private:
    fstream _file;
    string _filename;
  
  public:
    RecordsManager(string filename) : _filename(filename) {}
    void set_Text(string num) {
      if (stoi(num) < 0 ) {
        throw("not a valid number");
      }
    }
    void read(Records &records) {
      _file.open(_filename, ios::in);
      if (_file.is_open()) {
        string line;
        while (std::getline(_file,line)) {
          records.push_back(stoi(line));
        }
        _file.close();
      }
    }
};

int main() {
  //RecordsManager recordM("test_clean.txt");
  //RecordsManager recordM("test_corrupt1.txt");
  RecordsManager recordM("test_corrupt2.txt");


  Records myRecords;


  int sum = 0;
  for (int i = 0; i < myRecords.size(); i++) {
    sum = sum + myRecords[i];
  }
  cout << sum << endl;
  return 0;
}