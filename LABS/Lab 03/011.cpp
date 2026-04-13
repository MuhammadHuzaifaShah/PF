#include<iostream>
using namespace std;
/*Description An auction house is accepting bids for a rare artifact. The auctioneer reads out
bids one by one. The bidding process stops only when the auctioneer sees the special
"closing code" of -1.
Your job is to listen to the stream of bids and determine the highest bid placed during the
session. If no valid bids are placed before -1, the highest bid is 0.*/
int main(){
    int bid;
    int highestBid=0;
    cout<<"Enter bids (enter -1 to stop): ";
    cin>>bid;
    while(bid!=-1){
        if(bid>highestBid){
            highestBid=bid;
        }
        cin>>bid;
    }
    cout<<"The highest bid placed is: "<<highestBid<<endl;
    return 0;
}