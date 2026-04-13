#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int side1,side2,hypotenuse;
    for(side1=1;side1<=200;side1++){
        for(side2=side1;side2<=200;side2++){
            for(hypotenuse=side2;hypotenuse<=200;hypotenuse++){
                if((side1*side1)+(side2*side2)==(hypotenuse*hypotenuse)){
                    cout << "(" << side1 << ", " << side2 << ", " << hypotenuse << ") -> " 
                         << side1 << "² + " << side2 << "² = " << hypotenuse << "²" << endl;
                }
            } 
        }
    }
   return 0;
}