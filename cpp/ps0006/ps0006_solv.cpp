#include <iostream>
using namespace std;

void  counter(int end , int start =0 , int step =1 );

int main()
{
    // running my valid test cases .

    counter (5);  // 0 1 2 3 4 5
    cout<<"\n------------------------------------- \n";

    counter (3,1);  // 1 2 3
    cout<<"\n------------------------------------- \n";

    counter (-21,6,-3);  // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout<<"\n------------------------------------- \n";

    counter (10,10,0);  // 10
    cout<<"------------------------------------- \n";


    // running invalid test case , have to give clear error .

    counter (100,10,0); // Error : can't start from 10 to 100 with step 0 .
    cout<<"\n------------------------------------- \n";

    counter (10,10,3);  // Error : can't start from 10 to 10 with step 3 .
    cout<<"\n------------------------------------- \n";

    counter (33,33,-4);  // Error : can't start from 33 to 33 with step -4 .
    cout<<"\n------------------------------------- \n";

    counter (-15,11,4);  // Error : can't start from -15 to 11 with step 4.
    cout<<"\n------------------------------------- \n";

    counter (3,1,-1);  // Error : can't start from 1 to 3 with step -1 .
    cout<<"\n------------------------------------- \n";

    counter (-1,3);  // Error : can't start from 3 to -1 with step 1 .
    cout<<"\n------------------------------------- \n";

    counter (-1,-8,3);  // Error : can't start from -8 to -1 with step 3.
    cout<<"\n------------------------------------- \n";

    counter (-8,31,-2);  // Error : can't start from 31 to -8 with step -2 .
    cout<<"\n------------------------------------- \n";


    //running bonus test case .
    counter (100,1);  // 1 2 3 ..........98 99 100
    cout<<"\n------------------------------------- \n";

    counter (100);  // Massive number of iterations for our humble counter .
    cout<<"\n------------------------------------- \n";

    counter (200,-44);  // Massive number of iterations for our humble counter .
    cout<<"\n------------------------------------- \n";


    return 0;
}

void  counter(int end , int start  , int step )
{
    // 1- when end equal start /or/ not and step equal zero /or/ not .

    {
            //when end equal start and step equal zero /or/ not .

            if(end==start)
            {
                  if(step==0)
                  {
                    cout<<end<<endl;
                  }
                 else
                  cout<<"Error : can't start from "<< start <<" to "<< end<<" with step "<<step<<" ."<<endl ;
            }

            //when end not equal start and step equal zero .

            else if(step==0)
            {
                cout<<"Error : can't start from "<< start <<" to "<< end<<" with step with step "<<step<<" ."<<endl ;
                return;
            }
    }



    // 2- when end bigger than start /or/ start bigger than end .

    {
        if(start < end || start > end)
        {

            int i = start;

            while ((step > 0 && i <= end) || (step < 0 && i >= end))
           {
                i += step;
           }

            //To check the value of the last item .

            if (i - step == end)
            {
                /*condition for the counter to continue when end is less than or equal to 100
                  when start is bigger than or equal to zero and equal to one .*/

                if((end<100 && start >=0) || (end<=100 && start ==1))
                {
                    //order to start counter and print if start is less than end .
                    for(int x=start; x<= end ; x+=step)
                    {
                       cout<<x<<" ";
                    }
                }
                else
                  cout<<"Massive number of iterations for our humble counter . "<<endl;
            }
            else
            {
              cout << "Error : can't start from " << start << " to " << end << " with step " << step << "." << endl;

                return;
            }




            //To check the value of the last item .

            if (i - step == end)
            {
                //order to start counter and print if end is less than start .
                for(int x=start; x>= end ; x+=step)
                {
                    cout<<x<<" ";
                }
            }
            else
            {
              cout << "Error : can't start from " << start << " to " << end << " with step " << step << "." << endl;
                return;
            }

        }
    }
}
