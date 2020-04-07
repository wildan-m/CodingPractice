#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // 1. initialize
    vector<int> v0;
    vector<int> v1(5,0);
    
    // 2. make a copy
    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);
    
    // 3. cast an array to a vector
    int a[5] = {0, 1, 2, 3, 4};
    //vector<int> v4(a, a + (sizeof a/sizeof a[0]));
    vector<int> v4(a, *(&a + 1));
    
    // 4. get length
    cout << "The size of v4 is: " << v4.size() << endl;
    
    // 5. Access element
    cout << "The first element in v4 is: " << v4[0] << endl;
    
    // 6. Iterate the vector
    cout << "The contents of v2 are: ";
    for (int i = 0; i < v2.size(); ++i)
    {
        cout << " " << v2[i];
    }
    cout << endl;
    
    cout << "[Version 1] The contents of v4 are:";
    for (int i = 0; i < v4.size(); ++i){
        cout << " " << v4[i];
    }
    cout << endl;
    cout << "[Version 2] The contents of v4 are:";
    for (int& item : v4)
    {
        cout << " " << item;
    }
    cout << endl;
    
    cout << "[Version 3] The contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item)
    {
        cout << " " << *item;
    }
    cout << endl;
    
    // 7. Modify element
    v4[0] = 5;

    cout << "[Version 4] The contents of v4 are (After modification):";
    for (int& item : v4)
    {
        cout << " " << item;
    }
    cout << endl;

    // 8. Sort
    sort(v4.begin(), v4.end());

    cout << "[Version 5] The contents of v4 are (after sorting):";
    for (int i=0; i < v4.size(); i++)
    {
        cout << " " << v4[i];
    }
    cout << endl;

    // 9. Add new element at the end of the vector
    v4.push_back(100);

    cout << "[Version 6] The contenst of v4 are (after add new element at the end of the vector):";
    for(int i = 0; i < v4.size(); i++)
    {
        cout << " " << v4[i];
    }
    cout << endl;

    // 10. Delete the last element
    v4.pop_back();

    cout << "[Version 7] The contents of v4 are (after last element are popped)";
    for(int i=0; i < v4.size(); i++)
    {
        cout << " " << v4[i];
    }
    cout << endl;
    // 11. Insert new element at the middle of array

    v4.insert(v4.begin()+(v4.size()/2),1,999);
    
    cout << "[Version 8] The contents of v4 are (after insert new element at the middle of array)";
    for(int i = 0; i < v4.size(); i++)
    {
        cout << " " << v4[i];
    }
    cout << endl;
}