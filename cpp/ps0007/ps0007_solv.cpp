#include <iostream>

using namespace std;


const float PI = 3.141F ;


float dimensions [2] = {0,0} ;


float area_calc (char shape , float dimensions[]);


int main()

{

  char shape;

  //prompting user for shape. 1/1.5
  cout <<"Choose a shape from this list : \n "<<endl ;

  cout <<"1.area of rectangle . "<<endl ;

  cout <<"2.area of square . "<<endl ;

  cout <<"3.area of circle . "<<endl ;

  cout <<"4.area of triangle . "<<endl ;

  cout <<"5.area of rhompus . "<<endl ;

  cout <<"\n-----------------------------------"<<endl ;


  cin>>shape;
  switch(shape)
  //Prompt the user for dimensions according to the shape. 1/1
  {

       case '1' :

            cout<<"\nEnter length and width "<<endl;
            cin>>dimensions [0]>>dimensions [1];

            //Verify the validity of the entered data. 3/3
            if (dimensions [0] >=0 && dimensions [1] >=0)
            {
                // The output area of the shape . 1/1
                cout<<"\n area of rectangle is "<<area_calc(shape,dimensions)<<endl;
            }
            else
            {
                cout<<"\n Error : Please enter valid numbers .";
            }

       break;

       case '2' :

            cout<<"\nEnter Length of the side "<<endl;
            cin>>dimensions [0];

            //Verify the validity of the entered data.
            if (dimensions [0] >=0)
            {
                // The output area of the shape .
                cout<<"\n area of square is "<<area_calc(shape,dimensions)<<endl;
            }
            else
            {
                cout<<"\n Error : Please enter valid numbers .";
            }

        break;


        case '3' :

            cout<<"\nEnter radius "<<endl;
            cin>>dimensions [0];

            //Verify the validity of the entered data.
            if (dimensions [0] >=0)
            {
                // The output area of the shape .
                cout<<"\n area of circle is "<<area_calc(shape,dimensions)<<endl;
            }
            else
            {
                cout<<"\n Error : Please enter valid numbers .";
            }

        break;


        case '4' :

            cout<<"\nEnter the base and height"<<endl;
            cin>>dimensions [0]>>dimensions [1];

            //Verify the validity of the entered data.
            if (dimensions [0] >=0 && dimensions [1] >=0)
            {
                // The output area of the shape .
                cout<<"\n area of triangle is "<<area_calc(shape,dimensions)<<endl;
            }
            else
            {
                cout<<"\n Error : Please enter valid numbers .";
            }

        break;


        case '5' :

            cout<<"\nEnter Diagonal length d1 and Diagonal length d2"<<endl;
            cin>>dimensions [0]>>dimensions [1];

            //Verify the validity of the entered data.
            if (dimensions [0] >=0 && dimensions [1] >=0)
            {
              // The output area of the shape .
                cout<<"\n area of rhompus is "<<area_calc(shape,dimensions)<<endl;
            }
            else
            {
                cout<<"\n Error : Please enter valid numbers .";
            }

        break;


       default:

            cout<<" The shape is wrong , Choose again .";
    }

  return 0;

}


float area_calc (char shape , float dimensions[])

   {

     float area=0;
     while(shape=='1')
        {
            area=dimensions [0]*dimensions [1];
            return area;
        }

     while(shape=='2')
        {
            area=dimensions [0]*dimensions [0];
            return area;
        }

      while(shape=='3')
        {
            area=2*PI*dimensions [0]*dimensions [0];
            return area;
        }

      while(shape=='4')
        {
            area=0.5*(dimensions [0]*dimensions [1]);
            return area;
        }

      while(shape=='5')
        {
            area=0.5*dimensions [0]*dimensions [1];
            return area;
        }
       return 0;
   }
// great work 😎 8/10 ⭐
