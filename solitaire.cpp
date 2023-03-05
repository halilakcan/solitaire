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
<<<<<<< HEAD
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
=======
   system("clear");
    vector<int> order;
    vector<string> karo,kupa,maca,sinek,deck,playdeck;
    string a = "♦";
    string b = "♥";
    string c = "♠";
    string d = "♣";
    int i,j,k;
order=shuffle();

    for (i=0;i<13;i++) {karo.push_back(a);kupa.push_back(b);maca.push_back(c);sinek.push_back(d);}
    for (i=0;i<13;i++) {karo[i].append(to_string(i+1));kupa[i].append(to_string(i+1));maca[i].append(to_string(i+1));sinek[i].append(to_string(i+1));}

    for(auto it = begin(karo); it != end(karo); ++it) {deck.push_back(*it);} 
    for(auto it = begin(kupa); it != end(kupa); ++it) {deck.push_back(*it);} 
    for(auto it = begin(maca); it != end(maca); ++it) {deck.push_back(*it);} 
    for(auto it = begin(sinek); it != end(sinek); ++it) {deck.push_back(*it);} 

    for(i=0;i<52;i++) playdeck.push_back(deck[order[i]]);

     for(auto it = begin(playdeck); it != end(playdeck); ++it) {cout << *it << " ";} 
   cout << endl;
   vector<int> A,B,C,D,E,F,G,H,I,J,K,L,M;
   j=0;k=0;
   for(i=0;i<7;i++) 
   {
    if(k<1) {G.push_back(order[j]);j++;}
    if(k<2) {H.push_back(order[j]);j++;}
    if(k<3) {I.push_back(order[j]);j++;}
    if(k<4) {J.push_back(order[j]);j++;}
    if(k<5) {K.push_back(order[j]);j++;}
    if(k<6) {L.push_back(order[j]);j++;}
    if(k<7) {M.push_back(order[j]);j++;}
    k++;
    }
     cout<<"Used Decks"<<j<<endl;
for(;j<52;j++) F.push_back(order[j]);
   
 cout<<"Used Decks"<<j<<endl;
 k=0;
   for(i=0;i<7;i++) 
   {
    if(k<G.size()) cout <<playdeck[G[i]]<<"\t"; else cout <<" \t";
    if(k<H.size()) cout <<playdeck[H[i]]<<"\t"; else cout <<" \t";
    if(k<I.size()) cout <<playdeck[I[i]]<<"\t"; else cout <<" \t";
    if(k<J.size()) cout <<playdeck[J[i]]<<"\t"; else cout <<" \t";
    if(k<K.size()) cout <<playdeck[K[i]]<<"\t"; else cout <<" \t";
    if(k<L.size()) cout <<playdeck[L[i]]<<"\t"; else cout <<" \t";
    if(k<M.size()) cout <<playdeck[M[i]]<<"\t"; else cout <<" \t";
    k++;
    cout <<endl;
   }
>>>>>>> 7720a9f268df1de2d2e5b46932b723bf849fb726
}