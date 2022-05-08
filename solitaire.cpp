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
    if(k<G.size()) cout <<G[i]<<"\t"; else cout <<" \t";
    if(k<H.size()) cout <<H[i]<<"\t"; else cout <<" \t";
    if(k<I.size()) cout <<I[i]<<"\t"; else cout <<" \t";
    if(k<J.size()) cout <<J[i]<<"\t"; else cout <<" \t";
    if(k<K.size()) cout <<K[i]<<"\t"; else cout <<" \t";
    if(k<L.size()) cout <<L[i]<<"\t"; else cout <<" \t";
    if(k<M.size()) cout <<M[i]<<"\t"; else cout <<" \t";
    k++;
    cout <<endl;
   }
}