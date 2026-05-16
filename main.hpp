#ifndef MAIN_HPP
#define MAIN_HPP

// Vector intro: makeVector, insertVector, deleteVector

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &);
void insertVector(vector<int> &, int);
int deleteVector(vector<int> &, int);
int randnum(void);
int getInput(void);
void printVector(vector<int>);

void makeVector(vector<int> &number)
{
    // TODO: fill the vector with random integers in [0, 20), then sort it.
    for (int i=0; i<number.size(); i++){
        number[i] = rand() % 21; //rand() % calls [0,n-1] so need one extra.
    }
    sort(number.begin(), number.end());
}

void insertVector(vector<int> &number, int usernum)
{
    // TODO: insert usernum into the sorted vector while keeping it sorted.
    bool isInsert = false;
    for (auto iter = number.begin(); iter != number.end(); iter++){
        if (*iter > usernum){
            number.insert(iter, usernum);
            isInsert = true;
            break;
        }
    }

    if (!isInsert){
        number.push_back(usernum);
    }
}

int deleteVector(vector<int> &number, int usernum)
{
    // TODO: erase EVERY occurrence of usernum from the vector.
    int cnt = 0;

    auto iter = find(number.begin(), number.end(), usernum);

    while (iter != number.end()){
        iter = number.erase(iter);
        cnt++;

        iter = find(number.begin(), number.end(), usernum);
    }

    if (cnt == 0){
        return -1;
    }

    return cnt;
}

int getInput(void)
{
    int num;
    cout << "Enter your input\n";
    cin >> num;
    return num;
}

int randnum(void)
{
    return rand() % 100;
}

void printVector(vector<int> number)
{
    for (auto iter = number.begin(); iter != number.end(); iter++)
        cout << setw(5) << *iter;
    cout << endl;
}

#endif
