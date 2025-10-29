#include <iostream>
#include <array>
using namespace std;
/*
BUBBLE SORT
do
swapped = false
for i = 1 to indexOfLastUnsortedElement-1
    if leftELEMENT > RIGHTelement
        swap(leftElement, rightELEMENT)
        swapped = true;  counter++
while swapped
*/

/*
INSERTION SORT
mark first element as sorted

for each  unsorted element X
    'extract' the element X
    for j = lastSortedIndex down to 0
        if current element j > X
            move sorted element to the rigth by 1
        else 
            break loop and insert X here
*/

/*
SELECTION SORT
cari nilai terkecil, lalu tukar

repeat(numELEMENTS -1) times
    set the first unsorted element as the minimum
    for each of the unsorted elemnts
        if (element < current minimum)
            set element as ew miinmum
        swap minimum with first unsorted position
*/

int main() {
    
    return 0;
}