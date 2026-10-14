#include <iostream>
#include<cmath>
using namespace std;
int main()
{
                int choice;
                int a,b;
                float x,y,num,angle;
                cout<<"------menu for calculation-----"<<endl;
                cout<<"1.addition of two integer"<<endl;
                cout<<"2.subtraction of two integer"<<endl;
                cout<<"3.multiplication of two integer"<<endl;
                cout<<"4.Division of two integers"<<endl;
                cout<<"5.Addition of two Floating Point Numbers"<<endl;
                cout<<"6.Subtraction of two Floating Point Numbers"<<endl;
                cout<<"7.Multiplication of two Floating Point Numbers"<<endl;
                cout<<"8.Division of two Floating Point Numbers"<<endl;
                cout << "9. Sine"<<endl;
                cout << "10. Cosine"<<endl;
                cout << "11. Tangent"<<endl;
                cout << "12. Square root"<<endl;
                cout << "13. Square"<<endl;
                cout << "14. Cube"<<endl;
                cout << "15. Exit"<<endl;
                cout<<"enter your choice"<<endl;
                cin>>choice;
                switch (choice)
                                {
                                              case 1:
                                                cout<<"enter two integers for additon: ";
                                                cin>> a>>b;
                                                cout<<"result="<<a+b<<endl;
                                                break;
                                                case 2:
                                                cout<<"enter two integers for subtraction: ";
                                                cin>>a>>b;
                                                cout<<"result"<<a-b<<endl;
                                                break;
                                                case 3:
                                                cout<<"enter two integers for multiplication: ";
                                                cin>>a>>b;
                                                cout<<"result"<<a*b<<endl;
                                                break;
                                                case 4:
                                                cout<<"enter two integers for divison: ";
                                                cin>>a>>b;
                                                cout<<"result"<<a/b<<endl;
                                                break;
                                                case 5:
                                                 cout << "Enter two float numbers: ";
                                                 cin >> x >> y;
                                                 cout << "Result = " << x + y << endl;
                                                break;
                                                case 6:
                                                cout<<"subtraction two floation of two number";
                                                cin>>x>>y;
                                                cout<<"result= "<<x-y<<endl;
                                                break;
                                                case 7:
                                                cout<<"multiplication two floation of two number";
                                                cin>>x>>y;
                                                cout<<"result= "<<x*y<<endl;
                                                break;
                                                case 8:
                                                cout<<"divison two floation of two number";
                                                cin>>x>>y;
                                                cout<<"result= "<<x/y<<endl;
                                                break;
                                                case 9:
                                                cout << "Enter angle in radians: ";
                                                cin>>angle;
                                                cout<<"result= "<<sin(angle)<<endl;
                                                case 10:
                                                cout << "Enter angle in radians: ";
                                                cin >> angle;
                                                cout << "Cosine = " << cos(angle) << endl;
                                                break;
                                                case 11:
                                                cout << "Enter angle in radians: ";
                                                cin >> angle;
                                                cout << "Tangent = " << tan(angle) << endl;
                                                break;
                                            case 12:
                                                cout << "Enter number: ";
                                                cin >> num;
                                                if (num >= 0)
                                                    cout << "Square root = " << sqrt(num) << endl;
                                                break;
                                            case 13:
                                                cout << "Enter number: ";
                                                cin >> num;
                                                cout << "Square = " << num * num << endl;
                                                break;
                                            case 14:
                                                cout << "Enter number: ";
                                                cin >> num;
                                                cout << "Cube = " << num * num * num << endl;
                                                break;
                                                case 15:
                                                cout<<"exiting program ab dafa hoo"<<endl;
                                                break;
                                                cout<<"invalid choice! try again babe"<<endl;
                                
                                           while (choice!=15);
                                                return 0;
                                                
                                }
                                                
}
