#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char *argv[]) {

  unordered_map<int, int> hash1;
  unordered_map<int, int> hash2;
  unordered_map<int, int> hash3;

  for (int i = 0; i < 4; i++) {
    hash1[i] = i + 1;
    hash2[i + 1] = i + 1;
    hash3[i] = i + 1;
  }

  bool h1h2 = hash1 == hash2;
  bool h1h3 = hash1 == hash3;

  cout << "hash1 == hash2 : " << h1h2 << endl;
  cout << "hash1 == hash3 : " << h1h3 << endl;
}