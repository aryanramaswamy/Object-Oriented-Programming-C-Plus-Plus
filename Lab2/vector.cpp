#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 *
 * @param v – vector of integers
 */
void printMemVec(const vector<int>& v){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(size_t i = 0; i < v.size(); i++){
        printf("Value: %i at Memory Location: %p\n", v[i], &v[i]);
    }

}
/**
 * @brief increments all of the elements in v by 10
 *
 * @param v – address to a vector of integers
 */
void incVecBy10(vector<int> &v){
    for(size_t i = 0; i < v.size(); i++){
        v[i] += 10;
    }
}
int main() {
    // create a constant integer called SIZE that is of value 5
    const int SIZE = 5;

    // create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec;

    // use a for loop to populate vec with the values 100 to 104
    for (int i = 0; i < SIZE; i++) {
        vec.push_back(100 + i);
    }

    printf("Before Increment-------------\n");
    printMemVec(vec);   // call printMemVec on vec
    incVecBy10(vec);    // call incVecBy10 on vec

    printf("After Increment--------------\n");
    printMemVec(vec);   // view the changes

    // remove last element of vec
    vec.pop_back();

    printf("After Pop-------------------\n");
    printMemVec(vec);   // view the changes

    // append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);

    printf("After Push------------------\n");
    printMemVec(vec);   // view the changes

    return 0;
}


