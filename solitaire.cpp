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
for(int i=0;i<52;i++) 
{  
    a=rand() %52; 
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
int i;
vector<string> karo,kupa,maca,sinek,deck,playdeck;
string a = "♦";
string b = "♥";
string c = "♠";
string d = "♣";
order=shuffle();

for (int i=0;i<13;i++) {karo.push_back(a);kupa.push_back(b);maca.push_back(c);sinek.push_back(d);}
for (int i=0;i<13;i++) {karo[i].append(to_string(i+1));kupa[i].append(to_string(i+1));maca[i].append(to_string(i+1));sinek[i].append(to_string(i+1));}
   
for(auto it = begin(karo); it != end(karo); ++it) {deck.push_back(*it);} 
for(auto it = begin(kupa); it != end(kupa); ++it) {deck.push_back(*it);} 
for(auto it = begin(maca); it != end(maca); ++it) {deck.push_back(*it);} 
for(auto it = begin(sinek); it != end(sinek); ++it) {deck.push_back(*it);} 

for (int i=0;i<52;i++) playdeck.push_back(deck[order[i]]);

for(auto it = begin(playdeck); it != end(playdeck); ++it) {cout << *it << " ";} 
cout << endl;

vector<int> A,B,C,D,E,F,G,H,I,J,K,L;
A.push_back(order[0]);cout << A[0] << " "; cout << endl;
for(i=0;i<2;i++) {B.push_back(order[i+1]);cout << B[i] << " ";} cout << endl;
for(i=0;i<3;i++) {C.push_back(order[i+3]);cout << C[i] << " ";} cout << endl;
for(i=0;i<4;i++) {D.push_back(order[i+6]);cout << D[i] << " ";} cout << endl;
for(i=0;i<5;i++) {E.push_back(order[i+10]);cout << E[i] << " ";} cout << endl;
for(i=0;i<6;i++) {F.push_back(order[i+15]);cout << F[i] << " ";} cout << endl;
for(i=0;i<7;i++) {G.push_back(order[i+21]);cout << G[i] << " ";} cout << endl;
for(i=0;i<25;i++) {H.push_back(order[i+27]);cout << H[i] << " ";} cout << endl;
}