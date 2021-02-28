#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
// include the following 4 lines in your program
// these define the UTF-8 encoding of the suit symbols
#define SPADE "\xE2\x99\xA0"
#define CLUB "\xE2\x99\xA3"
#define HEART "\xE2\x99\xA5"
#define DIAMOND "\xE2\x99\xA6"

using namespace std;
//int cards[5]={-1,-1,-1,-1,-1};
int cards[5]={47, 34, 49, 7, 2};
//47 34 49 7 2
//9, 9, 11, 8, 3

void DealHand(int cards[]){
    int x;
    cin >> x;
    srand(x);
    for (int i=0;i<5;i++){
        bool check=true;
        while (check){
            int temp = rand()%52;
            bool ok=true;
            for (int j=0;j<5;j++){
                if (temp == cards[j]){
                    ok=false;
                }
            }
            if (ok==true){
                check = false;
                cards[i]=temp;
            }
        }
    }
}

void PrintHand(int cards[]){
    for (int i=0;i<5;i++){
        int temp,tt; //find the symbols and numbers
        temp = cards[i]/13;
        switch(temp)  //cout symbols
        {
            case 0:
                cout << SPADE;
                break;
            case 1:
                cout << HEART;
                break;
            case 2:
                cout << CLUB;
                break;
            case 3:
                cout << DIAMOND;
                break;
        }
        tt=cards[i]%13;
        switch(tt)  // cout numbers
        {
            case 0:
                cout << 'A' << " ";
                break;
            case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:
                cout << tt+1 << " ";
                break;
            case 10:
                cout << 'J' << " ";
                break;
            case 11:
                cout << 'Q' << " ";
                break;
            case 12:
                cout << 'K' << " ";
                break;
        }
    }
}

bool IsFourOfAKind(int cards[]) // return if the hand is a four of a kind
{
    for (int i=0;i<5;i++){
        int count = 0;
        for (int j=0;j<5;j++){
            if (cards[i]%13==cards[j]%13){ // check whether numbers are the same
                count +=1;
            }
        }
        if (count == 4){
        	return 1;
        }
    }
    return 0;
}

bool IsFullHouse(int cards[]) // return if the hand is a full house
{
    for (int i=0;i<5;i++){
        int count = 0;
        for (int j=0;j<5;j++){
            if (cards[i]%13==cards[j]%13){ // check whether numbers are the same
                count +=1;
            }
        }
        if (count == 3){
            int tri=cards[i]%13; //the 3 same number cards
            int temp[2],t=0;
            for (int j=0;j<5;j++){
                if (cards[j]%13!=tri){
                    temp[t]=cards[j]%13;
                    t++;
                }
            }
            if (temp[0]==temp[1]){
                return 1;
            }
        }
    }
    return 0;
}
bool IsFlush(int cards[]) // return if the hand is a flush
{
    int tar=cards[0]/13;
    int count=0;
    for (int i=0;i<5;i++){
        if (int(cards[i]/13)==tar){
            count+=1;
        }
    }
    if (count==5){
        return 1;
    }
    return 0;
}

bool IsThreeOfAKind(int cards[]) // return if the hand is a three of a kind
{
    for (int i=0;i<5;i++){
        int count = 0;
        for (int j=0;j<5;j++){
            if (cards[i]%13==cards[j]%13){ // check whether numbers are the same
                count +=1;
            }
        }
        if (count == 3){
            return 1;
        }
        return 0;
    }
	return 0;
}

bool IsTwoPair(int cards[])  // return if the hand is a two pair
{
	/*
    for (int i=0;i<5;i++){
        int count = 0;
        for (int j=0;j<5;j++){
            if (cards[i]%13==cards[j]%13){ // check whether numbers are the same
                count +=1;
            }
        }
        if (count == 2){
            int tri=cards[i]%13; //the 2 same number cards
            int temp[2],t=0;
            for (int j=0;j<5;j++){
                if (cards[j]%13!=tri){
                    temp[t]=cards[j]%13;
                    t++;
                }
                if (t==3){
                    break;
                }
            }
            if (temp[0]==temp[1]){
                return 1;
            }
        }
    }
    return 0;
	*/

	vector<int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(cards[i]%13);
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		if (v[i] == v[i+1]) {
			cnt++;
			i++;
		}
	}
	return cnt == 2;
}

bool IsOnePair(int cards[]) // return if the hand is a one pair
{
    for (int i=0;i<5;i++){
        int count = 0;
        for (int j=0;j<5;j++){
            if (cards[i]%13==cards[j]%13){ // check whether numbers are the same
                count +=1;
            }
        }
        if (count == 2){
            return 1;
        }
    }
    return 0;
}


int main()
{
    //DealHand(cards);
    for (int i=0;i<5;i++){
        cout << cards[i] << " ";
    }
    //cout << endl;
    PrintHand(cards);
    //cout << endl;
    if (IsFourOfAKind(cards)){
        cout << "four of a kind";
    }
    else if(IsFullHouse(cards)){
        cout << "full house";
    }
    else if (IsFlush(cards)){
        cout << "flush";
    }
    else if (IsThreeOfAKind(cards)){
        cout << "three of a kind";
    }
    else if (IsTwoPair(cards)){
        cout << "two pair";
    }
    else if (IsOnePair(cards)){
        cout << "one pair";
    }
    else{
        cout << "others";
    }
    return 0;
}



