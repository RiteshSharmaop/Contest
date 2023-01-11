#include<bits/stdc++.h>
using namespace std;
int solve(int aam , int aad, int alm , int ald , int bam ,int  bad  , int blm ,int  bld ){
    if(aam == bam && aam < bam && bam < alm ){
        
    }else{

    }
}
int main() {
    int t;
    cin>>t;
    while(t--){;
    string aa , la ,ba ,lb;
    cin>>aa>>la>>ba>>lb;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Alice Arrive
    // Month
    string aliceArM = "";
    aliceArM = aa[0];
    aliceArM += aa[1];
    // Date 
    string aliceArD = "";
     aliceArD = aa[3];
    aliceArD += aa[4];
    
    
// Alice Leave
    // Month
    string aliceLvM = "";
    aliceLvM = la[0];
    aliceLvM += la[1]; 


    // Date 
    string aliceLvD = "";
     aliceLvD = aa[3];
    aliceLvD += aa[4];

// Bob Arrived
// Month
    string bobArM = "";
    bobArM = ba[0];
    bobArM += ba[1];
    // Date 
    string bobArD = "";
     bobArD = aa[3];
    bobArD += aa[4];
 
    

    // BobLeave
    string bobLvM = "";
    bobLvM = lb[0];
    bobLvM += lb[1];

     // Date 
    string bobLvD = "";
     bobLvD = aa[3];
    bobLvD += aa[4]; 
    

    int aam , aad;
    aam = stoi(aliceArM);
    aad = stoi(aliceArD);

    int alm ,ald;
    alm = stoi(aliceLvM);
    ald = stoi(aliceLvD);


    int bam , bad;
    bam = stoi(bobArM);
    bad = stoi(bobArD);

    int blm , bld;
    blm = stoi(bobLvM);
    bld = stoi(bobLvD);
    
    
    }
    return 0;
}