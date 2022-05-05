#include<iostream>
#include<string>
#include<vector>
#include<time.h>
using namespace std;
vector<int> shuffle()
{
    int a;
    vector<int> b;
srand (time(0));
for(int i=0;i<53;i++) 
{  
    a=rand() %53; 
    b.push_back(a);
    if(i>0) 
    {
    for(int j=i-1;j>=0;j--) 
    {if(b[j]==a) {b.pop_back();i=i-1;j=-1;}}
    }
    }
return b;
}

int main()
{
    vector<int> order;
    vector<string> karo,kupa,maca,sinek,deck,playdeck;
    string a = "♦";
    string b = "♥";
    string c = "♠";
    string d = "♣";
order=shuffle();

    for (int i=0;i<13;i++) {karo.push_back(a);kupa.push_back(b);maca.push_back(c);sinek.push_back(d);}
     for (int i=0;i<13;i++) {karo[i].append(to_string(i+1));kupa[i].append(to_string(i+1));maca[i].append(to_string(i+1));sinek[i].append(to_string(i+1));}
//    cin>>a;
   
    for(auto it = begin(karo); it != end(karo); ++it) {deck.push_back(*it);cout << *it << " ";} 
    cout << endl;
    for(auto it = begin(kupa); it != end(kupa); ++it) {deck.push_back(*it);cout << *it << " ";} 
    cout << endl;
    for(auto it = begin(maca); it != end(maca); ++it) {deck.push_back(*it);cout << *it << " ";} 
    cout << endl;
    for(auto it = begin(sinek); it != end(sinek); ++it) {deck.push_back(*it);cout << *it << " ";} 
    cout << endl;
    
    for(auto it = begin(order); it != end(order); ++it) {cout << *it << " ";} 
   cout << endl;
       for(auto it = begin(deck); it != end(deck); ++it) {cout << *it << " ";} 
   cout << endl;

cout << "The length of the deck is: " << karo.size();

}