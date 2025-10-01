

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 1000;
struct listType {
    int listElem[ARRAY_SIZE];
    int listLength;
};

int seqSearch(const listType &listType, int searchItem) {
    int loc = 0;
    bool found = false;

    for (loc = 0; loc < listType.listLength; loc++) {
        if(listType.listElem[loc] == searchItem) {
            found = true;
            break;
        }
    }

    return found ? loc : -1;
}

int main() {
    listType intList;

    intList.listLength = 0;
    intList.listElem[0] = 5;
    return 0;
}
